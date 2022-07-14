#include<stdio.h>
int main(void){
    int a,b;
    int z;
    puts("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    z = a*b;
    printf("a * b = %d", z);
    return 0;
}