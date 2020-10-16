#include<graphics.h>
#include<conio.h>

main()
{

   int gd = DETECT, gm;
   initgraph(&gd, &gm, " ");



//leftside road
setcolor(8);
  int road2[] = {0,585,580,610,740,655,740,785,510,690,0,665,0,585};
    drawpoly(7,road2);
    setfillstyle(SOLID_FILL,8);
    fillpoly(7,road2);

 //............................... sports car..............................

 int base[] = {150,550,150,610,350,610,350,550,150,550};
   drawpoly(5,base) ;//white
   setfillstyle(SOLID_FILL,WHITE);
   fillpoly(5,base);
 int topbase[] = {70,570,78,560,150,550,435,550,429,570,70,570};
   drawpoly(6,topbase);//yellow
   setfillstyle(SOLID_FILL,YELLOW);
   fillpoly(6,topbase);
 int bottombase[] = {70,570,80,582,150,610,350,610,429,570,70,570};
   drawpoly(6,bottombase);//red
   setfillstyle(SOLID_FILL,RED);
   fillpoly(6,bottombase);
setcolor(BLACK);
 int toproof[] = {185,550,285,515,355,515,435,550,185,550};
   drawpoly(5,toproof);//red
   setfillstyle(SOLID_FILL,RED);
   fillpoly(5,toproof);
 int door[]={205,595,315,595,315,570,330,550,330,520,285,520,205,550,205,595};
   drawpoly(8,door);//red
   setfillstyle(SOLID_FILL,RED);
   fillpoly(8,door);
 int handl[] = {310,570,300,570,300,566,310,566,310,570};
   drawpoly(5,handl);//white or cyan
   setfillstyle(SOLID_FILL,YELLOW);
   fillpoly(5,handl);
 int bottomroof[] = {205,550,285,520,330,520,435,550,205,550};
   drawpoly(5,bottomroof);//white or cyan
   setfillstyle(SOLID_FILL,CYAN);
   fillpoly(5,bottomroof);
 setcolor(BLACK);
 line(285,520,285,550);
 int glass[] = {330,550,330,520,435,550,330,550};
   drawpoly(4,glass);// light gray
   setfillstyle(SOLID_FILL,YELLOW);
   fillpoly(4,glass);

 //wheel
     //left
 setcolor(BLACK);
  circle(150,590,30);//black
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(150,590,BLACK);
setcolor(YELLOW);
  circle(150,590,15);//white or light gray
    setfillstyle(SOLID_FILL,RED);
    floodfill(150,590,YELLOW);
 //right
setcolor(BLACK);
 circle(350,590,30);//black
   setfillstyle(SOLID_FILL,BLACK);
   floodfill(350,590,BLACK);
setcolor(YELLOW);
 circle(350,590,15);// white or light gray
   setfillstyle(SOLID_FILL,RED);
   floodfill(350,590,YELLOW);



getch();
closegraph();
}
