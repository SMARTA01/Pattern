#include<stdio.h>
int main()
{
    int i,j,n,l,k;
    printf("Enter height ");
    scanf("%d",&n);
    k=0;
    for(i=n; i>=1; --i)
    {
          if(k>0)
            {
                l=k;
                while(l--)
                {
                     printf(" ");
                }

            } // printf("hello");
        for(j=0;j<(2*i-1); j++)
        {


            printf("*");
        }
        k++;
         printf("\n");
    }
    k--;
    for(i=1; i<=n; i++)
    {
        if(k>0)
        {
            l=k;
            while(l--)
            {
                printf(" ");
            }
        }
        for(j=0;j<(2*i-1); j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

  return 0;
}
/******
 ***
  *
  *
 ***
******/
