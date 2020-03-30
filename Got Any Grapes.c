#include<stdio.h>
int main()
{
    int x, y, z, a, b, c;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &a, &b, &c);
    a=a-x;
    b=(a+b)-y;
    c=b+c;
    if (c>=z && a>=0 && b>=0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
