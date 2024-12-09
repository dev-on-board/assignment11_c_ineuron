//Write a function to print first N terms of Fibonacci series (TSRN)
 #include<stdio.h>

 void fibonacci(int n){
    int prev=0,cur=1,next;
    printf("1 ");
    for(int i=1;i<n;i++){
        next=prev+cur;
        prev=cur;
        cur=next;
        printf("%d ",next);
    }
 }
 int main(){
    fibonacci(7);
 }