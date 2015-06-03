I’m doing a (free) operating system (just a hobby, won’t be big and professional like gnu).

Here is a `echo` implementation, and a shell called `mdsh` (MaoutDuxSHell). A kernel should follow.

## Building [![Build Status](https://travis-ci.org/maoutdu/maoutdux.svg?branch=master)](https://travis-ci.org/maoutdu/maoutdux)

    $ make

## Usage

1. run `mdsh`
2. test some commands like: `$ echo aa bbb cc` (this is the only available one for the moment)

`echo` will output every token passed as argument to the standard output. Each token will be separated by a space, and a newline will be insterted at the end.
