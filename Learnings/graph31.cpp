
#include <graphics.h>
#include <conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setcolor(YELLOW);
   rectangle(0,30,639,450);

   return 0;
}
