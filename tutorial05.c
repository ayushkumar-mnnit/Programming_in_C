
// CONDITIONAL INSTRUCTIONS:

/* There are certain instructions which we want to execute when a particular set of
conditions are met , these are called conditional instructions.

1.Decision control instructions :  if-else statements
2.Case control instruction : switch case control statements */

// if-else statements:

#include<stdio.h>
int main(){
int age;
printf("Enter your age here =",age);
scanf("%d",&age);
if (age>=18){
printf("You are eligible for driving.");
}
else {             /* no condition is used in else so its written last and without ()*/
printf("You are not eligible for driving.");
}
return 0;
}

//Note: Using else is not necessary ,programe will work without else also. 

// Relational Operators : used to write conditons and to check their trueness.
/*
==   Equality
>=   Greater than or equal to
<=   Less than or equal to
!=   Not equal to
>    Greater than
<    Less than

Note: = is assignment operator while == is a relational operator used for checking equality.

*/

#include<stdio.h>
int main(){
int speed;
printf("The speed( in Km/hr) Captured is = ",speed);
scanf("%d",&speed);
if(speed>=70){
printf("Attention! You have to pay Rs.200 as penalty\n");
}
if(speed==40){
printf("Good! you are driving at economical speed\n");
}
else{
printf("Be safe, Happy Journey\n");
}
if(speed=40){
printf("Good you are driving at economical speed");
}
return 0;
}

/*
1. when we use multiple 'if' in same 'if-else' ladder then new 'if-else' ladder starts from where
consecutive 'if' occurs.
so they are independently executed and ofcourse after else new ladder starts.

2. In the above example if we use if(speed==40){
printf("Good! you are driving at economical speed"); statement after else, then compiler will consider
this 'if' as 'if' of another if-else ladder so it will be executed independently.
means for speed==40 both 'if' will be executed becoz condition is met for 1st 'if' as well as 2nd 'if'

3. Condition can be any valid instruction, in C any non-zero value is considered true.
40 is non zero speed so its executed. 
but when we write speed==40 then it prints "Good! you are driving at economical speed" becoz it considers the 
value entered by the user and founds condition true.

*/

/* Logical Operators:   Returns Boolean value i.e. True or False 
&& (AND) , || (OR) , ! (NOT)
AND :  True when both are true 
OR  :  True when atleast one is true 
NOT :  Just opposite i.e. True becomes False and vice-versa */ 

#include<stdio.h>
int main(){
int s;
int e;
printf("Enter Players economy here=\n ",e);
scanf("%d",&e);
printf("Enter Players strikerate here=\n ",s);
scanf("%d",&s);
if(s>=150 && e<=8){
    printf("Allrounder");       /* if we don't use logical operators then to satisfy multiple conditions together*/
}                              /* we have to use 'if' inside 'if' which means once outer 'if' is true then*/   
else{                         /* check for inner 'if' and so on , this decreses the readibility of code */
    printf("Other Type");    /* so its better to use logical operators*/
}
if(s<=110 || e<=6){
    printf("Bowler");
}
return 0;
}


// We use 'else if' statements when we we want the conditions are checked one by one.
/*  if(){}
    else if(){}
    else{}  

This above written series of instructions is known as if-else-if ladder. Here firstly 'if' is checked,
& its executed when found true.For false , 'else if' condition is checked and is executed for true 
otherwise other 'else if' are checked (if present, becoz multiple 'else if' can be present). 
And at last 'else' is executed when all conditions are false. else is optional , it may or may not be present
and if not present then nothing is printed in output.

*/

#include<stdio.h>
int main(){
int a;
printf("Enter the amount here= ",a);
scanf("%d",&a);
if(a>=4000){
    printf("Go on date with Aashima");
}
else if (a>=2000 && a<=3000){
    printf("Go on date with Kavya");
}
else if (a>=1500 && a<=1900)
{
    printf("Go on date with Shanaya");
}
else{
    printf("Dost hai na yar , unke sath sab manage ho jata hai");
}
return 0;
}

/* Sometimes its convenient to use 'one liner' if-else statements,
(condition)?printf(executes When true):printf(executes  when false)
? and : are known as ternary operators */

#include<stdio.h>
int main(){
int x;
printf("Enter the value of x here = ",x);
scanf("%d",&x);
(x%2==0)?printf("Even"):printf("Odd");
return 0;
}

// Switch case control statements:

/* These are used to make a choice from number of alternatives of a given variable.*/

#include<stdio.h>

int main(){
int n;
printf("Enter the number here = ");
scanf("%d",&n);

switch(n){             /* How switch instructions works */
case 1:               /* number entered is matched with number written against case,*/
printf("Mango");      /* if matches, then execution occurs otherwise checks for other cases */
break;                /* one by one. If no case matches then the default is executed. */    
case 2:               /* switch statement always takes the integral value */ 
printf("Strawberry"); /* if break statement is not used then all the cases including default */
break;                /* will be executed after the case which matches very first.*/
case 3:               /* case order don't affect the program */
printf("Pomegrant");
break;
default:
printf("Watermelon");
break;
}
return 0;
}




