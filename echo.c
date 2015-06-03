#include <stdio.h>

int main (int argc, char *argv[]) {
	if (++argv, --argc) {
		while (putchar (*(*argv)++), **argv);
		putchar (' ');
		return main (argc, argv);
	} else {
		putchar ('\n');
		return 1;
	}
}
