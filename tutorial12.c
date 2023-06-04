
// FILES - INPUT AND OUTPUT :

/* RAM is a volatile memory which stores the data temporarily and data is lost
as soon program terminates or power cuts-off.

So we use other types of memories which are non-volatile like hard disk.
Hard disk is a storage device which stores data permanently in the form of files.
file is a container for the storage of data in non-volatile memory.
When we want to access any file , we click on the file ---> file gets loaded in RAM
then can be read and even modified.

ex. when we write a program in vs code & it works also but why we save it ,because
if we won't then it will be lost as we exit vs code or as soon as power cuts-off as it was open
in RAM only and by saving we store the file in hard disk's any folder.


All the apps ,softwares ,games ,pictures ,videos etc. are stored in Hard disk in different 
folders (ex. local disk (C), DVD RW drive(E), Recovery(F) etc.) and when any game 
is clicked to open then all the files related to that are accessed by RAM then game opens.
depending on the space in RAM, speed of loading of files occurs and game opens accordingly.

If game is too large that RAM can't hold and load the files even temporarily then , game will
lag and won't run. 
So for proper and smooth working of any program , RAM must have enough space left even after
loading the files. 

NOTE: When working with RAM, you can access data in any order — it's random access,
not sequential access. That's why we call it random access memory
RAM is directly connected to your computer's motherboard, allowing for the fastest
speeds possible.
RAM doesn't come with very large space as hard disks ( now, even in TB ) because RAM has
to hold the files just temporarily not permanently.

*/

/* All the works of RAM discussed here can be done with help of a C program also.
means using C program files can be acessed and read as well as can be modified

file operations that can be done-->

create file--> open file--> read and write--> close file

types of files :

1.text files- data in the form of text which is meaningful to us.
ex. of extensions for text files .txt , .c ,. py , .cpp 
2.binary files- data in the form of combination of 0 and 1 only, not meaningful for us.
ex. of extensions for binary files .jpg , .mp3 , .mp4 , .exe

file operation can be done on both types of files but we focus on text files only.
*/

/* File pointer :

A "FILE" is a hidden structure that needs to be created for opening a file.
since structure is hidden, we use file pointer which points to this structure and 
file can be accessed.

FILE *p  --> this is a file pointer of file name 'p' and its type is FILE. */

/* opening and closing files :
FILE *p;
p=fopen("file name","mode"); ---> opens the file 'p'
fclose(p); ----> close the file 'p'

fopen -opening function , fclose -closing function

mode means the purpose for opening the file , it may be reading ,writing or something else.

importants modes in file opening are-

1. r   --> open to read in textual form (for text files only)
2. rb  --> open to read in binary form   (for binary files only)
3. w  --> open to write in textual form  (for text files only)
4. wb  --> open to write in binary form   (for binary files only)
5. a  --> open to append 

* fopen() returns 'NULL'  with r / rb if file doesn't exist which is to be opened.
* fopen() with w / wb creates a file if file doesn't exist and then opens. 
here overwriting occurs means when you add some data to file then
older data gets deleted and new data is stored thereafter.
* append means to add to exisiting data without affecting older one.

*/

#include<stdio.h>

int main(){
FILE *p;
p=fopen("file2.txt","w");
fclose(p);
return 0; 
}

/*NOTE: it is always advisable to close a file after using it, becsuse
when we open any file and start working on it then system gives some
resouces to it like memory so if we don't close it those resources will
be in use, in background and system's performance will decrease.*/

/*it is always a better practice to check whether a file 
exists or not before opening it.*/


#include<stdio.h>

int main(){
FILE *ptr;
ptr=fopen("file3.txt","r");
if(ptr==NULL){
    printf("Doesn't exists"); // in "r","rb" mode NULL is returned for
}                            // non-existence of file.
else{
    fclose(ptr); // This means file exists and has opened so close it
}                // because we are just checking it ,not going to perform
return 0;       // any operation right now.
}


// Now after opening the file lets :

// Read the data of file-

