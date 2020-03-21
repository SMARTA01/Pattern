 #include<stdio.h>
int fib(int n)
{
    if(n!=0)
    {
    int a[50],i;
    a[0]= 0;
    a[1]= 1;
    for(i=2; i<n; i++)
    {
        a[i]= a[i-1] + a[i-2];
    }
    for(i=0; i<n; i++)
    {
        printf(" %d  ", a[i]);
    }

    }
}
int main()
{
    int n;
    printf("Enter the no of elements to be printed");
    scanf("%d", &n);
    fib(n);
    return 0;
}
