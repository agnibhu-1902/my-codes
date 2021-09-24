#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver=DETECT,time,flag=0,circlex,circley,score,gmode,a,b,key,i,speedx,speedy;
	char arr[50],arr1[50];time=5;
	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
	clrscr();
	speedx=10;speedy=10;
	circlex=50,circley=200;
	a=245;b=455;
	setbkcolor(CYAN);
	score=0;
	while(1)
	{
		if(flag==0)
		{
		while(time!=0)
		{
		cleardevice();
		rectangle(100,150,500,300);
		outtextxy(200,200,"WELCOME TO PING-PONG GAME!");
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
			a+=30;
			if(key==75)//Left arrow
			a-=30;
			if(key==27)
			exit(0);
		}
		/*bar(25,5,115,15);
		bar(130,5,220,15);
		bar(235,5,325,15);
		bar(340,5,430,15);
		bar(445,5,535,15);
		bar(550,5,630,15);
		bar(70,25,180,40);
		bar(280,25,385,40);
		bar(490,25,590,40);
		bar(190,45,270,65);
		bar(395,45,480,65);
		bar(280,85,385,105);*/
		bar(a-45,b-5,a+45,b+5);
		circle(circlex,circley,10);
		circlex+=speedx;circley+=speedy;
		if((circlex>=a-45&&circlex<=a+45)&&(circley==b-5))
		{
			score+=100;
			speedy=-10;
		}
		/*if(((circlex>=280&&circlex<=385)&&(circley==105))||((circlex>=190&&circlex<=270)&&(circlex>=395&&circlex<=480)&&(circley==65)))
		{
			score+=500;
			speedy=10;
		}*/
		if(circley==0)
		speedy=10;
		if(circlex==0)
		speedx=10;
		if(circlex==650)
		speedx=-10;
		if(circley==500)
		{
			cleardevice();
			rectangle(100,150,450,300);
			outtextxy(200,200,"GAME OVER!");
			sprintf(arr,"YOUR SCORE : %d",score);
			outtextxy(200,220,arr);
			outtextxy(200,240,"PRESS Esc TO EXIT");
			sleep(5);
		}
		delay(30);
		cleardevice();
	}
	getch();
	closegraph();
}