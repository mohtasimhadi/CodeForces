#include<stdio.h>
int main()
{
    int n, i, a, b, c, s=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a==1)
            a=1;
        else
            a=0;

        if (b==1)
            b=1;
        else
            b=0;

        if (c==1)
            c=1;
        else
            c=0;

        if (a+b+c>=2)
            s++;
    }
    printf("%d", s);
    return 0;
}
