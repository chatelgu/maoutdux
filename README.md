I’m doing a (free) operating system (just a hobby, won’t be big and
professional like gnu).

Here is a `echo` implementation. A kernel should follow.

## Building

    $ make

## Usage

    $ ./echo (...)

    outputs every token passed as argument to the standard output. Each token
    will be separated by a space, and a newline will be insterted at the end.
