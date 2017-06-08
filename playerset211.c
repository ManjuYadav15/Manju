#include <stdio.h>
#include<conio.h>
int main()
{
    int n;
    clrscr();
    printf("1.sunday 2.monday 3.tuesday 4.wednesday 5.thursday 6.friday 7.saturday\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("False");
        break;
        case 2:printf("True");
        break;
        case 3:printf("True");
        break;
        case 4:printf("True");
        break;
        case 5:printf("True");
        break;
        case 6:printf("True");
        break;
        case 7:printf("True");
        break;
    }
    return 0;
}
