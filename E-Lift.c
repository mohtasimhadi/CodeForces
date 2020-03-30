#include<stdio.h>
int main()
{
    int t, m, l, c, i;
    scanf("%d", &c);
    for (i=0; i<c; i++)
    {
        scanf("%d %d", &m, &l);
        l=m-l;
        if (l<1)
            l=l*(-1);
        t=19+(4*l)+(4*m);
        printf("Case %d: %d\n", i+1, t);
    }

}
