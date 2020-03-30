#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    gets(str);
    if(str[0]>='a' && str[0]<='z')
            str[0]-=32;
    for(int i=0; i<1001; i++)
    {
        if(str[i]=='\0')
            break;
        else if(str[i]==' ' && str[i+1]>='a' && str[i+1]<='z')
            str[i+1]-=32;
    }
    puts(str);
    return 0;
}
