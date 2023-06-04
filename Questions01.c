/*Q.1 write a C program to calculate the area of a circle and modify the same program to calculate
the volume of a cylinder given its radius and height.*/

#include <stdio.h>

int main()
{
int r = 2;
double pi = 3.14;
printf("The area of the circle is= %f\n", pi * r * r);
int h=4;
printf("Volume of the cylinder is= %f",h*pi*r*r);
return 0;
}

/*Q.2 write a C program to calculate the area of a rectangle by taking input fromt the user.*/

#include<stdio.h>

int main()
{
int l;
int b;
printf("Enter the value of length=\n",l);
scanf("%d",&l);
printf("Enter the value of breadth=\n",b);
scanf("%d",&b);
printf("The area of rectangle is =%d", l*b);

return 0;
}

/*Q.3 write a C program to convert Celsius temperature to Farenhite by taking input fromt the user.*/

#include<stdio.h>

int main(){
int T1;
printf("Enter the temperature in degree Celsius=",T1);
scanf("%d",&T1);
float F=(9*T1+160)/5;
printf("\nTemperature in degree Farenhite is= %f", F);
return 0;
}

/*Q.3 Write a C program to make a simple calculator which can perform simnple operations
by taking 2 inputs fromt the user.*/

#include<stdio.h>

int main(){
float a;
float b;
printf("Enter the value of a is=",a);
scanf("%f",&a);
printf("Enter the value of b is=",b);
scanf("%f",&b);
float sum=a+b;
printf("Sum is=%f", sum);
float product=a*b;
printf("\nproduct is=%f", product);

return 0;
}


/*Q.4 Write a C program to calculate the simple the simple interest
by taking 2 inputs fromt the user.*/

#include<stdio.h>

int main(){

int p,r,t;

printf("Enter the principle amount here= " ,p);
scanf("%d",&p);

printf("Enter the rate  here= " ,r);
scanf("%d",&r);

printf("Enter the time (in years) here= " ,t);
scanf("%d",&t);

double SI=(p*r*t)/100;

printf("Simple interest on your principle amount is= %f", SI);

return 0;
}