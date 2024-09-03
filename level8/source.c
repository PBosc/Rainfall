#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *service = NULL;
char *auth = NULL;

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
            auth = (char *)malloc(4);
            *auth = 0;
            if (strlen(auth_input) < 0x1f) {
                strcpy(auth, auth_input);
            }
        }

        if (strncmp(input, "reset", 5) == 0) {
            free(auth);
        }

        if (strncmp(input, "service", 7) == 0) {
            service = strdup(service_input);
        }

        if (strncmp(input, "login", 5) == 0) {
            if (auth != NULL && auth[8] == 0) {
                fwrite("Password:\n", 1, 10, stdout);
            } else {
                system("/bin/sh");
            }
        }
    }

    return 0;
}
