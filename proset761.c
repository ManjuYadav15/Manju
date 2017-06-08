#include<stdio.h>
#include<conio.h>
void main()
{
    char str1[8],str2[8],out[20];
    int i,c;
    clrscr();
    scanf("%s%s",str1,str2);
    for(i=0;i<strlen(str1);i++)
    {
        c=str1[i];
        if(c<97&&c>122)
            {
                puts("\n 0");
                exit(0);
            }
        if(c+10>122)
        {
            c=122-c;
            c=97+10-c-1;
        }
        else
            c=c+10;
        str1[i]=c;
    }
    for(i=1;i<strlen(str2)-1;i=i++)
    {
        c=str2[i];
        if(c<97&&c>122)
            {
                puts("\n 0");
                exit(0);
            }
        if(c+10>122)
        {
            c=122-c;
            c=97+10-c-1;
        }
        else
            c=c+10;
        str2[i]=c;
    }
    printf("%s %s",str1,str2);

}
