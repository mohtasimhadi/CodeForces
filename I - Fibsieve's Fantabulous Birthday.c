#include <stdio.h>
int main ()
{
    long long r, c, n, t, k, root, d;
    scanf("%lld", &t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        root=sqrt(n);
        d=n-root*root;
        if(d==0)
        {
            if(root%2==0)
            {
                r=1;
                c=root;
            }
            else
            {
                c=1;
                r=root;
            }
        }
        else if (d>root)
        {
            if (root%2==0)
            {
                r=root+1;
                c=root+1-(d-root-1);
            }
            else
            {
                r=root+1-(d-root-1);
                c=root+1;
            }
        }
        else
        {
            if(root%2==0)
            {
                r=n-root*root;
                c=root+1;
            }
            else
            {
                r=root+1;
                c=n-root*root;
            }
        }
        printf ("Case %lld: %lld %lld\n", k, c, r);
    }
    return 0;
}
