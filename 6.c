#include <stdio.h>
void primeBw2(int, int);
int main()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    printf("\nThe prime numbers between %d and %d are: \n\n", a, b); 
    primeBw2(a, b);

    printf("\n\n");
    return 0;
}

void primeBw2(int num1, int num2)
{
    int flag = 0;
    for (int i = num1 + 1; i <= num2 - 1; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d \t", i);
    }
}