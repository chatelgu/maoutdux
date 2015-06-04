#include <stdio.h>

int main (int argc, char *argv[]) {
	while (--argc) {
		fputs(*++argv, stdout);
		putchar (argc == 1 ? '\n' : ' ');
	}
	return 0;
}
