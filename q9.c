//Write a program in C to find the square of any number using the function.

#include<stdio.h>
void square(int n){
    printf("%d",n*n);
}

int main(){
    int n;
    printf("enter a num :");
    scanf("%d",&n);
    square(n);
    return 0;
}