// Find the average of a set of numbers.

#include <stdio.h>
float average(float num1, float num2, float num3){
    return (num1+num2+num3)/3;
}
int main(){
    float num1, num2, num3;
    printf("Enter 3 nos to find the average: \n");
    scanf("%f %f %f",&num1, &num2, &num3);
    printf("The average of %.1f, %.1f and %.1f is %.2f.\n",num1, num2, num3, average(num1,num2,num3));
}