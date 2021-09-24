    #include<stdio.h>
    #include<graphics.h> 
    #include<string.h> 
    #include<math.h>
    #include<conio.h>
    int const monthcount=12,dataoffset=18;
    struct indata
    {
     float realarray[ 12]; 
     float array[ 12];
    };
    char getlabel[3];
    indata data;
    int monthplace[ 12];
    float interval,chartbottom,radius; 
    struct wcp
    {
    float x;
    float y;
    } coord[monthcount]; 
    wcp center; 
    int round(float a)
    {
     int b;
     b=a; 
     if(a-b>0.5) 
      return ++b; 
     else
      return b;
    }
    void polyline(int x, wcp *y)
    {
     for(int i=0;i<x-1 ;i++)
     line(y[i].x,y[i].y,y[i+1].x,y[i+1].y);
    }
    void getlab(int x)
    {
     switch(x)
     {
      case 0:
      {
       strcpy(getlabel,"JAN"); 
       break;
      }
      case 1: 
      {
       strcpy(getlabel ,"FEB");
       break;
      }
      case 2:
      {  
       strcpy(getlabel," MAR"); 
       break;
      }
      case 3:
      {
       strcpy(getlabel,"APR"); 
       break;
      }
      case 4:
      { 
       strcpy(getlabel,"MAY"); 
       break;
      }
      case 5:
      {
       strcpy(getlabel,"JUN"); 
       break;
      }
      case 6:
      {
       strcpy(getlabel,"JUL");
       break;
      }
      case 7:
      {
       strcpy(getlabel,"AUG" ); 
       break;
      }
      case 8:
      { 
       strcpy(getlabel,"SEP"); 
       break;
      }
      case 9:
      {
       strcpy(getlabel,"OCT"); 
       break;
      }
      case 10:
      { 
       strcpy(getlabel,"NOV"); 
       break;
      }
      case 11:
      {
       strcpy(getlabel,"DEC"); 
       break;
      }
     }
    }
    void getdata()
    {
     float t1=0.00,t2; 
     for(int t=0;t<12;t++)
     {
     getlab(t);
     printf("ENTER THE DATA FOR THE MONTH OF %s: ",getlabel);
     scanf("%f",&data.realarray[t]);
     if(data.realarray[t]>t1 )
     {
      t1=data.realarray[t];
     }
     }
     for(t=0;t<12;t++)
     {
      t2=data.realarray[t]/t1;
      data.array[t]=t2*400;
     }
    }
    void puttext(wcp textp)
    {
     settextstyle(1,HORIZ_DIR,1);
     outtextxy(textp.x,textp.y,getlabel);
    }
    void drawlabels()
    {
     wcp textposition;
     textposition.y=chartbottom;
     int zz=25;
     for(int az=0;az<12;az++)
     {
      textposition.x=zz;
      zz+=50;
      getlab(az);
      puttext(textposition);
     }
    }
    char valuep[5];
    void findvaluep(int x)
    {
     int y=x,ttt;
     char tg[5];
     strcpy(tg,"");
     do
     {
      ttt=y%10;
      switch(ttt)
      {
       case 0:
       {
        strcat(tg,"0");
        break;
       }
       case 1:
       {
        strcat(tg,"1");
        break;
       }
       case 2:
       {
        strcat(tg,"2");
        break;
       }
       case 3:
       {
        strcat(tg,"3");
        break;
       }
       case 4:
       {
        strcat(tg,"4");
        break;
       }
       case 5:
       {
        strcat(tg,"5");
        break;
       }
       case 6:
       {
        strcat(tg,"6");
        break;
       }
       case 7:
       {
        strcat(tg,"7");
        break;
       }
       case 8:
       {
        strcat(tg,"8");
        break;
       }
       case 9:
       {
        strcat(tg,"9");
        break;
       }
      }
      y/=10;
     } while(y>0);
     strcpy(valuep,"");
     for(y=0;y<strlen(tg);y++)
     {
      valuep[y]=tg[strlen(tg)-y-1];
     }
     valuep[y]=NULL;
    }
    void linechart()
    {
     drawlabels();
     settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
     for(int t=0;t<monthcount;t++)
     {
      coord[t].x=monthplace[t];
      coord[t].y=450-data.array[t]-dataoffset;
      findvaluep(data.realarray[t]);
      outtextxy(coord[t].x,coord[t].y-10,valuep);
     }
     polyline(monthcount,coord);
    }
    void main()
    {
     int gdriver=DETECT,gmode;
     initgraph(&gdriver,&gmode,"");
     getdata();
     cleardevice();
     chartbottom=450.0;
     interval=50.0;
     monthplace[0]=25;
     for(int z=1;z<monthcount;z++)
     monthplace[z]=monthplace[z-1 ]+interval;
     linechart();
     getch();
     cleardevice();
     closegraph();
    }
