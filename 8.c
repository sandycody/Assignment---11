#include <stdio.h>
void pascalTri(int);
int fact(int);
int comb(int, int);
int main()
{
    int num;
    printf("\nEnter the total number of rows: ");
    scanf("%d", &num);

    pascalTri(num);

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

int comb(int n, int r)
{
    int num;
    num = (fact(n)) / (fact(r) * fact(n - r));
    return num;
}

void pascalTri(int n)
{
    int i, r, k, l, m, toggle = 0;
    printf("\n");
    
    m = 1;
    for (i = 0; i < n; i++)
    {
        r = 0;
        for (k = (n - 1) - i; k > 0; k--)
            printf("    ");

        for (l = 1; l <= 2 * m - 1; l++)
        {
            if (toggle == 0)
            {
                printf("%3d", comb(i, r));
                toggle = 1;
                r++;
            }

            else if (toggle == 1)
            {
                printf("     ");
                toggle = 0;
            }
        }
        m++;
        toggle = 0;
        printf("\n");
    }
}