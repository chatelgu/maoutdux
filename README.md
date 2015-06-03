I’m doing a (free) operating system (just a hobby, won’t be big and
professional like gnu).

Here is a `echo` and a shell implementation called `mdsh` (MaoutDuxSHell). A
kernel should follow.

## Building

    $ make

## Usage

1. run `mdsh`
2. test some commands: `$ ./echo aa bbb cc`


`echo` will output every token passed as argument to the standard output. Each token will be separated by a space, and a newline will be insterted at the end.
