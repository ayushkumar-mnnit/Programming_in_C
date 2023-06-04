
// Q.1 Write a C program to find the average of 4 numbers using user defined function.

#include<stdio.h>
double avg(int a,int b,int c,int d);
double avg(int a,int b,int c,int d){
    double avg=(double)(a+b+c+d)/4; // here all (a,b,c,d,4) were int, so result will be int
    return avg;                    // (GIF value),  so to get a correct ans we do typecasting
}
int main(){
int a,b,c,d;    
printf("Enter value of 1st number= ",a);
scanf("%d",&a);
printf("Enter value of 2nd number= ",b);
scanf("%d",&b);
printf("Enter value of 3rd number= ",c);
scanf("%d",&c);
printf("Enter value of 4th number= ",d);
scanf("%d",&d);
double av=avg(a,b,c,d);
printf("The value of average  of 4 numbers entered by you is= %f",av);
return 0;
}

// Q.2 write a recursive function to calculate the sum of first 'n' natural numbers.

int nsum(int n);
int nsum(int n){
if(n==1){
    return 1;
}
else if(n==0){
    return 0;
}
else{
    return (nsum(n-1)+n);
    }
}
#include<stdio.h>

int main(){
int n;
printf("Enter the number= ");
scanf("%d",&n);
nsum(n);
printf("The sum of 1st %d natural numbers is= %d",n,nsum(n));
return 0;
}

/* Q.3 Write a function to print the given pattern (first 5 lines).

*
***
***** 

*/

#include<stdio.h>

void stars();
void stars(){
for(int i=1;i<2;i++)
printf("%c",'*');
printf("\n");
for(int j=1;j<4;j++)
printf("%c",'*');
printf("\n");
for(int k=1;k<6;k++)
printf("%c",'*');
printf("\n");
for(int l=1;l<8;l++)
printf("%c",'*');
printf("\n");
for(int m=1;m<10;m++)
printf("%c",'*');
}
int main(){
stars();
return 0;
}

// Q.4 Write a recursive function to calculate the nth term of fibonacci sequence. 

/* fibonacci sequence is : 0,1,1,2,3,5,8,13,21,34....
(each succeeding term= sum of 2 preceding terms ,after first 2 terms) */

int fibo(int n);
int fibo(int n){
if(n==1){
    return 0;
}
else if(n==2){
    return 1;
}
else{
    return (fibo(n-1)+fibo(n-2));
    }
}
#include<stdio.h>
int main(){
int n;
printf("Enter the number= ");
scanf("%d",&n);
fibo(n);
printf("%dth term of the Fibonacci sequence is= %d",n,fibo(n));
return 0;
}