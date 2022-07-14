#include<stdio.h>
double c2f(double a);
int main(void){
    double c;
    printf("Enter a degree in celsius: ");
    scanf("%lf", &c);
    printf("%.2lf celsius = %.2lf fahrenheit", c, c2f(c));
}
double c2f(double a){
    return(a*9/5)+32;
}
