#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],i,j,row,col;
	clrscr();
	printf("Enter row : ");
	scanf("%d",&row);
	printf("Enter column : ");
	scanf("%d",&col);
	printf("Enter elements : \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<col;i++)
	for(j=0;j<row;j++)
	b[i][j]=a[j][i];
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		printf("%d\t",b[i][j]);
		printf("\n");
	}
	getch();
}