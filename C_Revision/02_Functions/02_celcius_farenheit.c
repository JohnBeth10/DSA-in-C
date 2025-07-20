// Convert celcius temperature in farenheit using functions

#include <stdio.h>
float farenheit_temp( float temp_celcius){
    return ((9.0/5.0)*(temp_celcius))+32;
}
int main(){
    float temp_celcius;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&temp_celcius);

    printf("%.1fC is equalent to %.2f Farenheit\n", temp_celcius, farenheit_temp(temp_celcius));
}