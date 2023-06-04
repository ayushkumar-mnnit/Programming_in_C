
/*Q.1 write a C program to find whether a particular student is pass or fail
if it requires atleast 33% in each subject and overall atleast 40%. Assume 3 subjects
and take input from the user.*/

#include<stdio.h>

int main(){
int p;int c;int m;
int total=p+c+m;

printf("Enter the marks in Physics (out of 100)= ",p);
scanf("%d",&p);
printf("Enter the marks in Chemistry (out of 100)=",c);
scanf("%d",&c);
printf("Enter the marks in Mathematics (out of 100)=",m);
scanf("%d",&m);
if(p>=33 && c>=33 && m>=33 && total>=120){
    printf("Congrtaulations ! You are Passed");
}
else{
    printf(" Sorry ! You are Fail");
}
return 0;
}

/* Q.2 Calculate the amount of tax paid by the employees as per mentioned slabs.
(2.5-5.0] Lakhs   -----> 5%
(5.0-10.0] Lakhs  -----> 10%
(Above 10) Lakhs  -----> 15%  */

#include<stdio.h>

int main(){
float income;
printf("Enter the income of the employee (in Rs.) = ",income);
scanf("%f",&income);
if(income>250000 && income <=500000){
    printf("You have to pay 5 Percent tax on your income.");
}
else if (income>500000 && income <=1000000){
    printf("You have to pay 10 Percent tax on your income.");
}
else if (income>1000000){
    printf("You have to pay 15 Percent tax on your income.");
}
else{
    printf("You are exempted from tax");
}
return 0;
}

// Q.3 write a C program to check whether a year entered by the user is a leap year or not.

#include <stdio.h>

int main()
{
int y;                         /* a leap year is divisble by 4 and if year is end of century*/
printf("Enter the year= ", y); /* then it should be divisble by 400 */
scanf("%d", &y);
if (y % 4 == 0 && y % 100 != 0)
    { /* all years except century years aren't divisible by 100*/
    printf("Leap year");
    }
else if (y % 400 == 0)
    {
     printf("Leap year");
    }
else
    {
    printf("Not a leap year");
    }
    return 0;
}

/* Q.4 write a C program to find whether a charcter enterd is uppercase or lowercase, */

/* we use ASCII(Amercican standard code for information interchange) values to check encoding
format of a charcter for text data in computers and on internet.
Standard Ascii codes are numbered from 0 to 127, on extending goes upto 255. 
Ascii codes are written different formats like decimal,hexadecimal,binary,octal.
ex. for lower case letters a to z Ascii codes in decimal format are 97 to 122
in octal format are 141 to 172.
*/

#include<stdio.h>

int main(){

char ch;
printf("Enter the character here = ",ch);
scanf("%c",&ch);
if(ch>=97 && ch<=122){
    printf("Lowercase");
}
else if(ch>=65 && ch<=90) {
    printf("Uppercase");
}
return 0;
}

// Q. 5 write a C program to find the greatest of three numbers entered by the user.

#include<stdio.h>

int main(){
int n1,n2,n3;
printf("Enter n1= ",n1);
scanf("%d",&n1);
printf("Enter n2= ",n2);
scanf("%d",&n2);
printf("Enter n3= ",n3);
scanf("%d",&n3);

if((n1>n2) && (n1>n3)){
    printf("n1 is greatest");
}
else if ((n1>n2) && (n1<n3)){
    printf("n3 is greatest");
}
if((n2>n1) && (n2>n3)){
    printf("n2 is greatest");
}
else if ((n2>n1) && (n2<n3)){
    printf("n3 is greatest");
}
if((n1==n2) && ((n3<n1) || (n3==n1))){
    printf("Can not say");
}
else if ((n1==n3) && ((n2<n1) || (n2==n1))){
    printf("Can not say");
}
else if ((n3==n2) && ((n3>n1) || (n3==n1))){
    printf("Can not say");
}
return 0;
}