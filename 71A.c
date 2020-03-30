#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int k=0;k<n; k++)
    {
        int i, j=0;
        char w[10000];
        scanf("%s", w);
        for(i=0;i<10000;i++)
        {
            j++;
            if (w[i]=='\0')
                break;
        }
        if (j>11)
            printf("%c%d%c\n", w[0], j-3, w[j-2]);
        else
            puts(w);
    }
    return 0;
}
