#include <stdio.h>

int main (int argc, char *argv[]) {
	if (++argv, --argc) {
		while (putchar (*(*argv)++), **argv);
		putchar (argc == 1 ? '\n' : ' ');
		return main (argc, argv);
	} else {
		return 1;
	}
}
