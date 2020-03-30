#include<stdio.h>
int main(void)
{
    int d,r, i, k=0;
    scanf("%d", &d);
    int h[2*d];
    for(i=0; i<d; i++)
    {
        scanf("%d", &h[i]);
        h[d+i]=h[i];
    }
    for(i=0; i<d*2; i++)
    {
        r=0;
        while(h[i]==1)
        {
            r++;
            i++;
        }
        if (r>k)
            k=r;
    }
    printf("%d\n", k);
    return 0;
}
