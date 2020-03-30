#include<stdio.h>
#include<string.h>
int main()
{
    int i, n, sum=0;
    char str[4];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", &str);
        if(str[1]=='+')
        {
            sum++;
        }
        else
        {
            sum--;
        }
    }
    printf("%d", sum);
    return 0;
}
