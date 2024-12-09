//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the
//function

#include<stdio.h>

int fact(int n){
    int fact=1;
         for(int i=1;i<=n;i++){
            fact*=i;
         }
         return fact;
}
int result(){
          int i,sum=0;
          for(i=1;i<=5;i++){
              sum+=fact(i)/i;
          }
          return sum;
}
int main(){
    int sum;
    sum=result();
    printf("%d is the sum",sum);
    return 0;
}