#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	int gdriver=DETECT,gmode,x,y,key,i,flag,fl1,k,temp,a,b,time,score;
	char arr[50],arr1[50];
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	x=10;y=10;i=x+100;flag=0;k=y;time=5;score=0;fl1=0;
	a=rand()%100+1;
	b=rand()%100+1;
	while(1)
	{
		setbkcolor(BLUE);
		if(fl1==0)
		{
		while(time!=0)
		{
		cleardevice();
		setcolor(CYAN);
		rectangle(100,150,550,300);
		outtextxy(200,200,"WELCOME TO SNAKE GAME!");
		sprintf(arr1,"GAME STARTS IN %d SECOND(S)",time);
		outtextxy(200,220,arr1);
		sleep(1);time--;
		}
		cleardevice();fl1=1;
		}
		if(!kbhit())
		{
			cleardevice();
			if(flag==0)
			{
				bar(x,y,i,y+5);
				x+=10;i+=10;
				setcolor(LIGHTRED);
				outtextxy(a,b,"#");
				if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i+=20;score+=500;
				}
			}
			if(flag==1)
			{
				bar(i,y,i+5,k);
				y+=10;k+=10;x=i;
				setcolor(LIGHTRED);
				outtextxy(a,b,"#");
				if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k+=20;score+=500;
				}
			}
			if(flag==2)
			{
				bar(i,y,i+5,k);
				y-=10;k-=10;x=i;
				setcolor(LIGHTRED);
				outtextxy(a,b,"#");
				if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k-=20;score+=500;
				}
			}
			if(flag==3)
			{
				bar(x,y,i,y+5);
				x-=10;i-=10;
				setcolor(LIGHTRED);
				outtextxy(a,b,"#");
				if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i-=20;score+=500;
				}
			}
			if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
		}
		if(kbhit())
		{
			key=getch();
			if(key==80&&flag!=3)
			{
				k=y;
				while(x!=i)
				{
					cleardevice();
					bar(x,y,i,y+5);
					bar(i,y,i+5,k);
					x+=10;k+=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if(flag==0)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i+=20;score+=500;
				}
					}
					else if(flag==1)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k+=20;score+=500;
				}
					}
					else if(flag==2)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k-=20;score+=500;
				}
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				flag=1;
			}
			if(key==80&&flag==3)
			{
				k=y;
				while(x!=i)
				{
					cleardevice();
					bar(x,y,i,y+5);
					bar(i,y,i+5,k);
					x-=10;k+=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
					{
						a=rand()%500+1;
						b=rand()%500+1;
						setcolor(LIGHTRED);
						outtextxy(a,b,"#");
						i-=20;score+=500;
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				flag=1;
			}
			if(key==77&&flag!=2)
			{
				while(y!=k)
				{
					cleardevice();
					bar(x,y,x+5,k);
					bar(x,k,i,k+5);
					y+=10;i+=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if(flag==0)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i+=20;score+=500;
				}
					}
					else if(flag==1)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k+=20;score+=500;
				}
					}
					else if(flag==3)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i-=20;score+=500;
				}
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				y=k;flag=0;
			}
			if(key==77&&flag==2)
			{
				while(y!=k)
				{
					cleardevice();
					bar(x,y,x+5,k);
					bar(x,k,i,k+5);
					y-=10;i+=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
					{
						a=rand()%500+1;
						b=rand()%500+1;
						setcolor(LIGHTRED);
						outtextxy(a,b,"#");
						k-=20;score+=500;
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				y=k;flag=0;
			}
			if(key==72&&flag!=3)
			{
				k=y;
				while(x!=i)
				{
					cleardevice();
					bar(x,y,i,y+5);
					bar(i,y,i+5,k);
					x+=10;k-=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if(flag==0)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i+=20;score+=500;
				}
					}
					else if(flag==1)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k+=20;score+=500;
				}
					}
					else if(flag==2)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k-=20;score+=500;
				}
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				flag=2;
			}
			if(key==72&&flag==3)
			{
				k=y;
				while(x!=i)
				{
					cleardevice();
					bar(x,y,i,y+5);
					bar(i,y,i+5,k);
					x-=10;k-=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i-=20;score+=500;
				}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				flag=2;
			}
			if(key==75&&flag!=1)
			{
				while(y!=k)
				{
					cleardevice();
					bar(x,y,x+5,k);
					bar(x,k,i,k+5);
					y-=10;i-=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if(flag==0)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i+=20;score+=500;
				}
					}
					else if(flag==2)
					{
						if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k-=20;score+=500;
				}
					}
					else if(flag==3)
					{
						if((a>=i-10&&a<=i+10)&&(b>=y-10&&b<=y+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					i-=20;score+=500;
				}
					}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				y=k;flag=3;
			}
			if(key==75&&flag==1)
			{
				while(y!=k)
				{
					cleardevice();
					bar(x,y,x+5,k);
					bar(x,k,i,k+5);
					y+=10;i-=10;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					if((b>=k-10&&b<=k+10)&&(a>=i-10&&a<=i+10))
				{
					a=rand()%500+1;
					b=rand()%500+1;
					setcolor(LIGHTRED);
					outtextxy(a,b,"#");
					k+=20;score+=500;
				}
					delay(100);
				if((i==0||i==650)||(k==0||k==500))
			{
				cleardevice();
			setcolor(CYAN);
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"THANK YOU FOR PLAYING");
			sleep(5);exit(0);
			}
				}
				y=k;flag=3;
			}
			if(key==27)
			exit(0);
		}
		delay(100);
	}
	getch();
	closegraph();
}

