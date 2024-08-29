void p(char* param_1, char* _) {
	char* end;
	char local_100c[4104];

	puts(_);
	read(0, local_100c, 4096);
	end = strchr(local_100c, '\n');
	*end = '\0';
	strncpy(param_1, local_100c, 20);
	return;
}

void pp(char* param_1) {
	char cur;
	unsigned uVar2;
	char* str;
	char local_34[20];
	char local_20[20];

	p(local_34, "-");
	p(local_20, "-");
	strcpy(param_1, local_34);
	uVar2 = 0xffffffff;
	str = param_1;
	do {
		if (uVar2 == 0) break;
		uVar2 = uVar2 - 1;
		cur = *str;
		str++;
	} while (cur != '\0');
	*(undefined2*)(param_1 + (~uVar2 - 1)) = ' ';
	strcat(param_1, local_20);
	return;
}

int main(void) {
	char local_3a[54];

	pp(local_3a);
	puts(local_3a);
	return 0;
}