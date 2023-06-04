
// FUNCTIONS AND RECURSIONS :

/* Sometimes code becomes so large that it becomes difficult to track that which portion
of code is doing what .so it is important to break the program in small pieces in which,
each piece of code performs a particular task.

FUNCTION- It is a block of code which performs a particular task in our program.
function can be used anywhere and any number of times in a program.
Basically , functions already contain set of instructions for performing a task in condensed 
form so when we need to perform the same task we actually need not to write that bunch of 
instructions again and again but simply use a suitable function.

Any function has 3 main parts- function call,function prtotype(declaration), function defintion

function prototype- it refers to telling the compiler about the function which we are declaring.

function call- using the function by writing function's name. it tells the compiler to execute
the called function at the time it is called.
when a function is called from the 'main()' then main function falls asleep temporarily,
at this time 'control' goes to 'called function' and main() wakes up once 
called function is executed.

function definition- it includes all the instructions of the function which are executed during
call.

* Note: 'control' -if any particular instruction being executed belongs to function1 then
 we say function1 has control if ,belongs to function2 then means function2 has control. */


#include<stdio.h>
void display();  /* function prototype */
void display(){   /* function definition */
    printf("This is printed from display function\n");
}

int main(){
display();      /* function call */
printf("This is printed from main function");
display();
return 0;
}


/* NOTE: 1.'void' means nothing is returned by display function.
2. we can call display function inside main function only becoz execution
of a C program starts from main() only.
3. there can be multiple functions in a C program.
4. every function is called directly or indirectly from main(). 
*/

/* Types of Function:

1. Library functions- already in-built, exists in C library .ex-printf()
2. User defined functions-declared and defined by user for different puposes.ex-average() */

/* Passing values to a function: 

we can pass values to a function and can get values in return from the function.
function may or may not take value also it may or may not return.
The value taken by function is written within () and is known as 'parameter'
The actual values given to the function during function call is stored in respective 
parameter , are known as 'arguements'.
The value returned by function is known as 'return value'

ex. we use library function 'int main()' 
int main(){
        
    return 0;     
}

This means 'main' is a function which returns integer value but takes nothing.
That's why we write 'return 0' which means main function returned 0 as integer
and this tells the system that all the instructions of 'int main()' are executed successfully */

#include<stdio.h>
int sum(int a, int b);             /* prototype */
int sum(int a, int b){             /* definition*/
    int sum=a+b;
    return sum;               /* a, b are parameters, 2,4 are arguments , 'sum' is return value*/
}
int main(){
int s=sum(2,4);                   /* function call with input 2,4*/
printf("sum is %d ", s);     /* After function call we assigned sum() to a variable 's' (integer) */
return 0;                     /* So that we can print the output becoz sum(2,4) is calculated by */
}                            /* the function and is stored in variable s .*/

/* Note: 1. function can return one value at time.
 2. variable name in different functions in a program may be same becoz they are 
independent of each other. Like if we replace s by a or b then also it will give the same 
result becoz sum() and main() are 2 differnet functions and same a and b can be 
indepently used in both the functions*/

/* example: calculate the area of square using the libraray function and also
calulate the area of circle using user defined function in the program.*/

#include<stdio.h>
#include<math.h>
int r;
double pi=3.14;
float area(int r);
float area(int r){
    float area=(pi*r*r);
    return area;
}
int main(){
int a;
printf("Enter the side of a square= ",a);
scanf("%d",&a);
printf("The area of square is = %f\n ",pow(a,2));
// we used 'pow()' function of 'math.h' library. pow(), returns double (data type).
printf("Enter the radius of circle= ",r);
scanf("%d",&r);
float c=area(r);
printf("The area of circle is= %f",c);
return 0;
}

// RECURSION:

/* A function defined in C can call itself, this process is known as recursion.
And the function calling itself is known as a recursive function.

ex. n!=n*(n-1)! so factorial can be calculated by allowing the factorial function to 
call itself again and again.  */

#include<stdio.h>

int factorial(int n);      /* when you enter say n=5 then 'else' satement is executed*/
int factorial(int n){      /* and then 5*4! comes now compiler tries to find 4! */
    if(n==1 || n ==0){     /* again 'else' executes and 4*3! comes and it goes on */
    return 1;              /*until compiler gets 1 or 0 and as it gets 1 or 0 ,*/
}                          /* 'if' is executed which says 1! or 0! is 1.*/
    else{                  /* This way program works to calculate the factorial*/
        return n*factorial(n-1);
    }
    
}
int main(){
int n;
printf("Enter the number = ");
scanf("%d",&n);
int s=factorial(n);
printf("factorial is = %d",s);
return 0;
}

/* NOTE: 1.The condition which doesn't call the function any further
is known as 'base condition'.
in above ex. return 1; is the base condition as function calling stops here

2. Usually we don't declare 'void' type in recursive function becoz 
we need return value here. */
