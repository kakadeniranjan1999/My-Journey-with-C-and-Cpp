#include <graphics.h>

int  x=100,y=50;

void draw()
{
    circle(x,y,40);
    delay(5);
    cleardevice();
}

void jump(int i)
{
     y=y+i;
    circle(x,y,40);
    delay(5);
    cleardevice();
}

void move(int i)
{
     x=x+i;
    circle(x,y,40);
    delay(5);
    cleardevice();
}


int main( )
{
    initwindow(400, 300, "First Sample");
int i=0,ch;

    while (1)
    {
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
