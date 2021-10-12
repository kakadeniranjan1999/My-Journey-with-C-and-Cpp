#include <graphics.h>
#include<iostream>
using namespace std;

int x=100,y=50;
int x1[]={80,480,880,1280,1680,500,850,1300,1650};
int y1[]={100,100,100,100,100,50,180,50,180};
int x2[]={280,680,1080,1480,1880,450,800,1250,1600};
int y2[]={150,150,150,150,150,80,210,80,210};

void draw()
{
    fillellipse(x,y,20,20);
    delay(1);
    cleardevice();
}

void jump(int i)
{
     y=y+i;
    fillellipse(x,y,20,20);
    delay(1);
    cleardevice();
}

void move(int i)
{
     x=x+i;
    fillellipse(x,y,20,20);
    delay(1);
    cleardevice();
}


int main( )
{
    initwindow(400, 300, "First Sample");
int i=0,ch;

for(int k=0;k<10;k++)
         {
         for(int j=2;j<800;j++)
         {       
         bar3d(x1[0]-j,y1[0],x2[0]-j,y2[0],0,0);
        bar3d(x1[1]-j,y1[1],x2[1]-j,y2[1],0,0);
         bar3d(x1[2]-j,y1[2],x2[2]-j,y2[2],0,0);
         bar3d(x1[3]-j,y1[3],x2[3]-j,y2[3],0,0);
         bar3d(x1[4]-j,y1[4],x2[4]-j,y2[4],0,0);
         bar3d(x1[5]-(j+5),y1[5],x2[5]-(j+5),y2[5],0,0);//o1
         bar3d(x1[6]-(j+5),y1[6],x2[6]-(j+5),y2[6],0,0);//o2
         bar3d(x1[7]-(j+5),y1[7],x2[7]-(j+5),y2[7],0,0);//o3
         bar3d(x1[8]-(j+5),y1[8],x2[8]-(j+5),y2[8],0,0);//o4
         line(10,15,10000,15);
         line(10,250,10000,250);
         delay(1);  
         
         if(x1[0]>x && y1[0]>y && x2[0]<x && y2[0]<y){
                     
                     cout<<"game over";
                     break;
                     }
         
         if(kbhit())
             {
             ch=getch();
                        if(ch==119)//w
                        {
                             jump(-4);
                        }
                       else if(ch==115)//s
                        {
                             jump(4);
                        } 
                        else  if(ch==100)//d
                        {
                            
                            move(+4);
                        }
                       else if(ch==97)//a
                        {
                            
                             move(-4);
                        }               
             }
         draw();  
          cleardevice();
          
}
}

   
    return 0;
}
