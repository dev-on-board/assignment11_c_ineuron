//Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void prime_num(int a,int b){
    
    for(int num=a+1;num<=b-1;num++){
        int is_prime=1;
        for(int i=2;i<num/2;i++){
            if(num%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%d ",num);
            
        }
    }
}
int main(){
    int a,b;
    printf("enter two num ");
    scanf("%d%d",&a,&b);
    prime_num(a,b);
}