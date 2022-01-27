/* programme to print following pattern */
#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i,j;
    clrscr();
    printf("\n enter no:");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
	for(j=0;j<=no-i;j++)
	{
	   printf(" ");
	}
	for(j=0;j<=2*no-1;j++)
	{
	   printf("*");
	}
	printf("\n ");
    }
    getch();
}


