#include<bits/stdc++.h>
using namespace std;
#define lld long long
long long n,m,k;
lld gcd(lld a,lld b)
{
    if (b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    if (n*m*2%k!=0)
    {
        printf("NO");
        return 0;
    }
    printf("YES\n0 0\n");
    lld x=gcd(2*n,k),y;
    y=k/x;
    x=2*n/x;
    y=m/y;
    if (x<=n && y<=m)
    {
        printf("%lld %lld\n",x,0ll);
        printf("%lld %lld\n",0ll,y);
    }
    else
    {
        x/=2;
        y*=2;
        printf("%lld %lld\n",x,0ll);
        printf("%lld %lld\n",0ll,y);
    }
}
