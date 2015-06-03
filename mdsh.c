#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main (void) {
	char *p, sp;
	char buf[1024];
	char *execargv[256];
	int execargc;
	pid_t pid;

	while (1) {

		sp = 1;
		execargc = 0;
		fputs("$ ", stdout);
		fgets(buf, sizeof(buf) - 1, stdin);
		for (p = buf ; *p ; p++) {
			if (isspace(*p)) {
				*p = '\0';
				sp = 1;
			} else {
				if (sp) {
					execargv[execargc++] = p;
				}
				sp = 0;
			}
		}
		
		if (!execargc) continue;

		execargv[execargc] = NULL;
			
		pid = fork();
		if(pid) {
			wait(NULL);
		} else {
			execv(*execargv, execargv);
		}
		
	}
}
