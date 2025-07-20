// Print fibonacci series

#include <stdio.h>
int fibo(int n)
{
        if (n == 1 || n == 2)
        {
            return(n - 1);
        }
        else
        {
            return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    printf("The fibonacci series till %d is ", num);
    for(int i=1; i<=num; i++){
        printf("%d",fibo(i));
        if(i!=num){
            printf(" ,");
        }
        else{
            printf(".\n");
        }
    }
}