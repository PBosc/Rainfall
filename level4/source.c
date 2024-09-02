#include <stdio.h>
#include <stdlib.h>

int m;

void main(void) {
	char input[520];

	fgets(input, 512, stdin);
	printf(input);
	if (m == 16930116) {
		system("/bin/cat /home/user/level5/.pass");
	}
	return;
}