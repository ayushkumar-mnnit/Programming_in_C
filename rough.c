
// // // #include<stdio.h>


// // // int main(){
// // // int d,m,y;
// // // printf("Enter the date in (dd,mm,yyyy format):\t ");
// // // scanf("%d%d%d",&d,&m,&y);
// // // switch ((d>30 && (m==6 || m==4 || m==9 || m==11))
// // //  || (d>31 && (m==1 || m==3 || m==5 || m==7 || m==8 ||m==10 || m==12))
// // //  || ((d>29 && m==2) && ((y%4)==0 || (y%400)==0))
// // //  || ((d>=29 && m==2) && ((y%4)!=0 || (y%400)!=0)))
// // // {
// // // case 1:
// // // printf("Date is invalid");
// // // break;
// // // case 0:
// // // printf("Date is valid");
// // // break;
// // // }

// // // return 0;
// // // }

// // // #include<stdio.h>

// // // int main(){
// // // int i=1;
// // // int n;
// // // do{
// // // n=3*i;
// // // i++;
// // // printf("%d\n",n);
// // // }

// // // while(i>=1 && i<=33);
// // // return 0;
// // // }

// // #include<stdio.h>

// // int main(){

// // for(int i=1;i<6;i++){
// //     printf("Hello Anu\n");
// // } 
// // goto ayush;
// // printf("hi MR.Tomper1\n");
// // ayush:
// // printf("hello world\n");
// // printf("hi MR.Tomper2\n");

// // return 0;
// // }



// #include<stdio.h>

// void sumdiv();
// void sumdiv(int n){
// int sum=0;

// for(int j=1;j<=n;j++){
// for(int i=1;i<n;i++){
    
//     if(j%i==0){
//     sum=sum+i;
//     }
// }

// if(sum==j){
//     printf("%d\n",j);
// }

// }
//     }
// int main(){

// int n;
// printf("Enter the number= ");
// scanf("%d",&n);
// sumdiv(n);
// return 0;
// }


#include<stdio.h>

int main(){
int m=4,n=0;

for(int i=1;i<=4;i++){
    for(int j=0;j<m;j++){
printf(" ");
    }
    printf("*");
    m--;

    for(int k=2;k<=n;k++){
        printf(" ");
    }
    printf("*\n");
    n++;
}

return 0;
}