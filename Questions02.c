

// Q.1 Write a C programme to check whether a number is divisible by 97 or not.

#include<stdio.h>

int main(){
int n;
printf("Enter the Number here =",n);
scanf("%d",&n );
printf("Divisible if remainder is zero, Remainder for entered number is =%d", n%97);
return 0;
}

// Q.2 Explain step by step the evaluation of the value of 3*x/y-z+k where x=2, y=z=3, k=4.

/* Here associativity is used ,Firstly (3*x) is evaluated.
Then the value obtained is divided by y
Then z is subtracted from the value obtained and finally addition of k.*/

#include<stdio.h>

int main(){
int x=2; int y=3; int z=3; int k=4;
float s=3*x/y-z+k;
printf("The solution of the given problem is =%f",s);
return 0;
}

// Q.3 What data type you will get when 3.0/8-2 is calculated ?

#include<stdio.h>

int main(){
float a=3.0;int b=8; float q=a/b-2;
printf("Quotient is =%f",q); // we get 'Double'
return 0;
}
