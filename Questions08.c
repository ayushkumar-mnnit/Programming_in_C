

// // Q. write your own code to perform the function of strlen().

// #include<stdio.h>

// int main(){
// char a[]="Assassination";
// int i=0;

// while(a[i]!='\0'){
    
//     i++;
// }
// int s=0;
// s=s+i;
// printf("%d",s);
// return 0;
// }

// // Q. write a C program to slice a given string from m to n , where m and n are given by user.

// #include<stdio.h>

// int main(){
// char fr[]="Pomegrant";
// int m,n;
// printf("Enter the value of m= ");
// scanf("%d",&m);
// printf("Enter the value of n= ");
// scanf("%d",&n);
// for(int i=m;i<=n;i++){
//     printf("%c",fr[i]);
// }
// return 0;
// }

// Q.3 write a program to find the occurrence of a given character in string.

#include<stdio.h>
void oc(char n);
int main(){
char a;
char clg[]="National institute of technology ,Allahabad";
oc(a);
return 0;
}
char clg[]="National institute of technology ,Allahabad";
void oc(char n){
    int s=0,i=0;
    while(n==clg[i]){
    s=s+i;
    i++;
    if(clg[i]=='\0'){
        break;
    }
    }
printf("%d",&s);
}