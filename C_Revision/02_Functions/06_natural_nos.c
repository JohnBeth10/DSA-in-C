//Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include<stdio.h>
    int sum(int num){
        int add;
        if(num>0){
        add= num+sum(num-1);
        }
        return add;
    }
    int main(){
        int n;
        printf("Enter a num: ");
        scanf("%d",&n);
        printf("The sum of first %d natural nos is %d\n", n, sum(n));
    }
