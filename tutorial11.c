

// STRUCTURES :

/* structure is a collection of different data types under a single name.

int ,float,char these are in-built data types (already exist in C) so when we write 'int a' ,
then 4-bytes are allocated to 'a' for storing an integer.
And if we want to store similar data types together then we use array
but when we want to store different data types together then we can't store under some common
data type becoz that doesn't exists, we need to define that and i.e. structure.

Hence, structure is a 'user-defined' data type which can hold different  data types together.

syntax- 

struct student{

char name[15];
int class;
int rollno;

};      Here ; is important                                                                                  

*/
                                     
#include<stdio.h>
#include<string.h>
struct student{  /* Here we defined a custom data type 'struct student' which is of type 'structure' */
                      
char name[15];  /* This custom data type can hold different in-built data types */
int class;      /*This is known as defining structure data type*/
int rollno;

};

int main(){
struct student s1; /* Here 'struct student' is data type and 's1' is variable name*/

/*s1.name="Shushant Singh"; --> not allowed as string is declared in array format so we 
can't mutate it but could have been possible if pointer declaration would have been used*/

strcpy(s1.name,"Shushant Singh");
s1.class=12;     /* . this is known as dot operator which says store 12 in 'class' */
s1.rollno=47;
printf("Name : %s\n",s1.name);
printf("class : %d\n",s1.class);
printf("Roll number : %d",s1.rollno);
return 0;
}

// structure in memory -

/* Just like arrays , structures also get reserved contigous memory blocks.
like in        _____________ _________ ________
above ex.     |name| | | |  | class   | rollno |
address:          2300         2315      2319


so we set to store max 15 characters in 'name' and each character takes 1 byte so if address
of 'name' is 2300 then address of 'class' is 2315 and 'class' takes 4-bytes (integer)
so address of 'rollno' is 2319. 
some space may be left in 'name' but new address will start after 15 bytes only.*/

// Array of Structures :

/* 
Just like when we want to access 100 integers then instead of creating 100 individual
variables ,we just create an int array[100] for convenience ,similarly we create an 
array of structures when we want to access information from large number of structures
becoz it will be dificult to create so much structres.

*/
#include<stdio.h>
#include<string.h>
struct std{
    char name[15];
    int rollno;
    float cgpa;
};
int main(){
struct std ECE[80];
strcpy(ECE[34].name,"Ayush Kumar");
ECE[34].rollno=18;  /*This means to access the rollno of '33rd' student in ECE-structure array */
ECE[34].cgpa=9.57;
printf("Name = %s\n",ECE[34].name);
printf("Roll number = %d\n",ECE[34].rollno);
printf("CGPA = %f\n",ECE[34].cgpa);
return 0;
}


// Initialising structures: 

/* This is a better way to declare structures after defining them because we don't need to declare each one 
 individually but write all the data in a single line within { } */

#include<stdio.h>
struct athelete{
    char name[16];
    int weight;
    float height;
    int age;
};
int main(){
struct athelete a1={"Kavya Chopra",53,150.46,21};
printf("Name : %s\n",a1.name);
printf("weight(in kg) : %d\n",a1.weight);
printf("Height(in cm) : %f\n",a1.height);
printf("Age(in years) : %d\n",a1.age);
return 0; 
}

// Pointer in structure :

#include<stdio.h>
struct athelete{
    char name[16];
    int weight;
    float height;
    int age;
};
int main(){
struct athelete a1={"Kavya Chopra",53,150.46,21};
struct athelete *ptr=&a1;
printf("Name : %s\n",(*ptr).name);
printf("weight(in kg) : %d\n",(*ptr).weight);
printf("Height(in cm) : %f\n",(*ptr).height);
printf("Age(in years) : %d\n",(*ptr).age);
return 0; 
}

