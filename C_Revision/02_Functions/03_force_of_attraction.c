// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2.

#include <stdio.h>
float force(float mass){
    return mass*9.81;
}
int main(){
    float mass;
    printf("Enter the mass in Kg: ");
    scanf("%f",&mass);

    printf("The gravitational force acting of a body of %.1fKg is %.2f\n", mass, force(mass));
}