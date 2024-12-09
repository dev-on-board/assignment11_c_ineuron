//Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
int next_prime(int n){
    int a,flag;
     for(a=n+1;1;a++){
        flag=0;
        for(int i=2;i<=a/2;i++){
        if(a%i==0){
         flag=1;
        }
    } 
    if(flag==0){
            printf("%d",a);
            break;
        }
}
    
}

int main(){
    int n;
    printf("enter a num :");
    scanf("%d",&n);
    next_prime(n);
    return 0;
}