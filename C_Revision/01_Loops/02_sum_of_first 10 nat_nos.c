//Write a program to sum first ten natural numbers using while loop.

#include <stdio.h> 
int main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum+=i;
        printf("sum = %d\n", sum);
    }
    printf("Final sum = %d\n", sum);
}