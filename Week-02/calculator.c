#include<stdio.h>
#include<stdbool.h>
int main()
{
    float num1 , num2 ;
    char choice = 'y';
    char operand ;
    while(choice == 'y' || choice == 'Y')
    {
        printf("Enter the first number\n");
        scanf("%f",&num1);
        printf("Enter the second number\n");
        scanf("%f",&num2);
        printf("choose the operand to operate with numbers\n");
        printf("Provide symbols representing the operator\n12");
        scanf(" %c",&operand);
        switch (operand)
        {
        case '+':
            int total = num1 + num2;
            printf(" Sum of %.2f and %.2f is %d\n",num1,num2,total);
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;
        case '%':
            break;
        default:
            break;
        }

        printf("want to continue the calculations.\ny\tn ");
        scanf("%s",&choice);
        if(choice == 'n' || choice == 'N')
        {
            break;
        }
    }
    printf("Happy Serving\n");
}