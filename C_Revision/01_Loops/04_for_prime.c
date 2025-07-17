#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num<=1){
        printf("Enter numbers from 2; 1, 0 or -ve nos are neither prime nor composite\n");
        return 0;
    }

    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0){
            printf("The inputted number is not prime\n");
            break;
        }
        else{
            printf("The inputted number is prime\n");
        }
    }
    return 0;
}