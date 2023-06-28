//for Rectangle = rectangle(x1,y1,radious)
#include<graphics.h>
#include<conio.h>
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,(char *)"");
 //setbkcolor(GREEN);
 outtextxy(270,310,"Hello");
 printf("\t\t Rectangle");
 rectangle(200,250,400,400);
 //printf("\t\t\n Rectangle");
 //rectangle(150,200,400,500);
 getch();
 return 0;
}
