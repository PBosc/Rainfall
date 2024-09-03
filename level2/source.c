#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void main(void) {
	unsigned int addr;
	char input[76];

	fflush(stdout);
	gets(input);
	if ((addr & 0xb0000000) == 0xb0000000) {
		printf("(%p)\n", addr);
		exit(1);
	}
	puts(input);
	strdup(input);
	return;
}
