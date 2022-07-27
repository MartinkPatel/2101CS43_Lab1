#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void addition()
{
    printf("Enter 1st number : ");
    int a, b;
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The addition of %d and %d is %d\n", a, b, a + b);
}
void subtraction()
{
    printf("Enter 1st number : ");
    int a, b;
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The subtraction of %d and %d is %d\n", a, b, a - b);
}
void division()
{
    printf("Enter 1st number : ");
    int a, b;
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    double c = a / (b + 0.0);
    printf("The division of %d by %d is %f\n", a, b, c);
}
void multiplication()
{
    printf("Enter 1st number : ");
    int a, b;
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The multiplication of %d and %d is %d\n", a, b, a * b);
}
int main()
{

    printf("Select a operation from the following\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");

    int choice = -1;

    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        division();
        break;
    case 4:
        multiplication();
        break;

    default:
        printf("Enter Appropiate choice.\n\n");

        break;
    }

    return 0;
}