/* Note: *ptr points on all the values stored in structure a1 but , to access each 
individually say for name, we write '(*ptr).name'.
remember if we write *(ptr).name then * operator will operate on 'ptr.name'which doen't 
make any sense and is error. 

we can use 'arrow operator' i.e. -> to change the syntax (*ptr).name to ptr->name 
and this performs the same task . */

// Passing the structure to function :

#include<stdio.h>

struct stu{
    char name[20];
    int rollno;
    char branch[20];
    float cgpa;
};
void intro(struct stu s);
int main(){
struct stu s1={"Shanaya",147,"ECE",9.34};
struct stu s2={"Anshika",134,"CSE",9.23};
struct stu s3={"Ayush",107,"ECE",9.52};
intro(s1);
intro(s2);
intro(s3);
s2.rollno=234;
// printf("Roll number : %d\n",s1.rollno);
// printf("Roll number : %d\n",s2.rollno);
return 0;
}
void intro(struct stu s){
    printf("Name : %s\n",s.name);
    printf("Roll number : %d\n",s.rollno);
    printf("Branch : %s\n",s.branch);
    printf("CGPA : %f\n",s.cgpa);
    // struct stu s1;
    // s1.rollno=187;
}

/* Call by value--->

when we change rollno of s1 from 147 to 187 in intro() and then print
s1.rollno separately in main() then also we get 147 only, because in this process 
a copy of rollno=147 from main() is passed as arguement to the intro() so changes made inside intro() 
are in copy not in original arguement so original rollno remains 147 in main() and hence on
using printf("Roll number : %d\n",s1.rollno); we get 147.

In short even after finction call ,  no change occurs in call by value if print something in main().

Call by reference--->

when we change roll no of s2 in main() then actual change occurs to the original value
of arguement in main() and after the function call different output is obtained in main()
and hence even after the function call we get rollno of s2 234  when we printed s2.rollno in main().


NOTE: just remember, that changes in any value inside user-defined functions---> call by value 
and changes in any value inside main()---> call by reference.

*/


// typedef -Keyword :

/* It is used to create 'alias' for data types.Alias means giving different
names to the same entity. It is like giving nicknamaes, we generally use this concept 
on structures becuase they are bigger names and syntax is difficult to use repeatedly.

we may use for int,char,float etc. also but they are already simple names so we don't use here.

*/


#include<stdio.h>
typedef struct engineerringstudents{
    char name[14];
    char branch[23];
}er;  /* 'er' is alias for 'struct engineerringstudents' which is structure data type */
int main(){
er e1={"Shreysth","CSE"};
er e2={"Maira","Mechanical Engineering"};
printf("NAME : %s\n",e1.name);
printf("BRANCH : %s\n",e1.branch);
printf("NAME : %s\n",e2.name);
printf("BRANCH : %s\n",e2.branch);
return 0;
}

// ex.store the House no.,city,state of 5 employees.

// Here we need 5 structurres so we use array of structures.

#include<stdio.h>
#include<string.h>
typedef struct employee{
    int houseno;
    char city[20];
    char state[20];
}e;
int main(){
e a[5];
a[0].houseno=234;
strcpy(a[0].city,"Pune");
strcpy(a[0].state,"Maharashtra");

a[1].houseno=204;
strcpy(a[1].city,"Mirzapur");
strcpy(a[1].state,"Uttar Pradesh");

a[2].houseno=123;
strcpy(a[2].city,"Jaipur");
strcpy(a[2].state,"Rajasthan");
printf("Employee- 1 address :\n");
printf("HOUSE NO. : %d\n",a[0].houseno);
printf("CITY : %s\n",a[0].city);
printf("STATE : %s\n",a[0].state);
printf("Employee- 2 address :\n");
printf("HOUSE NO. : %d\n",a[1].houseno);
printf("CITY : %s\n",a[1].city);
printf("STATE : %s\n",a[1].state);
printf("Employee- 3 address :\n");
printf("HOUSE NO. : %d\n",a[2].houseno);
printf("CITY : %s\n",a[2].city);
printf("STATE : %s\n",a[2].state);

return 0;
}