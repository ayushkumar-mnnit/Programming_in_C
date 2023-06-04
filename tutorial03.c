
// LIBRARY FUNCTIONS:

/* These are the valuable in-built functions in C which provides us the ability to perform
certain tasks easily.
for example- printf() is used to print the output on the screen.
Note: use %d(to print integers), use %f (to print real constants i.e. float or double), 
use %c (to print Character) .
%d , %f , %c these all are known as 'format specifier'*/

// Example:

#include<stdio.h>
int main(){
int a=4;
float b=23.5;
double _b=23.56;
char c='M';
printf("The value of a is %d \n", a);
printf("The value of b is %f \n", b);
printf("The value of _b is %f \n", _b);
printf("The value of c is %c ", c);

return 0;
}

// we use scanf() function to take input from the user.

// Example:
#include<stdio.h>
int main()
{
int p,q;

printf("Enter the value of p is=\n", p);
scanf("%d", &p);
printf("Enter the value of q is=\n", q);
scanf("%d", &q);

printf("sum of n1 and n2 is= %d", p+q);

return 0;
  
}

/*
& is the called 'address of' operator and '&p' means to copy the input value to the address
of variable p. */





