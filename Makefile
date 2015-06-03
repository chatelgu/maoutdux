all: echo mdsh

echo:
	gcc -Wall -pedantic-errors echo.c -o echo

mdsh:
	gcc -Wall -pedantic-errors mdsh.c -o mdsh

clean:
	rm -f echo mdsh

.PHONY: clean all
