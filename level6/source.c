#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void n(void) {
	system("/bin/cat /home/user/level7/.pass");
	return;
}

void m(void* param_1, int param_2, char* param_3, int param_4, int param_5) {
	puts("Nope");
	return;
}

void main(int argc, char** argv) {
	char* __dest;
	void (*f)(void);

	__dest = (char*)malloc(64);
	f = (void**)malloc(4);
	f = m;
	strcpy(__dest, argv[1]);
	(**f)();
	return;
}