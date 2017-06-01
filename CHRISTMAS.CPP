//                       created by Yougansh Thakur
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
  clrscr();
  int gm,gd=DETECT;
  int ctrx,ctry;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  ctrx=getmaxx()/2;
  ctry=getmaxy()/2;
  int startx=ctrx,starty=60;
  int x,y,i=1,count=0,temp;
  settextstyle(1,0,4);
  setcolor(14);
  outtextxy(ctrx-135,10,"Merry Christmas");
   settextstyle(0,0,0);
  setcolor(2);
  //print leaves----->
  y=starty;
  while(!kbhit())
  {
  count=0;

  y=starty;
  while(count<4)
  {
      i=count*2;
       temp=random(15)+1;
      while(i<=(5+(2*count)))
      {
	 x=startx-(5*i*3);
	 for(int j=1;j<i*3-1;j++)
	 {  setcolor(temp);
	    if(j==1&&i==1)
	    setcolor(14);
	      outtextxy(x,y,"*");
	    x+=10;
	 }
	 y=y+12;
	 i++;
      }
      count++;
  }
  //print root---->
  count=0;
  setcolor(6);

  while(count<7)
  {
     setcolor(2);
     outtextxy(startx-23,y,"***");
     y+=10;
     count++;
     }
     delay(500);


  }
  delay(500);
  getch();
 }
