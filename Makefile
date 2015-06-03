all: echo mdsh

echo: echo.c
	gcc -Wall -pedantic-errors echo.c -o echo

mdsh: mdsh.c
	gcc -Wall -pedantic-errors mdsh.c -o mdsh

clean:
	rm -f echo mdsh

.PHONY: clean all
