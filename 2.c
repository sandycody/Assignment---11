#include<stdio.h>
int hcf(int, int);
int main()
{
    int a, b, res;
    printf("\n");
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    res = hcf(a, b);
    printf("\nThe HCF of %d and %d is: %d", a, b, res);

    printf("\n\n");
    return 0;
}

int hcf(int x, int y)
{
    int HCF;
    int min = x < y ? x : y;
    for (int i = 1; i <= min; i++)
    {
        if (x % i == 0  &&  y % i == 0)
            HCF = i;
    }
    return HCF;
}