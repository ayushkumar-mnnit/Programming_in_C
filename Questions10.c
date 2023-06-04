
//Q.1 Two numbers are written in a file, write a program to replace them with their sum.

#include<stdio.h>
int main(){
// first we open file in read mode to read data from the file 
int a,b;
FILE *k;
k=fopen("file7.txt","r");
fscanf(k,"%d\n",&a);
fscanf(k,"%d\n",&b);
fclose(k);
// now again we open the same file in writing mode to overwrite the sum on it.
k=fopen("file7.txt","w");
fprintf(k,"%d",a+b);
fclose(k);
return 0;
}