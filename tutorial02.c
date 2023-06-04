 
// VARIABLES , CONSTANTS , COMMENTS and DATA TYPES :

/* Variables- These are like containers which are used to store data.
or variable is the name of memory location which stores some data.

when we write 'int a=23' then 23 gets stored in a memory block of memory unit . Now 
that memory block is variable and we give a name 'a' to that memory block so that when we 
want to access 23 then we can use 'a'

'int' means type of data stored in variable 'a' is integer. 

Rules for declaring variable names-

1.variable name can start with underscore and alphabets only.
2.After intial letter , digits can also be included.
3.Spaces and special characters are not allowed.
4.variable names are case sensitive.
5.Reserved key words can't be used in variable names.

*/

/* Constants- immutable ( unchangeable ) entities.

if we want to make variable , a constant then add 'const' keyword then write data type and 
variable name.
ex. const int a=23 ---> now 'a' is constant and can be changed further.Means writing 
int a=24 will give error now.
but if int a=23 is written then in next line we can assign a=24 and now updated value
in 'a' is 24 finally.( Becoz Here 'a' is variable.)

In C we have 3 main constants these are:

1. Real constants:  all real numbers except integers (ex 23.4 , 0.34 , pi , -45.677)
2. Integer constants:  all integers  (ex. -2 , -3 , 0 , 3 , 4 )
3. character constants: all alphabets and special characters. (must be enclosed within '')

*/


/*Data Types in C- there are mainly 4 data types in C

1. int (by default its signed/unsigned long )-->  integer values
2. float-->  decimal numbers with single precision or low precision (ex. 23.4)
3. double (by default its short)-->  decimal numbers with double precision or high precision (ex. 23.4323)
4. char (by default its both signed & unsigned )--> all alphabets and special characters. (must be enclosed within '')


NOTE: sizeof() returns the number of bytes occupied by a data type in our system.*/

//ex.

#include<stdio.h>
int main(){
printf("%d",sizeof(long double));   // prints 12
return 0;
} 

/* size of these data types may vary machine to machine . In my system (64-bit) size is as shown,

DATA TYPE               MEMORY RESERVED (in bytes)

signed/unsigned char           1
signed short int               2
unsigned short int             2
signed long int                4
unsigned long int              4
unsigned long long             8
signed long long               8
float                          4
double                         8
long double                   12

*/
// clearly both float and double lie within real constants category.


/* Comments- These are the instructions in the program which are ignored by the compiler,
and are not executed. we use comments in our code to increase the readability of 
of program or to add some notes.

Single line comments- 2 forward slashes // are used before  a line which we want to comment out
Multiple line comments- /* multiple lines written here are commented out */

// we can use ctrl+/ to comment and uncomment a line.