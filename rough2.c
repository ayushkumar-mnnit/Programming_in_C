// #include<stdio.h>

// int main(){
// int n;
// printf("enter the number");
// scanf("%d",&n);
// for(int i=2;i<n;i++){
//     if(n%i!=0){
//     printf("prime");
//     }
// }
// return 0;
// }


// #include<stdio.h>

// int main(){
// int i=1;
// // printf("%d",i++);
// // printf("%d",i);
// printf("%d",++i);
// printf("%d",i);
// return 0;
// }



#include<stdio.h>

int main(){
int ar[]={23,45,56,12,233,57};
int *ptr=ar;                        /*initially ptr points on 0th index*/
printf("value is= %u\n",*ptr);       /* value of 0th index is printed*/
ptr++;                            /*now ptr points on 1st index*/
printf("value is= %u\n",*ptr);      /*value of 1st index is printed*/


return 0;
}