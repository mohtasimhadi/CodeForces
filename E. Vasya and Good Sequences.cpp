#include<bits/stdc++.h>
#define LL long long
#define MAXN 300050
using namespace std;
int n,b[MAXN],cf[25],Log2[MAXN],MX[MAXN][25],s[MAXN],js[MAXN],os[MAXN];
LL a[MAXN];
void RMQ()
{
    int i,j;
    for(i=1;i<=n;i++)MX[i][0]=b[i];
    for(j=1;cf[j]<=n;j++)
    {
        for(i=1;i+cf[j]-1<=n;i++)
        {
            MX[i][j]=max(MX[i][j-1],MX[i+cf[j-1]][j-1]);
        }
    }
    /*for(i=1;i<=n;i++)
    {
        for(j=1;i+cf[j]-1<=n;j++)
        {
            MX[i][j]=max(MX[i][j-1],MX[i+cf[j-1]][j-1]);
        }
    }*/
}
int Mx(int ql,int qr)
{
    int i=Log2[qr-ql+1];
    return max(MX[ql][i],MX[qr-cf[i]+1][i]);
}
int main()
{
    int l1,i,len,l,r,mx1;
    LL aa,ans;
    scanf("%d",&n);
    cf[0]=1;for(i=1;i<=20;i++)cf[i]=cf[i-1]*2;
    for(i=1;i<=300000;i++)Log2[i]=log2(i);
    for(i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(i=1;i<=n;i++)
    {
        aa=a[i];
        while(aa>0LL)
        {
            b[i]+=(int)(aa%2LL);
            aa/=2LL;
        }
    }
    s[0]=0;for(i=1;i<=n;i++)s[i]=s[i-1]+b[i];
    RMQ();
    ans=0LL;
    for(len=1;len<=128;len++)
    {
        for(l=1;l+len-1<=n;l++)
        {
            r=l+len-1;
            mx1=Mx(l,r);
            if((s[r]-s[l-1])%2==0&&mx1*2<=s[r]-s[l-1])ans++;
        }
    }
    memset(js,0,sizeof(js));
    memset(os,0,sizeof(os));
    for(i=n;i>=0;i--)
    {
        js[i]+=js[i+1];os[i]+=os[i+1];
        if(s[i]%2==0)os[i]++;
        else js[i]++;
    }
    for(l=1;l<=n;l++)
    {
        l1=l-1;r=l+128-1;
        if(r+1<=n)
        {
            if(s[l1]%2==0)
            {
                ans+=(LL)os[r+1];
            }
            else
            {
                ans+=(LL)js[r+1];
            }
        }
    }
    printf("%lld",ans);
    return 0;
}
