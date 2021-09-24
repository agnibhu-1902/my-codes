#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,n;
	clrscr();
	printf("Enter size : ");
	scanf("%d",&n);
	printf("Enter elements in matrix 1 : \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("Enter elements in matrix 2 : \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&b[i][j]);
	printf("Resultant matrix : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]+=a[i][k]*b[k][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	getch();
}