#include<stdio.h>

    int main()
{
    int x, a, b, n, i, is_prime=1, prime=1, num;
    scanf("%d", &x);
    a=x-6;
    b=x-a;

    for (i=2; i<(a/2); i++)
    {
        if ((a%i)==0)
        {
            is_prime=0;
        }
    }
    kif (!is_prime)
        a=a;
    else
    {
        a=a-3;
        b=b+3;
    }

    for (i=2; i<(b/2); i++)
    {
        if ((b%i)==0)
        {
            prime=0;
        }
    }
    if (!prime)
    {
        b=b;
    }
    else
    {
        a=a-3;
        b=b+3;
    }

    printf("%d %d", a, b);
    return 0;
}


