#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s[100], temp, ans[2];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>s[i];

    temp = abs(s[0]-s[n-1]);
    ans[0] = 1;
    ans[1] = n;

    for(int i=0; i<(n-1); i++)
        if(abs(s[i]-s[i+1])<temp)
        {
            temp = abs(s[i]-s[i+1]);
            ans[0]=i+1;
            ans[1]=i+2;
        }

    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}
