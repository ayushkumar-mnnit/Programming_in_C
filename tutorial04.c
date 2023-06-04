
// INSTRUCTIONS AND OPERATORS:

/* C program is a nothing but a set of instructions which we give to machine
to perform a task.

The main kind of instructions in C are:
1. Type declaration instruction
2. Arithmetic instruction
3. Contol instruction */

// Type declaration instruction: used to declare a variable along with it's type .
// Example:
#include<stdio.h>

int main(){
int a=3;         // single variable can be declared and used together 
printf("a is =%d",a); // but always follow the better approach and i.e. "First declare then use"
return 0;      // becoz when multiple variables are there then we can't declare and use together  
}
// so here 'int a' is  Type declaration instruction that declares that a is an integer.

/* NOTE: Always declare the variable first then use,  
so if we write a=24; then write int a; --> 
compiler finds 'a'is used to store 24 but don't know what is 'a',it shows error no matter 
we declared that 'a' is integer in next line but compiler reads the instruction line by line 
from top to bottom so before going to 'int a' error is encountered and once any error comes
in the path of compiler no matter all the instruction afterwards are correct, will not be 
executed and program terminates at the very first error.*/

/*Arithmetic instruction: an instructiuon that  shows relation b/w operands and operators.
Arithmetic instructions are used to perform the arithmetic operations.*/

// Example:
#include<stdio.h>

int main(){
int n1=2,n2=3;
printf("The sum is =%d",n1+n2);
return 0;
}

/*here + is operator, n1 and n2 are operands(on which operation is done) and the n1+n2 is 
arithmetic instruction. + , - , * , / are common arithmetic operators.*/


// Example:

#include<stdio.h>

int main(){
int a=3;
int b=4;
int c;
c= a * b;
printf("The value of c is= %d", c);
return 0;
}
/* But a * b= c can not be written ,this is meaningless because if we write 12=c then 
we need to define what is 12 firstly, like we define c as integer firstly then asssigned it a value = a*b  */

/*we can not asssume any operator in C like if (4)(6) is written then in mathematics its assumed that 
multiplication operator is present b/w 4 and 6 but same in C will throw error.

To us exponents we have include a header file <math.h> then use pow(n1,n2) to calculate
the value of n1^n2  */

//Modular division Operator: Its used to find the value of remainder when 2 integers are divided.

/* denoted by %  , can't be applied on float only applicable on int and (Numerator>Denominator)
becoz if Numerator<Denominator then it returns numerator only.
for negative sign of numerator or denominator sign of numerator is considered in final answere.
*/

// Note: But in division operator if Numerator<Denominator then it returns 0 .

// Example:

#include<stdio.h>
#include<math.h>
int main(){
int p=7;
int q=2;
int u=-11;
int v=8;
int x=6;
int y=11;
int r; 
r=pow(p,q);
printf("The value of r is =%d\n", r);
printf("The value of remainder when p divided by q is =%d\n", p%q);
printf("The value of remainder when u divided by v is =%d\n", u%v);
printf("The value of remainder when x divided by y is =%d\n", x%y); /* gives wrong result as numerator<denominator*/
return 0;

}

// Type conversions:

/* Remember that operation between ,

int and int gives int
int and float gives float
float and float gives flaot

suppose you write 5/2 then it will return 2 because both  are integers so the ans is greatest integer of 2.5
But if we write 5.0/2 then it will return 2.5 as its a operation b/w float and int so ans will be float.

int a= 2.8 then a=2 will be stored because 'a' is integer and it can't store float.
float b=6 then b=6.0 will  be stored as 'b' can't store integer as its float.*/

//ex. convert 34.56 to integer , 23 to float , and 5 to char using typecasting

#include<stdio.h>
int main(){
// float a=34.56;
int a=(int)34.56;   // typecasting to int
printf("%d\n",a);
return 0;
}


#include<stdio.h>
int main(){
// int b=23;
float b=(float)23;   // typecasting to float
printf("%f\n",b);
return 0;
}


#include<stdio.h>
int main(){
// int c=5;
char c=(char)'5';   // typecasting to Char
printf("%c\n",c);
return 0;
}


// Example:
#include<stdio.h>

int main(){
int a=4.8/3; /* here a=1.6 but since type of a is int so type changes and ans comes out to be 1 */
float b=24/4; /* here b=6 but since type of b is float so type changes and ans comes out to be 6.0 */
printf("a is =%d\n",a);
printf("b is =%f",b);
return 0;
}

#include<stdio.h>

int main(){ 
float a;                 // In this program if both 'a' and 'b' will be int then in av=(a+b)/2
float b;                // will return int (which is GIF value) so we will not get correct value
printf("Enter a= ");   // if (a+b)%2!=0 , so atleast one out of a and b must be float or double
scanf("%f",&a);        // and accordingly 'av' will return correct float or double value.
printf("Enter b= ");
scanf("%f",&b);
float av=(a+b)/2; 
printf("%f",(av));
return 0;
}


// Operator precedence in C:

/* when number of operators are present in a intsruction then always follow this priority
order when parenthesis are not present, otherwise operations occur according to parenthesis.

1st priority-->   /, % , *
2nd priority-->   + , -
3rd priority-->   =

if tie occurs for equal priority then associativity is used which means put parenthiesis on first 2 operands,
solve them then move to next and so on, these paranthesis are put from left to right.

*/

// Example:

#include<stdio.h>

int main(){
int x=2;
int y=3;
int z; z= 2*x + 3*y;
int k; k= x*y/2;
float p= y%x*4; 
int w; w= (x+2)*y;
float j; j= x+2*y;
printf("z is %d\n", z);
printf("k is %d\n", k);
printf("w is %d\n", w);
printf("j is %f\n", j);
printf("p is %f\n", p);
return 0;
}


/* Control instructions : Used to determine the flow of program

1. Sequence control- determines the sequence in which different operations 
in instructions are executed in a program. ex. instructions involving operator precedence
for calculation.

2. Decision control- determines the execution of program's instructions based 
on some condition. ex- if , else if , else statements.

3. Loop Control- determines the flow of program's instruction according to loops. 
ex- for loop, do-while loop, while loop.

4. Case control- determines the instruction's execution according to different cases
ex. switch-case statements.

*/

/* Operators in C :

1.Arithmetic -->   + , - , * , / , % 
2.Relational -->  == , > , < , >= , <= , !=
3.Logical    -->  && (AND) , || (OR) , ! (NOT)
4.Assignment -->  = , += , -= , *= , /= , %=
5.Ternary    --> : , ?

operator precedence ~

!
*,/,%
+,-
<,>,<=,>=
==,!=
&&
||
=                                   


*/