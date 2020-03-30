#include<stdio.h>
int main(void)
{
    long long int m, n, a, x, y;
    scanf("%lld %lld %lld", &m, &n, &a);
    x=m/a;
    y=n/a;
    if (x*a<m)
        x=x++;
    if (y*a<n)
        y=y++;
    printf("%lld", x*y);

    return 0;
}
