void greetuser(void) {
	undefined4 local_4c;
	undefined4 local_48;
	undefined4 local_44;
	undefined4 local_40;
	undefined2 local_3c;
	undefined local_3a;

	if (language == 1) {
		local_4c._0_1_ = 'H';
		local_4c._1_1_ = 'y';
		local_4c._2_1_ = 'v';
		local_4c._3_1_ = -0x3d;
		local_48._0_1_ = -0x5c;
		local_48._1_1_ = -0x3d;
		local_48._2_1_ = -0x5c;
		local_48._3_1_ = ' ';
		local_44._0_1_ = 'p';
		local_44._1_1_ = -0x3d;
		local_44._2_1_ = -0x5c;
		local_44._3_1_ = 'i';
		local_40 = 0xc3a4c376;
		local_3c = 0x20a4;
		local_3a = 0;
	} else if (language == 2) {
		local_4c._0_1_ = 'G';
		local_4c._1_1_ = 'o';
		local_4c._2_1_ = 'e';
		local_4c._3_1_ = 'd';
		local_48._0_1_ = 'e';
		local_48._1_1_ = 'm';
		local_48._2_1_ = 'i';
		local_48._3_1_ = 'd';
		local_44._0_1_ = 'd';
		local_44._1_1_ = 'a';
		local_44._2_1_ = 'g';
		local_44._3_1_ = '!';
		local_40 = CONCAT22(local_40._2_2_, 0x20);
	} else if (language == 0) {
		local_4c._0_1_ = 'H';
		local_4c._1_1_ = 'e';
		local_4c._2_1_ = 'l';
		local_4c._3_1_ = 'l';
		local_48._0_3_ = 0x206f;
	}
	strcat((char*)&local_4c, &g_ADDR);
	puts((char*)&local_4c);
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
			if (memcmp(envlang, &DAT_0804873d, 2) == 0) {
				language = 1;
			} else if (memcmp(envlang, &DAT_08048740, 2) == 0) {
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
		ret = greetuser();
	} else {
		ret = 1;
	}
	return ret;
}