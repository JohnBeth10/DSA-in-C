// Find the factorial of a number

#include <stdio.h>
int main(){
    int fact = 1, n;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact *= i;
        printf("%d",i);
        if(i<n){
            printf(" X ");
        }
    }
    printf(" = %d\n", fact);
}