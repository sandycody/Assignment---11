#include <stdio.h>
int prime(int);
int main()
{
    int num, res;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    res = prime(num);
    if (res == 1)
        printf("\n%d is a prime number.", num);

    else    
        printf("\n%d is not a prime number.", num);    

    printf("\n\n");
    return 0;
}

int prime(int num)
{
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        flag = 0;
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;

    else
        return 0;
}