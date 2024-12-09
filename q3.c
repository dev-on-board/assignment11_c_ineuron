//Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
int prime(int n){
    if(n<=1)
    return 0;
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
         count++;
        }
        if(count>=2)
        return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a num ");
    scanf("%d",&n);
    if(prime(n))
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}