//Write a program using recursion to calculate nth element of Fibonacci series.

#include<stdio.h>
    int fibo(int n){
        if(n==1 || n==2){
            return(n-1);
        }
        return fibo(n-2)+fibo(n-1);
    }
    int main(){
        int n;
        printf("Enter a num: ");
        scanf("%d",&n);
        printf("The %dth element is %d\n",n , fibo(n));
    }
