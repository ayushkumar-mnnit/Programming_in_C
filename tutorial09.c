

// ARRRAYS :

/* Array is the continuous arrangement of similar data types in memory location.
like if we store 5 integers together , or 5 character together then we call such arranements
arrays but 2 integers and 3 flaot stored together can't form an array.

means in any array , if 5 integers are stored then these will occupy continuous memory blocks 
one after other ,in memory locations. 

syntax-

datatype arrayname[size];

ex. int age[4]={13,16,17,15} ----> is an array of integer type whose size is 4 i.e.it 
contains 4 entities and name of this array is 'age'.

NOTE: size occupied by a particular data type depends on type of machine,
ex. 32-bit or 64-bit like that.

we know integer data types occupy 4-bytes so here 4 continuous blocks each of size 4 bytes
are allocated to 'age' to hold 13,16,17,15 .
*/

// Input and output in array:

/* we use 0-index system in C which means 1st block index value=0 , 2nd block index value=1
and so on for nth bock index value=(n-1)

input-> scanf("%d",&arrayname[index value])-->value is added to block whose index value written
output-> printf("%d",arrayname[index value])-->value of block whose index value written is printed
*/

#include<stdio.h>

int main(){
int age[4];
printf("Enter the age of student-1= ");
scanf("%d",&age[0]);
printf("Enter the age of student-2= ");
scanf("%d",&age[1]);
printf("Enter the age of student-3= ");
scanf("%d",&age[2]);
printf("Enter the age of student-4= ");
scanf("%d",&age[3]);
printf("age of student-3 is = %d ",age[3]);
return 0;
}

/* Initialisation of arrays:

just like variables ,arrays can also be initialised

ex. char vowels[]={'a','e','i','o','u'}  or  char vowels[5]={'a','e','i','o','u'}

during intialisation of array mentioning the size is not important so above written both
syntax are equally meaningful and correct.

*/

#include<stdio.h>

int main(){
char vowels[]={'a','e','i','o','u'};
printf("vowels in English alphabets ~ %c,%c,%c,%c,%c\n",vowels[0],vowels[1],vowels[2],vowels[3],vowels[4]);
printf("address is = %u\n",&vowels[0]);   /* By printing the address we can guartantee */
printf("address is = %u\n",&vowels[1]);   /* that continuous memory blocks are alloted */
printf("address is = %u\n",&vowels[2]);   /* to an array */
printf("address is = %u\n",&vowels[3]);
printf("address is = %u\n",&vowels[4]);
return 0;
}

/* NOTE: Memory reserved for an array= (memory occupied by data type)*(size of array)

ex. if in my machine 'int' data type occupies 4-bytes then an array 'int a[8]' will occupy
4*8 =32 bytes */


/*  Pointer arithemetic - 

All the arithemetic operations can not be performed on pointers but increment and decrement
operations can be performed.

when we write *ptr++ i.e. *ptr=*ptr+1 ---> increase the memory location (address) by 1 data type
ex.if integer pointer is used, the address stored in the pointer is increased by 4 bytes,so
if intial address was 2000 and pointer was pointing towards this address then  after *ptr++
pointer will point towards 2004 . means value of address of variable and value in the variable
remains unchanged.

similarly, decrement operator works. */ 

#include<stdio.h>

int main(){
int a=23;
int *ptr=&a;
printf("address of a is = %u\n",&a);
printf("value in ptr is = %u\n",ptr);
printf("value in ptr is = %u\n",*ptr);
*ptr++;
printf("value in ptr is = %u\n",ptr);
printf("address of a is = %u\n",&a);
printf("value of a is = %u\n",a);
return 0;
}

/*In this program we can see that after increment the value in variable 'a' remains entact
but address stored in pointer changed , so after *ptr++ when we print 'ptr' then it points 
towards address of some other variable next to 'a' present at 4 bytes ahead of 'a'.*/

/* Difference and comparision of pointers is also possible. 

Difference is done only for same data type pointers and in difference addresses
stored in 2 pointers are subtracted but result is not simple algebraic differnce but it
is in the form of data type.

Comparision returns binary output---> 1 (true) and 0 (false).  */

#include<stdio.h>

int main(){
int a=-24;
int _b=34;
int *x=&a;
int *y=&_b;

printf("address of a is = %u\n", x);
printf("address of _b is = %u\n", y);
printf("Difference is = %u\n", x-y);
printf("Comparision is = %u", x == y);
return 0;
}

/* address of a is = 6422292
address of _b is = 6422288 

difference=4 but since 4 bytes equivalent to 1 in 'integer' data type 
so we get 1 as output.

*/ 

