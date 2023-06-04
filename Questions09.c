
// Q.1 write a C program to add 2 vectors, taking input from the user. 

#include<stdio.h>
typedef struct vectors{
int x;
int y;
}v;
int main(){
v v1,v2;
printf("Enter the value of x1 = ");
scanf("%d",&(v1.x));
printf("Enter the value of x2 = ");
scanf("%d",&(v2.x));
printf("Enter the value of y1 = ");
scanf("%d",&(v1.y));
printf("Enter the value of y2 = ");
scanf("%d",&(v2.y));
int sum1=v1.x+v2.x;
int sum2=v1.y+v2.y;
printf("sum of x components is = %d\n",sum1);
printf("sum of y components is = %d\n",sum2);
return 0;
}