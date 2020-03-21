#include<stdio.h>
int main()
{
    int r, n, i, j;
    n = 1;
    printf("enter number of rows : ");
    scanf("%d", &r);
    printf("\n  ");
    for(i = 1; i<=r; i++)
    {
        for(j=0; j<i; j++)
        {

            printf("%d \t", n);
            n++;
        }

        printf("\n  ");
    }
    return 0;
}