// Array is a pointer :

/* Arrays are also pointers in which array name acts as pointer and points on 0th index
initially and all the values can be accessed one by one using the increment and decrement 
operators in pointers. 

Array representation:     ______________________________________
int ar[6]                |_23_|__45__|__56__|_12_|__233__|__57__|                                           
indices :                   0     1      2      3     4      5

int *ptr=&ar[0];     Both syntax means the same that 'ar' is a pointer 'ptr'
int *ptr=ar;          that points intially at 0th index.

*/

#include<stdio.h>

int main(){
int ar[]={23,45,56,12,233,57};
int *ptr=ar;                        /*initially ptr points on 0th index*/
printf("value is= %u\n",*ptr);       /* value of 0th index is printed*/
ptr++;                            /*now ptr points on 1st index*/
printf("value is= %u\n",*ptr);      /*value of 1st index is printed*/


return 0;
}

// Traverse an array: 
/* Traverse means travelling across or through something.
here we can run a loop to print all the values in one go because with the help of iterator
pointer travells across the array and prints each and every value one by one.*/

#include<stdio.h>

int main(){
int ar[6]={23,45,56,12,233,57};
int *ptr=ar;
for(int i=0;i<6;i++){
printf("value at index %d is= %d\n",i,ar[i]);  /* in place of ar[i] ,*(ptr+i) can be used */
}
return 0;
}


// Arrays as function arguements:

/* syntax-

function declaration (prtotype): void fucn(int ar[],int n)  or void funcn(int *ar,int n)
both formats are correct. Here n is size of array.

function call: funcn(ar,n)

Note: arrays are pointers so when we use them as arguements then it is always 
call by reference */


#include<stdio.h>
void even(int ar[],int n);
void even(int ar[],int n){
    for(int i=0;i<5;i++){
        printf("%d\t",ar[i]);
    }
}
int main(){
int ar[]={0,2,4,6,8};
even(ar,5);
return 0;
}

// using pointers also we can get the same output.

#include<stdio.h>
void even(int *ptr,int n);
void even(int *ptr,int n){
    for(int i=0;i<5;i++){
        printf("%d\t",*(ptr+i));
    }
};
int main(){
int ar[]={0,2,4,6,8};
int *ptr=ar;
even(ar,5);
return 0;
}

// Multi-dimensional arrays: contains linear arrays as elements.

/* Till now we were dealing with 1-D (linear) array,  now we deal with 2-D , 3-D arrays.

we can visualise multidimensional arrays as matrices.          _________
ex. 2-D array                                                  |_1_|_3_|
int ar[x][y]={{1,3},{4,2}}                                     |_4_|_2_|           
index  of 1 is (0,0) ; index  of 3 is (0,1) ; index  of 4 is (1,0) 
; index  of 2 is (1,1)                  ________________
but in the memory its stored as         |_1_|_3_|_4_|_2_|

In this syntax no. of [] tells dimension of array,and each individual array must be of 
same size like here, two arrays {1,3} and {4,2} have same size.
x ---> no. of linear arrays in our multidimensional array.
y --->  no. of  elements in each linear array which is equal always*/

#include<stdio.h>

int main(){
int arr[2][2]={{1,3},{4,2}};
printf("value at index (1,0)= %d",arr[1][0]); /*This is the way of printing desired element*/
return 0;
}


// ex. write a function to count the number of odd numbers in an array.

#include<stdio.h>
int  odd(int ar[],int n);
int  odd(int ar[],int n){
    int s=0;
    for(int i=0;i<6;i++){
        if((ar[i])%2!=0){
        s++;
        }
    }
    return s;
}
int main(){
int ar[]={1,2,3,4,5,6};
odd(ar,6);
printf("odd numbers = %d",odd(ar,6));
return 0;
}


// ex. write a function to reverse an array.

#include<stdio.h>
void rev(int a[],int n);
void rev(int a[],int n){
    for(int i=3;i>=0;i--){
    printf("%d\t",a[i]);
    }
}
int main(){
int a[]={23,4,52,3};
rev(a,4);
return 0;
}

// ex. Create a 2-D array and print the table of 2 and 3 using function.

// #include<stdio.h>
// void tables(int ar[][10],int n,int m,int p);
// void tables(int ar[][10],int n,int m,int p){
// for(int i=0;i<m;i++){
// ar[n][i]=p*(i+1);
// printf("%d\t",ar[n][i]);
// printf("\n");
// }

// }
// int main(){
// int ar[2][10];
// tables(0,10,2);
// tables(1,10,3);
// return 0;
// } 
