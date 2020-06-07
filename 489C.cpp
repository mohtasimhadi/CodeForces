#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, s, t, i;
    string str1, str2;

    cin>>m>>s;

    if(s==0)
    {
        cout<<(m==1?"0 0":"-1 -1")<<endl;
        return 0;
    }

    for(i=0;i<m;i++)
    {
        t=min(s, 9);
        str2+=t+'0';
        s-=t;
    }

    if(s>0)
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    for(i=m-1;i>=0;i--)
        str1+=str2[i];

    for(i=0;str1[i]=='0';i++);

    str1[i]--, str1[0]++;

    cout<<str1<<" "<<str2<<endl;

    return 0;
}
