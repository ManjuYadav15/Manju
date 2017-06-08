#include<stdio.h>
#include<conio.h>
int Subset(int arr1[], int arr2[], int m,int n);
void main()
{   int arr1[10],arr2[10],a,b,i,e,f;
clrscr();
scanf("%d",&e);
for(i=0;i<e;i++)
scanf("%d",&arr1[i]);
scanf("%d",&f);
for(i=0;i<f;i++)
scanf("%d",&arr2[i]);
        if(Subset(arr1, arr2, e, f))
      printf("arr2[] is subset of arr1[] ");
    else
      printf("arr2[] is not a subset of arr1[]");
    getch();
}
int Subset(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    for (i=0; i<n; i++)
    {
	for (j = 0; j<m; j++)
	{
	   if(arr2[i] == arr1[j])
	      break;
	}

	
	if (j == m)
	   return 0;
    }

    
  return 1;
}

