//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int i;
int hcf(int a,int b){
    int min = a<b?a:b;
    for(i=min;i>=min;i--){
        if (a%i==0 && b%i==0)
        return i;
    }
    return 1;
}

int lcm (int a, int b){
    return hcf(a,b)/a*b;
}

int main(){

    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("the hcf is %d\n",hcf(a,b));
    printf("the lcm is %d",lcm(a,b));
    return 0;
}