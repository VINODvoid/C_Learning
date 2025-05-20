#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x= 10; // stores integer values
    const int y=8;
    int age =34;
    float cgpa = 2.64; // 4 bytes (32 bits) 6-7 digits precision
    double sgpa = 2.674232245345; // 8 bytes (64 bits ) 15.16 digits precision

    char grade ='A'; 
    char string [] = "hi there";
    bool check= true;
    char a = 100;

    printf("character %d\n",a);
    printf("it is %d\n",check);
    printf("sgpa %lf\n",sgpa);
    printf("Age is %d\n",age);
    printf("Greeting %s\n",string);
    printf("character is %c\n",grade);
    printf("your average cgpa is %0.2f\n",cgpa);
    return 0;
}