#include<stdio.h>
#include<string.h>
int main()
{
    int n, k=0;
    char p[100];
    gets(p);
    for(int i=0;i<100;i++)
    {
        n=0;
        if (p[i]=='\0')
            break;
        for(int j=i;j<i+7;j++)
        {
            if (p[j]=='\0')
            break;
            if (p[i]==p[j])
                n++;
                //printf("%d ", n);
        }
        if(n>=7)
            k++;
            //printf("\n%d\n",k);
    }
    if(k)
        printf("YES");
    else
        printf("NO");
    return 0;
}
