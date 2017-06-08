#include <stdio.h>
#include<stdio.h>
int main()
{
char a[20],b[20];
int n,j=0,i=0;
gets(a);
clrscr();
scanf("%d",&n);
j=strlen(a)-n+1;
while(a[j]!=0)
{
b[i]=a[j];
i++;
j++;
}
b[i]!='\0';
puts(b);
i=0;
while(a[i]!=0&&i<n)
{
    b[i]=a[i];
    i++;
}
b[i]!='\0';
puts(b);
	return 0;
}
