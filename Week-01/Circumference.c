#include<stdio.h>
int main()
{
    const double PI=3.14159;
    double radius;
    double circumference;

    printf("\nEnter the radius of the circle\n");
    scanf("%lf",&radius);

    circumference = 2 *PI*radius;
    printf("The circumference of the circle is %lf",circumference);
    1273-108
}