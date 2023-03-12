#include <stdio.h>
void primeN(int);
int main()
{
    int num;
    printf("\nEnter how many prime numbers to print: ");
    scanf("%d", &num);

    printf("\nThe first %d prime numbers are: \n\n", num);
    primeN(num);

    printf("\n\n");
    return 0;
}

void primeN(int n)
{

    int i = 2, count = 1, flag = 0;
    while (count <= n)
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
        {
            printf("%d \t", i);
            count++;
        }   
        i++;   
    }
}