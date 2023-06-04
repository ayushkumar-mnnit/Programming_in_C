
// LOOP CONTROL INSTRUCTIONS :

/*  Loops are used when we want some set of instructions to execute repeatedly,
(over and over again) until the condition remains true.

3 types of loops in C are:

1.while loop
2.do-while loop
3.for loop

we can use any of them according to our convinience because more or less at machine level
same code written using different loops will yield same set of binary instructions hence,same
output.


* increment operator and decrement operators:

i+=1 , i=i+1 , i++ , all means the same---> increases the initial value by 1

i++ (post increment operator)----> use initial value then increase by 1
++i (pre increment operator)-----> increase by 1 then use.

here 'use' means , utilising the value for printing the output.

* in ths same way decrement operators exists and works accordingly.

Note: 1. (i+=1 or i=i+1)-----> i++ but (i+=2 or i=i+2) -----> i+++ (doesn't exists)
2. i*= , i/= , i-= , i%=  , also exists. */

/* for loop:

syntax:

for(initialisation;condition;updation){

}

initialisation condition or declaration statement -initial condition for the starting of loop.
condition-loop will run until this condition is met.
updation- initial condition modifies according to this condition.

*/

#include<stdio.h>

int main(){
for(int i=1;i<=6;i++){    /* Here i is known as iterator or counter variable, */
    printf("Hello\n");      /* which is used to track when to start loop,when to run, when to */
}                         /* terminate because there must be some reference according to which */
return 0;                 /* loop execution occurs. */
}
/* here we choose i as iterator means Printing of Hello depends on i, first time Hello is
printed when i=1 then keeps on printing unti i<=6 where i is increasing by 1 */

/* here we choose iterator as integer but it may be char , string, float, double also */

// example: print first 5 even numbers using for loop.

#include<stdio.h>

int main(){
for(int i=0;i<10;i=i+2){
    printf("%d\n",i);
}
return 0;
}

// example: print the small abcd using for loop.

#include<stdio.h>

int main(){
for(char i='a';i<='z';i++){
    printf("%c ",i);
}
return 0;
}

/* Note: if termination condition is not used then loop will execute until whole
memory of the system is occupied or  till infinity ,such loops are infinite loops.*/

/* while loop:

syntax:

intialisation;
while(condition){
    task to be done;
    updation;
}

*/

#include<stdio.h>

int main(){
int i=1;
while(i<=10){
    printf("%d ",i);
    i=i+2;
}
return 0;
}

// example: Using the while ,print the numbers from 0 to n , n given by the user.

#include<stdio.h>

int main(){
int n;
printf("Enter the value of n= ");
scanf("%d",&n);
int i=0;
while(i<=n){
    printf("%d,",i);
    i++;
}
return 0;
}

/* do-while loop:

syntax:

intialisaton;
do{
    task to be done;
    updation;
}
while(condition);

Note: in 'for' and 'while' loops firstly condition is checked then task is done but
in 'do-while' loop firstly task is done then conditon is checked.

*/

// example: using do-while print hello world 'n' number of times, 'n' entered by the user.

#include<stdio.h>

int main(){
int n;
printf("Enter the value of n= ");
scanf("%d",&n);
int i=1;
do{
    printf("Hello world\n");
    i++;
}
while(i<=n);
return 0;
}

/* break statement- once condition of break statement becomes true for the first time,
compiler will exit the loop from there and execute other instructions if present.*/

#include<stdio.h>
int main(){
int i=0;
while(i<=10){
    i++;
    if(i==9){
    break;
    }
    printf("Hello World\n");
}
printf("so, how are you youngman");
return 0;
}

/* continue statement- once the condition of this staement is met for the first time 
that particular instruction is skipped and rest all are executed. */

#include<stdio.h>

int main(){
int i=0;
while(i<=9){
   
    i++;
    if(i==5){
    continue;
    }
    printf("%d\n",i);
    
}
return 0;
}