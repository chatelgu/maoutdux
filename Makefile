echo:
	gcc -Wall -pedantic-errors echo.c -o echo

clean:
	rm -f echo

.PHONY: clean
