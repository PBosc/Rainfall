#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int language = 0;

void greetuser(void) {
	char greeting[100];

	if (language == 1) {
		strcpy(greeting, "Hyvää päivää");
	} else if (language == 2) {
		strcpy(greeting, "Goedemiddag!");
	} else {
		strcpy(greeting, "Hello");
	}
	strcat(greeting, &g_ADDR);
	puts(greeting);
	return;
}

int main(int argc, char** argv) {
	int ret;
	char* tmp;
	char* tmp2;
	char a[10];
	char arg2[36];
	char* envlang;

	if (argc == 3) {
		tmp = a;
		for (int i = 0; i < 19; i++) {
			*tmp = 0;
			tmp++;
		}
		strncpy(a, argv[1], 40);
		strncpy(arg2, argv[2], 32);
		envlang = getenv("LANG");
		if (envlang) {
			if (memcmp(envlang, "fi", 2) == 0) {
				language = 1;
			} else if (memcmp(envlang, "nl", 2) == 0) {
				language = 2;
			}
		}
		tmp = a;
		tmp2 = (char*)&g_ADDR;
		for (int i = 0; i < 19; i++) {
			*tmp2 = *tmp;
			tmp++;
			tmp2++;
		}
		greetuser();
		ret = 0;
	} else {
		ret = 1;
	}
	return ret;
}