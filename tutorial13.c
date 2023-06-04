
// DYNAMIC MEMORY ALLOCATION (DMO) :

/* compiler allots a reserved memory to different types of data .
This is sort of static memory becoz it is alloted at the time of
declaring data type before running the program.
ex. as soon we write 'int x' , 4 bytes are alloted to variable 'x' for storing integer.

but sometimes we realise that alloted space is becoming short so we need more memory
then memory is alloted dynamically (in the runtime) means memory is increased when the
code is running.
ex. 'int a[12]' --->this array 'a' can store 12 integers so initially compiler allots
12*4=48 bytes (static memory) but now if we need to store 4 more integers , 16 more bytes are
added in the runtime (dynamic memory).*/

/*memory can be decreased also using dynamic meomry when we feel that
earlier the space alloted by compiler in the memory is exceeding the requirement now,
so decreasing the memory dynamically is good option to free up the system resources.

Note:1. DMO is done using some special functions -> malloc(),realloc(),free(),calloc() 
2. These functions come under <stdlib.h> header file of C library. */

/* malloc() - stands for memory allocation.

takes number of bytes to be alloted then assigns a pointer to that chunk of bytes.
now this extra memory can be accessed using this pointer (it holds the address of that
chunk). this pointer is of type 'void'.

In short, malloc()--> takes no. of bytes to be allocated as input and returns pointer
of type 'void'.
syntax:   ptr=(datatype*)malloc(n*sizeof(datatype))

this means that memory='n' number of bytes times size of data type ,is allocated and a void
pointer associated with this memory is returned by malloc().Now void pointer is typecasted
to 'datatype' pointer 'ptr' because pointer must be of the that datatype which we want to store
in this alloted memory. if n is too large that system can't provide that much memory then
malloc() returns 'NULL'pointer .*/

#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
ptr=(int*)malloc(4*sizeof(int)); // ptr is integer pointer pointing on a chunk of 16-bytes memory
// now we can store 4 integers in this memory.
ptr[0]=23;
ptr[1]=22;   // its like storing int in array the only difference is that in array we have
ptr[2]=203;  // fixed memory(static) but here we have variable memory(dynamic).
ptr[3]=238;
for(int i=0;i<4;i++){
printf("%d\n",ptr[i]);
}
printf("All the four intgers have been successfully stored in dynamic memory.");
return 0;
}

/*calloc() stands for continuous allocation.

it also returns a void pointer and allots continuous memory blocks of equal size.
by default each block contains null value(for int -> 0 for float and double -> 0.0
,for char-> nothing ) if nothing is assigned to the memory.

// Note: In malloc() also, continuous allocation may be present but its not necessary always.

syntax:   ptr=(datatype*)calloc(m,sizeof(datatype))

here 'm' is no. of blocks (of equal size) */

#include<stdio.h>
#include<stdlib.h>

int main(){
float *ptr;
ptr=(float*)calloc(3,sizeof(float));
for(int i=0;i<4;i++){
    printf("%f\n",ptr[i]); // returns 0.0 since nothing was assigned to allocated memory.
}
return 0;
}

/* free() - used to free up the dynamically allocated memory
i.e. memory allocated by malloc() or calloac(). syntax: free(ptr) */

#include<stdio.h>
#include<stdlib.h>
int main(){
char *ptr;
ptr=(char*)calloc(3,sizeof(char));
ptr[0]='a';
ptr[1]='b';
ptr[2]='c';
printf("%c\n",ptr[0]);
printf("%c\n",ptr[1]);
printf("%c\n",ptr[2]);
//now we free the memory to decrease it to single block only
free(ptr);
printf("After decreasing the memory using free()\n");
ptr=(char*)calloc(1,sizeof(char));
ptr[0]='d';
printf("%c\n",ptr[0]);
return 0;
}

/* realloc() stands for reallocation of the allocated dynamic memory.

only memory allocted by malloc() and calloc() can be reallocated ,not that one which
compiler allocates.

syntax:  ptr=realloc(ptr,newsize)  */

#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
ptr=(int*)calloc(3,sizeof(int));
// store first n even numbers
ptr[0]=0;
ptr[1]=2;
ptr[2]=4;
printf("First 3 even numbers are:\n");
for(int i=0;i<3;i++){
   printf("%d\n",ptr[i]);
}                                 
// now reallocation to store first n+2 odd numbers
printf("First 5 odd numbers are:\n");
ptr=realloc(ptr,5); // new size is 5 means 2 more blocks are allocated to intial memory.
ptr[0]=1;
ptr[1]=3;
ptr[2]=5;
ptr[3]=7;
ptr[4]=9;
for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
}
return 0;
}
/* NOTE: free()-> all the allocated memory becomes free, now fresh allocation can be done.
realloc()-> additional increment or decrement can be done to existing allocated memory */
