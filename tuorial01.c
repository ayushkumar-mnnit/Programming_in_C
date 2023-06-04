
// Let us Write Our first Program in C
//Given Below is a simple program in C that Shows the basic syntax of C program.

#include<stdio.h>

int main(){
printf("Hello WOrld ");
return 0;
}
// Program is a set of instructions or statements which on execution performs a task.
//Basic structure of a C program looks like as shown above:

/* Some rules which are applicable to all C progam are,

1.Every C program executes instructions which are within main() function.
Means execution starts from 1st instruction written inside main() and goes upto
last instruction sequentilally. when all the instructions are executed successfully then
program terminates. 
2.After every instruction or statement we use ;(known as statement terminator) which indicates
that a particular statement is completed and move to next instruction now.
3.instructions are executed in the same order, they are written in the program.
4.Instruction are case sensitive.*/

/* Compiler- It is a computer programme which converts programming language into machine 
language so that computer can easily understand the instructions given in form
of a plain text, and perform the task.

Example: gcc is compiler for C, g++ is compiler for C++

tutorial01.c                      ----->> gcc compiler                             ----->>tutorial.exe
(Simple plain text file         (converts plain text file into executable file)   (.exe file is created which can be run now)
written in C but it has no
meaning to the computer)
*/

/* KEY-WORDS: These are the words whose meaning is already known to the compiler,
these words can not be used to name the variables or any other purpose .

There are 32 reserved keywords in C -

float , int , char , double , while , do , for , if , else , break , continue ...etc

*/

/*
collection of header files is known as library. All these header files contain 
some functions known as library functions which are used for various purposes.

when we write #include<stdio.h> then by doing so we are telling the compiler to include
the header file "stdio.h" so that we can use its "main()" function.

we write 'int main()' which means main function doesn't takes any input but returns an integer
in output, so 'return 0' is used, which tells the compiler that all the instructions of main()
have been successfully executed and now terminate the program.

*/
