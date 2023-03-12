#include<stdio.h>
void series(); 
int main()
{
    printf("\n");

    series();

    printf("\n\n");
    return 0;
}

int fact(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
        fac = fac * i;

    return fac;
}

void series()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += fact(i) / i;
    }
    printf("\nThe sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d", sum);
}