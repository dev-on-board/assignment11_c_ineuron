//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>

void prime_num(int n){
    int count = 0;
    for(int num=2;count<n;num++){
        int is_prime=1;
        for(int i=2;i<num/2;i++){
            if(num%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%d ",num);
            count++;
        }
    }
}
int main(){
    prime_num(4);
}