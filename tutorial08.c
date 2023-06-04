
// POINTERS :

/*Pointers are the variables  used to store the adress of another variable.  

computer memory is divided into small blocks. when we assign some value (means data)
to a varaible then it gets stored in the memory block and variable is the name of that 
particular memory block.
all such blocks have a unique address in the memory unit. when the address of any 
variable is stored in another variable as data ,then such variables are known as pointers.

address of memory blocks vary machine to mahine.

ex. int a=23   , say its address in memory unit is 3235
    int b=3235 , say its address in memory unit is 4234

then here address of 'a' is stored as data in 'b' so b is pointer.
syntax:

int x=43; x is an integer variable.

just like a variables , pointers are written but only difference is that we put * then 
write any name and assign a varaible's address to it.

int *y=&x; means y is 'integer pointer' which contains 'address of x'  


int z=*y;    this gives the value stored in variable whose address is stored in pointer 

* (asterisk) --> value at address---> means extract the value present at address
stored in pointer i.e. value stored in variable(whose address is stored in pointer).

so here value 'at address' stored in pointer y is obtained to be 43 and now we assigned 
a new variable 'z' to it.

& (ampersand)---> address of---> gives the address of a variable written after '&'

*/


#include<stdio.h>

int main(){
int x=43;
int *y=&x;
int z=*y;
printf("The value stored in pointer y is = %d",z);
return 0;
}

/*pointer basically points towards the address of variable, when we require to access
the value stored at that address then we create a new variable and assign *pointer-name
to it ,this gives the value stored at that address.*/

/*
Declaring pointers: 

pointer's types depends upon the type of variable's address which is stored in pointer.
ex.means if you store address of integer variable then pointer will be integer pointer.

1.int a     ----> int *a   ----> integer pointer
2.float b   ----> float *b ----> floating pointer
3.char c    ----> char *c  ----> characater pointer
4.double d  ----> double *d ----> double pointer

*/

/* Format specifier in pointers:

when we want to print integer value of a variable then we used %d , similarly in pointers we print address using 
%p and %u .

%p ---> pointer address---> gives actual address, but in the form of hexadecimal value.
%u----> unsigned integers----> type casts hexadecimal value to +ve integer which is easy to understand.

so we mostly prefer %u over %p 

*/

#include<stdio.h>

int main(){
int a=-24;
int *b=&a;
printf("%u\n",&a);  /* &a means 'address of a' , so to print address we use %u */
printf("%u\n",b);   /* pointer 'b' also stores address of 'a' so again we are printing address so use %u */
printf("%u\n",&b); /* Now pointer 'b' also have an unique address, so again we use %u to print address */
printf("%d\n",*b); /* this gives value at address stored in b, that is value in a*/
printf("%d\n",*(&a));  /* this also checks address of a then prints value at that address*/
printf("%d\n",*(&b));  /* value at address of b i.e. value stored in pointer i.e. address of a*/

/* here when we are printing the values then we can use %u also becoz all are +ve 
integeral values, and infact %u can be used where we use %d 'if values are +ve integers' */
return 0;
}

// ex.


#include<stdio.h>

int main(){
int *ptr, x;
ptr=&x;
*ptr=0;
printf("x= %d\n",x);
printf("*ptr= %d\n",*ptr);
*ptr+=5;
printf("x= %d\n",x);
printf("*ptr= %d\n",*ptr);
return 0;
}

/* pointer to pointer: It stores memory address of another pointer. 
written by putting double ** 
*/

#include<stdio.h>

int main(){

int a=28;
int *p=&a;
int **q=&p;

printf("address of a is %u\n",&a);
printf("address of a(using pointer) is %u\n",p);
printf("address of p is %u\n",&p);
printf("address of p(using pointer to pointer) is %u\n",q);
printf("address of q is %u\n",&q);

// now say we have to print the value of a i.e. 28 using pointer to pointer

printf("The value of a is= %d ",*(*q));

return 0;
}

// Pointers in function call :

/* function call is of 2 types-

1. Call by value- a copy of arguement from 'main()' is passed to the function so
now if any change is done to this copy inside the called function then output in main()
remains same becoz  original arguement in main() is unaltered.

2. Call by reference- directly or indirectly original arguement is passed to
the called function so any change made to arguement appears in main() also and hence
output in main() , changes now.

Note:In pointers when address of variable (that is pointer) is passed as arguements then its
call by reference and when value of variable is passed as arguements then its call by value.

*/

// ex. Call by value-

#include<stdio.h>

void sq(int n);
void sq(int n){     // in 'call by value' on function call , copies of arguements are passed to
    n=n*n;         //function  and parameter of function makes copies of these arguements
    printf("square is= %d\n",n);   // now any change is done to copies not to original
}
int main(){        // no matter what sq() does with parameters ,it can't affect
int x=5;       // arguements of main(), so even though n=n*n but 'number' printed is 5 not 25
sq(x);
printf("Number after function call is= %d",x);
return 0;
}

// ex. Call by reference-

#include<stdio.h>

void _sq(int *n);
void _sq(int *n){    /* here after the call ,address of variable is accessed so if any change */
    *n=(*n)*(*n);      /* occurs then it directly occurs to the value of variable itself.*/
    printf("square is= %d\n",*n);
}                      /* so here indirectly original value of variable is passed so,*/
int main(){            /* changes made in parameter appears in arguements of main()  */
int x=5;
_sq(&x);
printf("Number after function call is= %d",x);
return 0;
}

/* NOte: in short call by value ---> changes in copy---> so no change in arguements of main()
 call by reference ---> changes in original---> so changes occur in arguements of main() */

#include<stdio.h>
void ad(int n);
void ad(int n){
printf("Address of n is = %u\n",&n);  
}
int main(){
int n=3;
printf("Address of n is = %u\n",&n);
ad(n);
return 0;
}

/* Both print statements are same but still different addresses are found why?
see 1st print statement is of main() so it prints the address of original n=4 while
2nd print statement is executed on function call (by value) so it prints the address of 
copy of n=4 ,as copy and original values will be in different memory blocks
so differnt addresses are obtained. */