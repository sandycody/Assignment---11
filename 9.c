#include<stdio.h>
void sq(int);
int main()
{
    int num;    
    printf("\nEnter a number: ");
    scanf("%d", &num);

    sq(num);

    printf("\n\n");
    return 0;   
}

void sq(int num)
{
    printf("\nThe square of %d is: %d", num, num * num);
}