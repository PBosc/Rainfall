#include <stdio.h>
#include <stdlib.h>

void o(void) {
	system("/bin/sh");
	exit(1);
}

void main(void) {
	char input[520];

	fgets(input, 512, stdin);
	printf(input);
	exit(1);
}