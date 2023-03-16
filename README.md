# C Programming: An Introduction

C programming is a powerful language that has been around for several decades, and it's still used in many modern software applications. In this README file, we will cover the basics of C programming, including its history, key figures, syntax, and tools.

## Why C Programming is Awesome

C programming is awesome for several reasons. First, it's a general-purpose language that can be used for a wide range of applications, including operating systems, embedded systems, and desktop applications. Second, it's a relatively low-level language, which means that it gives developers greater control over system resources like memory and CPU usage. Finally, C is a highly portable language, which means that it can be used on many different platforms, from microcontrollers to supercomputers.

## C Programming History

C programming was invented in the early 1970s by Dennis Ritchie, a computer scientist at Bell Labs. Ritchie created C as a successor to the B programming language, which he had also helped to develop. C quickly gained popularity as a language for writing operating systems, and it became the foundation for several modern operating systems, including Unix and Linux.

Brian Kernighan, another computer scientist at Bell Labs, worked closely with Ritchie on the development of C. Together, they wrote "The C Programming Language," which is still considered the definitive guide to C programming.

In the 1990s, Linus Torvalds used C to develop the Linux operating system, which has since become one of the most widely used operating systems in the world. Torvalds has also contributed to the development of other open-source software projects, including Git, a popular version control system.

## Compiling C Programs

To compile a C program, you'll need to use a compiler like gcc. When you type `gcc main.c` into the terminal, gcc will compile the code in the `main.c` file and generate an executable file called `a.out`.

The `main` function is the entry point for C programs. When you run a C program, the operating system loads the executable file into memory and jumps to the `main` function.

Inside the `main` function, you can use the `printf` function to print text to the console. You can also use the `puts` function to print a string followed by a newline character, and the `putchar` function to print a single character.

To find the size of a specific data type, you can use the `sizeof` operator. For example, `sizeof(int)` will return the number of bytes required to store an integer.

To write clean and readable C code, it's important to follow a consistent coding style. The official Holberton C coding style is based on the Linux kernel coding style, and it's enforced using a tool called `betty-style`. To check your code for compliance with the Holberton C coding style, run the `betty-style` command on your code.

When using standard library functions in your code, you'll need to include the appropriate header file. For example, if you want to use the `printf` function, you'll need to include the `stdio.h` header file.
