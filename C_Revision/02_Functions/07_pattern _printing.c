// Write a program using function to print the following pattern (first n lines)
// *
// ***
// *****

#include<stdio.h>
    void pattern(int num){
        for(int i=1; i<=num; i++){
            for(int j=1; j<=(2*i)-1; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    int main(){
        int n;
        printf("Enter a num: ");
        scanf("%d",&n);
        pattern(n);
    }
