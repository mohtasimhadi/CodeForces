#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101], str2[101];
    scanf("%s %s", &str1, &str2);
    for(int i=0; i<101; i++)
    {
        if (str1[i]=='\0')
            break;
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i]+=32;
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i]+=32;
    }
        printf("%d", strcmp(str1,str2));
    return 0;
}
