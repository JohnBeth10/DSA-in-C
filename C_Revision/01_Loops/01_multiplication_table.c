//1. Write a program to print multiplication table of a given number n.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a num : ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, i*num);
    }
}