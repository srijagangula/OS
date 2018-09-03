# OS
git
* git clone <url>
* touch README.md
* git add .
* git commit -m "msg"
* git push

Lab
* git init
* touch README.md
* git add .
* git commit -m "msg"


Makefile
ELF

Program
* text
* data
* bss
* stack
* heap

Stack Frame
CRT
Process vs Program

System
* CPU
* I/O
* Memory

CPU
* GPR
* Flags
* PC
* SP

Library Types
* Static
* Dynamic (shared objects)

Static Library
* ar -crv libarith.a add.o sub.o
* ar x libarith.a

Dynamic Library
* gcc -o libarith.so add.o sub.o -fPIC --shared

Linking Library
* -L. -larith

OS
* Address space
* User space
* Kernel space
* Monolithic Kernel
    * All OS components a single address space
    * eg. Linux
* Micro Kernel
    * Message passing
    * System processes and User processes
    * eg. Minix, QNX

Library Calls
* User space
* libc
* printf, scanf, strcpy
* LC may or may not call a system call
* Buffered I/O 
* Formatted I/O
 
System calls
* Kernel space
* Implemented by the OS
* Every OS will have different system calls
* Non-Buffered I/O
* Non-formatted I/O

Opaque Datatypes

Popular system calls
* open
* read
* write
* close

File descriptor
perror
errno

