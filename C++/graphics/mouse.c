#include <graphics.h>
#include<iostream>
using namespace std;

int main()
{
    const int LIMIT = 100; // Number of clicks to stop program.
    int maxx, maxy;  // Maximum x and y pixel coordinates
    int count = 0;   // Number of mouse clicks
    int divisor;     // Divisor for the length of a triangle side
 
    // Put the machine into graphics mode and get the maximum
coordinates:
    initwindow(450, 300);
    maxx = getmaxx( );
    maxy = getmaxy( );
 
    // Draw a white circle with red inside and a radius of 50 pixels:
    setfillstyle(SOLID_FILL, RED);
    setcolor(WHITE);
    fillellipse(maxx/2, maxy/2, 50, 50);
 
    // Print a message and wait for a red pixel to be double clicked:
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
  //  outtextxy(20, 20, "Left click " << LIMIT << " times to end.");
    setcolor(BLUE);
    divisor = 2;
    while (count < LIMIT)
    {
  
  delay(500);
  divisor++;
  if (ismouseclick(WM_LBUTTONDOWN))
	{
     
        // cout<<"\nx = "<<mousex()<<"\ty= "<<mousey();  
        
        outtextxy(mousex(),mousey(),".");
        clearmouseclick(WM_LBUTTONDOWN);
  }
    }
 
    // Switch back to text mode:
    closegraph( );
}
