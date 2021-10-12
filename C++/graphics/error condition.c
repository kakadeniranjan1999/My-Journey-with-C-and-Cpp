#include <graphics.h>
#include<iostream>
using namespace std;
int  x=100,y=50,x1=150,y1=80;

void draw()
{
    circle(x,y,20);
    delay(5);
    cleardevice();
}

void jump(int i)
{
     y=y+i;
     y1=y1+i;
    circle(x,y,20);
    delay(5);
    cleardevice();
}

void move(int i)
{
     x=x+i;
     x1=x1+i;
    circle(x,y,20);
    delay(5);
    cleardevice();
}


int main( )
{
    initwindow(400, 300, "First Sample");
int i=0,ch;

    while (1)
    {
    	outtextxy(500,500,"GAME");
              rectangle(300,50,450,100);
              
              if(x+20>=300 && y+20<=450)
              {
                         outtextxy(100,100,"GAME OVER");
                         delay(2000);
                         return 0;
                         }
              
              
              
              
             if(kbhit())
             {
             ch=getch();
                        if(ch==119)//w
                        {
                             jump(-2);
                        }
                       else if(ch==115)//s
                        {
                             jump(2);
                        } 
                        else  if(ch==100)//d
                        {
                            
                            move(+2);
                        }
                       else if(ch==97)//a
                        {
                            
                             move(-2);
                        }               
             }
         draw();    
    }
    return 0;
}
