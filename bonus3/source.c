#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char** argv) {
	int ret;
	char* tmp;
	char a[16];
	char b[66];

	FILE* pass = fopen("/home/user/end/.pass", "r");

	tmp = a;
	for (int i = 0; i < 33; i++) {
		*tmp = 0;
		tmp++;
	}

	if ((pass == (FILE*)0x0) || (argc != 2)) {
		ret = 0xffffffff;
	} else {
		fread(a, 1, 66, pass);
		*(a + atoi(argv[1])) = 0;
		fread(b, 1, 65, pass);
		fclose(pass);
		if (strcmp((char*)a, argv[1]) == 0) {
			execl("/bin/sh", "sh", 0);
		} else {
			puts(b);
		}
		ret = 0;
	}

	return ret;
}