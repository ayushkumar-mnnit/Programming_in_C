
// // // Q.1 Calculate the sum of 1st n natural numbers, also print the numbers in reverse order.

// // #include<stdio.h>

// // int main(){
// //     int n;
// //     int sum;
// //     sum=0;
// //     printf("Enter the value of n=");
// //     scanf("%d",&n);
// // for(int i=1;i<=n;i++){     /* how this program works, see we declare sum=0 intially then sum=sum+i*/
// //     sum=sum+i;            /* as loop starts with i=1, sum=0+1=1 then for i=2 ,sum=1+2=3 and so on...at last*/
// // }                         /* when i=n , sum=sum of n natural numbers. here loop terminates and now we print sum,*/
// // printf("sum is %d\n ",sum);  /* out of loop so that the value calculated by loop is obtained.*/

// // /*we can create another for loop to print the numbers in reverse order.*/

// // for(int i=n;i>=1;i--){   /* here u can notice that we have declarerd 'i' twice , once in 1st loop and then*/
// // printf("%d ",i);        /* in 2nd loop but still we didn't get error, becoz in 'for loop' declaration statement*/
// // }                      /* is limited upto the loop only , once one loop ends it ends and behaves like new  */
// //  return 0;             /* declaration statement in other loops.*/
// // }

// // // Alternate solution:

// // #include<stdio.h>

// // int main(){
// // int n;
// // int sum;
// // sum=0;
// // printf("Enter the value of n= ");
// // scanf("%d",&n);
// // for(int i=1, j=n;i<=n && j>=1;i++ && j--){
// // sum=sum+i;
// // printf("%d\n ",j);
// // }
// // printf("sum is %d\n",sum);
// // return 0;
// // }

// // // Q.2 Print the table of a number entered by the user.

// // #include<stdio.h>

// // int main(){
// // int s=1; 
// // int n;
// // printf("Enter the value of n=");
// // scanf("%d",&n);   
// // for(int i=1;i<=10;i++){
// // s=n*i;
// // printf("%d\n",s);
// // }
// // return 0;
// // }

// // // Q.3 Keep taking the numbers from the user until an odd number is not entered.

// // #include<stdio.h>

// // int main(){

// // int n;
// // do{
// // printf("Enter the number=");
// // scanf("%d",&n);       /* first we do our task then check the condition that is odd or not so,*/
// // printf("%d\n",n);     /* we used do-while loop here. here condition of termination is never met*/
// // if(n%2!=0){          /* becoz 1 refers always true so its like an infinite loop until we introduce*/
// //     break;           /* breaking condition for odd 'n'*/
// //     }
// // }
// // while(1);
// // return 0;
// // }

// // /*Q.4 Keep taking the numbers from the user until a multiple of 6 is  entered.
// // (This Q. is similar to previous one so now use any other loop to solve.)*/

// // #include<stdio.h>

// // int main(){
// // int n;                     
// // printf("Enter the number= ") ;
// // scanf("%d",&n);
// // do{       
// // if(n%6!=0){
// //     printf("%d\n",n);
// //     break;
// // }
// // else{
// //     break;
// // }
// // }
// // while(1); // here we can use any non-zero value, becoz non-zero is always 'true' in C
// // return 0;
// // }

// // // Q.5 calculate the factorial of n , entered by the user.

// // #include<stdio.h>

// // int main(){
// // int n;
// // int i=1;
// // int p=1;
// // printf("Enter the value of n here: ");
// // scanf("%d",&n);
// // do{
// //     p=p*i;
// //     i++;

// // }
// // while(i<=n);
// // printf("n!= %d",p);
// // return 0;
// // }
// // // Alternate Solution:

// // #include<stdio.h>

// // int main(){
// // int n;    
// // printf("Enter the value of n here: ");
// // scanf("%d",&n);
// // int i=1;
// // int p=1;
// // while(i<=n){
// //     p=p*i;
// //     i++;
// // }
// // printf("n!= %d",p);

// // return 0;
// // }


// // // Q.6 Calculate the sum of all the numbers b/w 5 and 50 including (5,50)

// // #include<stdio.h>

// // int main(){
// // int sum=0;    
// // for(int i=5;i<=50;i++){
// //     sum=sum+i;
// // }
// // printf("Sum is =%d",sum);
// // return 0;
// // }

// // // Q.7 Write a C program to check whether an entered number is prime or not.

// // #include<stdio.h>

// // int main(){
// // int n;
// // printf("Enter the number= ");
// // scanf("%d",&n);
// // for(int i=2;i<n;i++){
// // if(n%i==0){
// //     printf("Not prime");
// //     break;
// // }
// // else{
// //     printf("Prime");
// //     break;
// //     }
// // }
// // return 0;
// // }


// /* Q.8 Print the given patterns separately ,

//    *                * * * *
//   * *                * * *
//  * * *                * *
// * * * *                *

// using loops */


// // #include<stdio.h>

// // int main(){
// // int l=1;
// // int j=3;
// // while(l<=4){
// // for(int i=j;i>=1;i--)
// // {
// //     printf(" ");
// // }
// // for(int k=1;k<=l;k++)
// // {
// //     printf("* ");
// // }
// // printf("\n");
// // j--;l++;
// // }
// // return 0;
// // }

// // #include<stdio.h>

// // int main(){
// // int l=0;
// // int k=4;
// // while(k>=1){
// // for(int j=1;j<=l;j++){
// //     printf(" ");
// // }
// // for(int i=1;i<=k;i++)
// // {
// //     printf("* ");
// // }
// // printf("\n");
// // k--;l++;
// // }

// // return 0;
// // }


/* Q. 9 Using the loop control instructions , print the following the pattern.

      *
    *   *
   *     *
  *       *              
 *         *
* * * * * * * 
    
*/


#include<stdio.h>

int main(){

int m=7;
int r=7;
for(int i=1;i<=6;i++){

for(int j=1;j<=13;j++)
{
  if(j==m||j==r||((i==6)&&(j%2==0)))
  {
    printf("*");
  }
  else
  {
  printf(" ");
  }
}
printf("\n");
m++;r--;
}
return 0;
}




// #include<stdio.h>

// int main(){

// int l=1,m=5;
// for(int i=1;i<=5;i++){
//   for(int j=1;j<=5;j++){
//     if(j==l || j==m){
//       printf("$");
//     }
//     else if(i==1 || i==5 || j==1 || j==5){
//       printf("*");
//     }
//     else{
//       printf(" ");
//     }
//   }
//   printf("\n");
//   l++;m--;

// }

// return 0;
// }

