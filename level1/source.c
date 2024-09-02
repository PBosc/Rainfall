#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void run(void) {
	fwrite("Good... Wait what?\n", 1, 19, stdout);
	system("/bin/sh");
	return;
}

void main(void) {
	char input[76];

	gets(input);
	return;
}