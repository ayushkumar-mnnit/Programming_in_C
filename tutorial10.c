
// Strings :

/*  strings are simply 1-D arrays which contain only characters and one 
null character (\0) at the end.
Null character tells the compiler that string has terminated.

Initialising the strings -

so to create a string just write a 1-D character array and add \0 at the end.
characters are written within '' 

char st[]={'c','o','d','e','\0'}

another way of writing string is enclose within " "  and here
no need to add \0 becoz C compiler automatically adds it .

char st[]="code" 

*/

// Printing the string:

 // using (%c), simple loop and array: Method.1 

#include<stdio.h>
    
int main(){
char st[]="code";
for(int i=0;i<4;i++){
printf("%c",st[i]);        
}

return 0;
}
// using (%c), array pointers and loops:  Method .2

#include<stdio.h>
    
int main(){
char st[]="code";
char *ptr=st;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
}
return 0;
}

// using %s (format specifier for strings): Method.3

#include<stdio.h>
    
int main(){
char st[]="code";
printf("%s",st);        /* This methods prints the string as a whole */
return 0;               /* and in above 2 methods , character by character */
}

// Taking string as input from the user :

#include<stdio.h>

int main(){
char a[8];
printf("Enter your name here : ");
scanf("%s",a);  /* scanf also automatically adds null character after input */
printf("your name is %s ",a);
return 0;
}

/* Note: 

1. scanf can not be used to take input of multi-word strings,
by multi-word here we mean set of characters separated by spaces.
scanf only inputs continuous set of characters like if we write "hello friends"
then only "hello" will be printed , if we write "he llo" then only "he" will be printed
because in these cases scanf ignores everything after the 1st occurence of space

2. The size of the array>=numbers of characters in string including spaces.
i.e. string should be short enough to fit the array.

*/

// gets() and puts() function :

/*
gets() is used to take input of multi-word strings.
then can be printed using printf().

puts() is used to print the output of multi-word string.
It is used after gets() and no need to use printf() here.

*/

#include<stdio.h>

int main(){
char a[8];
printf("Enter your name here : ");
gets(a); 
puts(a);
// printf("your name is %s ",a);
return 0;
}

// Declaring strings using pointers :

/* char *ptr="Hello"
tells the compiler to store all the characters (including \0) of "Hello" 
in meomory in the form of array and ptr points on address of 0th index
character. 
 
String written using pointer can be re-intialised but using array it can't be.*/


#include<stdio.h>

int main(){
char b[]="what is your name";
// b="selina";        /* This line throw error here re-initialisation not possible */
printf("%s",b);
return 0;
}



#include<stdio.h>

int main(){
char *b="what is your name";
b="selina";                 /* here using pointer, re-intialisation possible*/
printf("%s",b);
return 0;
}


// Some standard library functions for strings : 

/* Here we focus on some important string functions only . To use them <string.h> 
header file has to be included .

1. strlen()- counts the number of characters in string excluding '\0' and including spaces.
2. strcpy(s1,s2)- copies content of 2nd string in 1st string.s1 must have enough space.
 means s1 is empty and s2 is non-empty.
3. strcat(s1,s2)- used to concatenate 2 strings,i.e. s1 ,s2 are joined together and s1 will
now contain s1 and s2 together (without spaces b/w s1 and s2) 
4. strcmp(s1,s2)- compares s1 and s2. returns 0,1 or -1 .
 if s1==s2----> 0
 if s1!=s2 then checks for the difference of 1st mismatching character of s1 and s2
 and returns 1 for +ve difference and -1 for -ve difference.
 null character is also considered in comparision.

*/

//ex.

#include<stdio.h>
#include<string.h>
int main(){
char *s1="I live in";
char *s2="India";
int a=strlen(s1);
printf("%d",a);       
int b=strcmp(s1,s2);  
printf("%d",b);   /* we get -1 as ascii value ( in numeric integer format) of space is 32*/
return 0;         /* and that of n is 110 . so difference is -ve.*/
}

#include<stdio.h>

int main(){
char s1[]="I live in";   /* remember atleast one of the string must be declared in */
char s2[]="India";       /* array format . both in pointer format are not allowed here*/
strcat(s1,s2);
printf("%s",s1);
return 0;
}