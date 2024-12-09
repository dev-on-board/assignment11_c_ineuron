
//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int num){
    int sum=1;
     for(int i=1;i<=num;i++){
       sum*=i;
     }
     return sum;
}
int combination(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int pascal(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d",combination(i,j));
        }
        printf("\n");
    }
}

int main(int n1){
    printf("enter the no of rows :");
    scanf("%d",&n1);
   
    pascal(n1);
}