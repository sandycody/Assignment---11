#include <stdio.h>
void fibN(int);
int main()
{
    int num, prev = 1, curr = 1, next = 0;
    printf("\nEnter how many prime numbers to print: ");
    scanf("%d", &num);

    printf("\nThe first %d fibonnaci terms are: \n\n%d \t %d ", num, prev, curr);
    fibN(num);

    printf("\n\n");
    return 0;
}

void fibN(int num)
{
    int prev = 1, curr = 1, next = 0;
    for (int i = 1; i <= num - 2; i++)
    {
        next = prev + curr;
        printf("\t %d", next);
        prev = curr;
        curr = next;
    }
}