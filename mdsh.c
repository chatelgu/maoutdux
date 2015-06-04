#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main (void) {
	char sp, buf[1024], *p, *execargv[(sizeof(buf) + 1) / 2], **pp;
	pid_t pid;

	while (fputs("$ ", stdout), fgets(buf, sizeof(buf) - 1, stdin)) {
		sp = 1;
		pp = execargv;

		for (p = buf ; *p ; p++) {
			if (isspace(*p)) {
				*p = '\0';
				sp = 1;
			} else {
				if (sp) {
					*pp++ = p;
					sp = 0;
				}
			}
		}
		
		if (execargv == pp) continue;

		*pp++ = NULL;
			
		pid = fork();
		if(pid) {
			wait(NULL);
		} else {
			execv(*execargv, execargv);
			perror(*execargv);
			exit(-1);
		}
		
	}
	puts("");
	return 0;
}
