#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char str[100];
    gets(str);
    for(int i=0;i<100;i++)
    {
        if (str[i]=='\0')
            break;
        else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='Y')
        {
            str[i]=' ';
        }
        else if(str[i]>=65 && str[i]<=90)
            printf(".%c", str[i]+32);
        else
            printf(".%c", str[i]);
    }
    return 0;
}
