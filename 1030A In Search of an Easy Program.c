#include<stdio.h>
int main()
{
    int i, n, s, m;
    scanf("%d", &n);
    for (i=0, s=0; i<n; i++)
    {
         scanf("%d", &m);
         if (m==1)
            s++;
    }
    if (s==0)
        printf("EASY");
    else
        printf("Hard");
    return 0;
}
