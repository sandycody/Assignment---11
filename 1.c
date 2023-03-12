#include<stdio.h>
int lcm(int, int);
int main()
{
    int a, b, res;
    printf("\n");
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    res = lcm(a, b);
    printf("\nThe LCM of %d and %d is: %d", a, b, res);

    printf("\n\n");
    return 0;
}

int lcm(int x, int y)
{
    int i;
    for (i = 1; i <= x * y; i++)
    {
        if (i % x == 0  &&  i % y == 0)
            break;
    }
    return i;
}
