#include<stdio.h>
int nextPrime(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = nextPrime(num);
    printf("\nThe next prime number after %d is: %d", num, res);

    printf("\n\n");
    return 0;
}

int nextPrime(int n)
{
    int flag = 0;
    for (int i = n + 1; 1; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                flag = 1; 
        }
        if (flag == 0)
            return i;  
    }
}