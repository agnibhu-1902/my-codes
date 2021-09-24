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
	printf("Enter elements in matrix 1 : \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	printf("Enter elements in matrix 2 : \n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	a[i][j]-=b[i][j];
	printf("Resultant matrix : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	getch();
}