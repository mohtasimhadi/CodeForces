#include<stdio.h>
int main(void)
{
    int n, k, next_round=0;
    int scores[100];
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &scores[i]);
    }
    for(int i=0;i<n;i++)
    {
        if (scores[i]>0 && scores[i]>=scores[k-1])
            next_round++;
    }
    printf("%d", next_round);

    return 0;
}
