# Wild Pointer in C

**Author:** M.Likitha

## Description

A wild pointer is an uninitialized pointer that does not point to a
valid memory location.

This program demonstrates the correct way to initialize a pointer
before dereferencing it.

## File

wild_pointer.c

## Concepts Used

- Pointers
- Pointer initialization
- Dereference operator
- Wild pointer
- Memory addresses

## How to Run

gcc wild_pointer.c -o wild_pointer
./wild_pointer

## Sample Output

Value of number = 50

## Note

Never dereference an uninitialized pointer because it may cause
undefined behavior.
