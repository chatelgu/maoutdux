#include <stdio.h>

int main (int argc, char *argv[]) {
	char endchar='\n';
	if (!strcmp(argv[1],"-n")) {
		--argc;
		++argv;
		endchar=' ';
	}
	while (--argc) {
		fputs(*++argv, stdout);
		putchar (argc == 1 ? endchar : ' ');
	}
	return 0;
}
