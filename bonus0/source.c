#include <stdio.h>
#include <string.h>
#include <unistd.h>

void get_input(char* dst, char* prompt) {
	char* nl_idx;
	char input[4104];

	puts(prompt);

	read(0, input, 4096);

	nl_idx = strchr(input, '\n');
	*nl_idx = '\0';

	strncpy(dst, input, 20);
}

void combine_inputs(char* dst) {
	char cur;
	unsigned remaining_length;
	char* tmp;
	char first_input[20];
	char second_input[20];

	get_input(first_input, "-");
	get_input(second_input, "-");

	strcpy(dst, first_input);

	remaining_length = 0xffffffff;
	tmp = dst;
	do {
		if (remaining_length == 0) break;
		remaining_length -= 1;
		cur = *tmp;
		tmp++;
	} while (cur != '\0');

	*(dst - remaining_length - 2) = ' ';

	strcat(dst, second_input);
}

int main(void) {
	char output[54];

	combine_inputs(output);
	puts(output);

	return 0;
}