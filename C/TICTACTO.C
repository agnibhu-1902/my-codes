#include<stdio.h>
#include<conio.h>
void main()
{
	char* a[3][3],i,j,pos,col,x,y,z,c,d,q,l,fl=0,flag=0,nm[2][2]={". "},nnm[2][2]={"X "},nnnm[2][2]={"O "};
	clrscr();
	textcolor(CYAN+BLINK);textbackground(BLACK);
	printf("********************");
	cprintf("WELCOME TO TIC-TAC-TOE GAME!");
	printf("********************\n");
	textcolor(7);
	col=2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=". ";
			textcolor(col);
			cprintf("%s",a[i][j]);
			col++;
		}
		printf("\n");
	}
	textcolor(7);
	printf("\nValid positions : 1 to 9\n\n");
	for(;;)
	{
	printf("\nYOUR TURN\n\n");
	do{
	x=0;y=0;z=1;
	printf("Enter position : ");
	scanf("%d",&pos);
	printf("\n");
	while(z<=pos)
	{
		if(z==4||z==7)
		{
			x++;y=0;
		}
		else if(z!=1)
		{
			y++;
		}
		z++;
	}
	if(strcmp(a[x][y],nm)==0)
	{
		a[x][y]="X ";
		fl=1;break;
	}
	else if(pos<1||pos>=10)
	{
		printf("Invalid position entered. Re-enter\n");
		fl=0;
	}
	else
	{
		printf("Position already occupied. Re-enter\n");
		fl=0;
	}
	}while(fl!=1);
		col=2;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			textcolor(col);
			cprintf("%s",a[i][j]);
			col++;
		}
		printf("\n");
	}
	c=0,d=0;
	textcolor(GREEN+BLINK);
	if(strcmp(a[x][c],nnm)==0&&strcmp(a[x][c+1],nnm)==0&&strcmp(a[x][c+2],nnm)==0)
	{
		cprintf("\nYOU WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	if(strcmp(a[d][y],nnm)==0&&strcmp(a[d+1][y],nnm)==0&&strcmp(a[d+2][y],nnm)==0)
	{
		cprintf("\nYOU WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	q=1;
	if((strcmp(a[q-1][q-1],nnm)==0&&strcmp(a[q][q],nnm)==0&&strcmp(a[q+1][q+1],nnm)==0)||(strcmp(a[q-1][q+1],nnm)==0&&strcmp(a[q][q],nnm)==0&&strcmp(a[q+1][q-1],nnm)==0))
	{
		cprintf("\nYOU WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	textcolor(YELLOW+BLINK);
	l=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(strcmp(a[i][j],nm)!=0)
			l++;
			if(l==10)
			{
				cprintf("\nGAME DRAWN\n\n");
				 textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
				getch();
				exit(0);
			}
		}
	}
	while(1)
	{
		printf("\nCOMPUTER'S TURN\n\n");
		do{
		do
		{
			pos=rand()%10+1;
		}while(pos==10);
		x=0;y=0;z=1;
		while(z<=pos)
	{
		if(z==4||z==7)
		{
			x++;y=0;
		}
		else if(z!=1)
		{
			y++;
		}
		z++;
	}
	if(strcmp(a[x][y],nm)==0)
	{       printf("Position entered : ");
		printf("%d",pos);
		printf("\n");
		a[x][y]="O ";
		flag=1;
	}
	else
	{
		flag=0;
	}
	}while(flag!=1);
			printf("\n");
			col=2;
			for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			textcolor(col);
			cprintf("%s",a[i][j]);
			col++;
		}
		printf("\n");
	}
	textcolor(RED+BLINK);
	c=0,d=0;
	if(strcmp(a[x][c],nnnm)==0&&strcmp(a[x][c+1],nnnm)==0&&strcmp(a[x][c+2],nnnm)==0)
	{
		cprintf("\nCOMPUTER WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	if(strcmp(a[d][y],nnnm)==0&&strcmp(a[d+1][y],nnnm)==0&&strcmp(a[d+2][y],nnnm)==0)
	{
		cprintf("\nCOMPUTER WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	q=1;
	if((strcmp(a[q-1][q-1],nnnm)==0&&strcmp(a[q][q],nnnm)==0&&strcmp(a[q+1][q+1],nnnm)==0)||(strcmp(a[q-1][q+1],nnnm)==0&&strcmp(a[q][q],nnnm)==0&&strcmp(a[q+1][q-1],nnnm)==0))
	{
		cprintf("\nCOMPUTER WON!\n\n");
		textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
		getch();
		exit(1);
	}
	textcolor(YELLOW+BLINK);
	l=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(strcmp(a[i][j],nm)!=0)
			l++;
			if(l==10)
			{
				cprintf("\nGAME DRAWN\n\n");
				textcolor(YELLOW);textbackground(BLUE);
		cprintf("THANK YOU FOR PLAYING");
		textcolor(WHITE);textbackground(BLACK);
				getch();
				exit(0);
			}
		}
	}
	if(flag==1)
	break;
	}
	}
}