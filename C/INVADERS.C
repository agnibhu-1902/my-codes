#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
	int gdriver=DETECT,gmode,key,x,y,a,b,c,d,p,q,l,e,f,m,z,score,time,flag;
	char arr[50],arr1[50];
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	x=325;y=0;a=125;b=0;p=525;q=0;l=625;m=0;z=0,c=300,d=450;f=d-20;e=c-5;flag=0;
	time=5;score=0;
	while(1)
	{
		if(flag==0)
		{
		while(time!=0)
		{
		cleardevice();
		setcolor(CYAN);
		rectangle(100,150,550,300);
		outtextxy(200,200,"WELCOME TO SPACE INVADERS GAME!");
		sprintf(arr1,"GAME STARTS IN %d SECOND(S)",time);
		outtextxy(200,220,arr1);
		sleep(1);time--;
		}
		cleardevice();flag=1;
		}
		if(kbhit())
		{
		key=getch();
		if(key==77)//Right arrow
		c+=30;
		if(key==75)//Left arrow
		c-=30;
		if(key==27)
		exit(0);
		}
		bar(c-40,d-5,c+40,d+5);
		bar(c-10,d-20,c+10,d-10);
		setcolor(LIGHTGREEN);
		outtextxy(e,f,"*");
		f-=20;
		if(f<10)
		{f=d-20;e=c-5;}
		outtextxy(e,f-30,"*");
		f-=20;
		if(f<10)
		{f=d-20;e=c-5;}
		outtextxy(e,f-60,"*");
		f-=20;
		if(f<10)
		{f=d-20;e=c-5;}
		setcolor(LIGHTRED);
		outtextxy(x,y,"@");y+=10;
		if(z>100)
		{outtextxy(a,b,"@");b+=10;}
		if(z>200)
		{outtextxy(p,q,"@");q+=10;}
		if(z>300)
		{outtextxy(l,m,"@");m+=10;}
		if(x>=c-10&&c<=c+10)
		{y=-10;x-=100;score+=50;}
		if(a>=c-10&&a<=c+10)
		{b=-10;a-=20;score+=50;}
		if(p>=c-10&&p<=c+10)
		{q=-10;p-=50;score+=50;}
		if(l>=c-10&&l<=c+10)
		{m=-10;l-=200;score+=50;}
		if(((x>=c-40&&x<c-10)||(x>c+10&&x<=c+40))&&(y==d))
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
		if(((a>=c-40&&a<c-10)||(a>c+10&&a<=c+40))&&(b==d))
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
		if(((p>=c-40&&p<c-10)||(p>c+10&&p<=c+40))&&(q==d))
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
		if(((l>=c-40&&l<c-10)||(l>c+10&&l<=c+40))&&(m==d))
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
		z+=10;
		if(y==500)
		{
			y=0;
			x-=100;
			if(x<10)
			{
				x=650;
			}
		}
		if(b==500)
		{
			b=0;
			a-=20;
			if(a<10)
			{
				a=650;
			}
		}
		if(q==500)
		{
			q=0;
			p-=50;
			if(p<10)
			{
				p=650;
			}
		}
		if(m==500)
		{
			m=0;
			l-=200;
			if(l<10)
			{
				l=625;
			}
		}
		delay(50);
		cleardevice();
	}
	getch();
	closegraph();
}
