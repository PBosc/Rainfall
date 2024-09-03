#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv) {
	char* command;
	__uid_t uid;
	__gid_t gid;

	if (atoi(argv[1]) == 423) {
		command = strdup("/bin/sh");
		gid = getegid();
		uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", &command);
	} else {
		fwrite("No !\n", 1, 5, (FILE*)stderr);
	}
	return 0;
}