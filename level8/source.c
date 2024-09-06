#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* service = NULL;
char* auth = NULL;

int main(void) {
	char input[128];
	char auth_input[2];
	char service_input[125];

	while (1) {
		printf("%p, %p\n", auth, service);

		if (fgets(input, sizeof(input), stdin) == NULL) {
			return 0;
		}

		if (strncmp(input, "auth ", 5) == 0) {
			auth = (char*)malloc(4);
			*auth = 0;
			if (strlen(auth + 6) < 0x1f) {
				strcpy(auth, input + 6);
			}
		}

		if (strncmp(input, "reset", 5) == 0) {
			free(auth);
		}

		if (strncmp(input, "service", 7) == 0) {
			service = strdup(input + 7);
		}

		if (strncmp(input, "login", 5) == 0) {
			if (auth[32] == 0) {
				fwrite("Password:\n", 1, 10, stdout);
			} else {
				system("/bin/sh");
			}
		}
	}

	return 0;
}