#include<stdio.h>

int main(){
FILE *ptr1=fopen("file.txt","r");
char a;
fscanf(ptr1,"%c",&a);  
// scans the characters of the file whose pointer is ptr.
//then stores the characters in address of 'a'
printf("%c",a);      // now prints the character
fclose(ptr1);    
return 0;
}
/*here character by character, file is read and hence printed accordingly.
sapces are also considered in characters.
to read all the characters just use 'fscanf' and 'printf' mutiple times*/
#include<stdio.h>

int main(){
FILE *ptr1=fopen("file.txt","r");
char a;
fscanf(ptr1,"%c",&a);
printf("%c",a);
fscanf(ptr1,"%c",&a);
printf("%c",a);
fscanf(ptr1,"%c",&a);
printf("%c",a);
fscanf(ptr1,"%c",&a);
printf("%c",a);
fscanf(ptr1,"%c",&a);
printf("%c",a);     // till here India is printed means read
fscanf(ptr1,"%c",&a);
printf("%c",a);     // now there is a 'space' so that space is printed 
fscanf(ptr1,"%c",&a);
printf("%c",a);    // now 'i' is printed
fclose(ptr1);
return 0;
}

// similarly intger data can be read.

#include<stdio.h>

int main(){
FILE *ptr2=fopen("file2.txt","r");
int b;
fscanf(ptr2,"%d",&b);
printf("%d\n",b);     /* int,float,double all are treated separate after space */
fscanf(ptr2,"%d",&b);  /* and if more printf and fscanf are used than required then */
printf("%d\n",b);     // last value will start to repeat .
fscanf(ptr2,"%d",&b);
printf("%d\n",b);
fscanf(ptr2,"%d",&b);
printf("%d\n",b);
fclose(ptr2);
return 0;
}

// writing to a file-

#include<stdio.h>

int main(){
FILE *pt;
pt=fopen("file3.txt","w");
fprintf("%c","A");
fprintf("%c","n");   /* i have written 'human' int file3.txt but while writing to it*/
fprintf("%c","i");  // overwriting occured and human deleted then Animal saved in file.
fprintf("%c","m");
fprintf("%c","a");
fprintf("%c","l");
fclose(pt);

return 0;
}

// if we open in append mode then we can write without any data loss.

#include<stdio.h>

int main(){
FILE *t;
t=fopen("file3.txt","a");
fprintf(t,"%c",' '); //here i left 2 spaces intentionally to make the file clean.
fprintf(t,"%c",'d');
fprintf(t,"%c",'e');
fprintf(t,"%c",'e');
fprintf(t,"%c\n",'r');
fprintf(t,"%s","tiger"); // this way we can write a complete word using string.
fclose(t);
return 0;
}

// special functions for reading and writing a character ~

/* fgetc(ptr)     --> used for reading, it gets a character from file and reads 
then using printf you can print it also . it is just used in place of fscanf().

fputc('character',ptr)   ---> used for writing, writes 'character' used as arguement
in the file. its used in place of fprintf()  */


#include<stdio.h>

int main(){
FILE *d=fopen("file4.txt","r");
printf("%c\n",fgetc(d));
printf("%c\n",fgetc(d));    // so this code also reads character by character successfully.
printf("%c\n",fgetc(d));
printf("%c\n",fgetc(d));
return 0;
}

// similarly let's check for fputc()

#include<stdio.h>

int main(){
FILE *e=fopen("file5.txt","w");
fputc('w',e);
fputc('o',e);
fputc('r',e);
fputc('l',e);
fputc('d',e);
return 0;
}

/* EOF (end of file) - it is return value of fgetc(). it tells the compiler that
all the characters have been read and now file data ends here.
using EOF we can track when our file ends and read whole data in ne go using
loops with EOF. so this is very helpful */

#include<stdio.h>

int main(){
FILE *f=fopen("file6.txt","r");
char x;
while(x!=EOF){
    printf("%c",x);
    x=fgetc(f);
}
fclose(f);
return 0;
}

