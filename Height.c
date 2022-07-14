#include<stdio.h>
double m2ft(double a);
int main(void){
    double c;
    puts("Enter in meter to convert into feet");
    scanf("%lf", &c);
    printf("%.2lf m = %.2lf ft", c, m2ft(c));
}
double m2ft(double a){
    return(a*3.28);
}