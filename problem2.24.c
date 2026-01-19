#include <stdio.h>
int main (void)
{
    int a,b;
    printf("Enter a Number for a variable: ");
    scanf("%d",&a);
    printf("\nEnter a Number for b variable: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a after swaping is %d and of b is %d",a,b);
    return 0;
}