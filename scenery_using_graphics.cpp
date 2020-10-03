#include<graphics.h>
#include<conio.h>
#include <stdlib.h>
#include<cmath>
main()
{
    system("CLS");
   int gd = DETECT, gm ;
   initgraph(&gd, &gm, " ");

//frame
setcolor(WHITE);
int frame[] = {0,0,0,735,1275,735,1275,0,0,0};
drawpoly(5,frame);

   //sky
   setcolor(CYAN);
   int sky [] = {0,0,0,300,1275,300,1275,0,0,0};
   drawpoly(5,sky);
   setfillstyle(SOLID_FILL,CYAN);
   fillpoly(5,sky);
   //sun
   for(int i=36;i<80;i++)
   for(int j=0;j<=360;j+=10)
   {
    int x=150+i*cos(((float)j*3.14)/180);
    int y=80+i*sin(((float)j*3.14)/180);
    putpixel(x,y,LIGHTRED);
   }
    setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(150,80,35,35);

   //grass
   setcolor(GREEN);
   int grass [] = {0,300,0,735,1275,735,1275,300,0,300};
   drawpoly(5,grass);
    setfillstyle(SOLID_FILL,GREEN);
   fillpoly(5,grass);
   //river
   setcolor(BLUE);
   int river[] = {0,300,0,735,500,735,300,300,0,300};
   drawpoly(5,river);
     setfillstyle(SOLID_FILL,BLUE);
   fillpoly(5,river);
   //int grass1 [] = {280,300,280,0,1275,0,1275,300,280,300};
   //drawpoly(5,grass1);

   //mountains
    int i=300;
    while(i<=950)
    {

        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        int mountains[]= {i,300,i+162,100,i+325,300,i,300};
        drawpoly(4,mountains);
        floodfill(i+160,220,BROWN);

        i+=325;
    }


   //hut
   //hut wall(left)
  setcolor(LIGHTRED);
  setfillstyle(WIDE_DOT_FILL ,LIGHTRED);
  rectangle(685,420,785,540);
  floodfill(687,422,LIGHTRED);

   //hut wall(right)
    setcolor(RED);
    setfillstyle(INTERLEAVE_FILL  ,RED);
     rectangle(785,420,955,540);
     floodfill(787,422,RED);

     //hut door
     setcolor(YELLOW);
     setfillstyle(SOLID_FILL,YELLOW);
     rectangle(715,480,755,540);
     floodfill(717,482,YELLOW);
     //hut top

     int top[] = {685,420,735,340,785,420,685,420};
     setcolor(LIGHTCYAN);
     setfillstyle(CLOSE_DOT_FILL,LIGHTCYAN);
     drawpoly(4,top);
     floodfill(735,400,LIGHTCYAN);



     //hut shed
     int shed[] = {735,340,785,420,955,420,905,340,735,340};
     setcolor(RED);
     setfillstyle(CLOSE_DOT_FILL, RED);
     drawpoly(5,shed);
     floodfill(800,400,RED);

    //hut window
    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(840,460,900,500);
    floodfill(842,462,LIGHTRED);

   //path
   setcolor(LIGHTGRAY);
   int path[] = {715,540,600,735,870,735,755,540,715,540};
    drawpoly(5,path);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   fillpoly(5,path);


   //clouds
   setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
ellipse(670,50,20,300,30,30);
ellipse(696,40,345,165,30,30);
ellipse(725,47,320,140,30,30);
ellipse(729,62,200,80,30,30);
ellipse(697,66,163,340,31,30);
floodfill(685,42,WHITE);


  setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
ellipse(270,50,20,300,30,30);
ellipse(296,40,345,165,30,30);
ellipse(325,47,320,140,30,30);
ellipse(329,62,200,80,30,30);
ellipse(297,66,163,340,31,30);
floodfill(285,42,WHITE);

     setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
ellipse(1170,50,20,300,30,30);
ellipse(1196,40,345,165,30,30);
ellipse(1225,47,320,140,30,30);
ellipse(1229,62,200,80,30,30);
ellipse(1197,66,163,340,31,30);
floodfill(1185,42,WHITE);

//grass
   int k = 500;
   while(k<=590)
   {
   setcolor(LIGHTGREEN);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   int grasses[] = {k,735,k+5,715,k+10,735,k,735};
   drawpoly(4,grasses);
   floodfill(k+5,730,LIGHTGREEN);
   k+=10;
   }

   //flowers

    int j = 500;
    while(j<=590)
    {
    {
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    ellipse(j,690,0,360,20,10);
    ellipse(j,690,0,360,10,20);
    floodfill(j,690,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(j-15,690,WHITE);
    floodfill(j+15,690,WHITE);
    floodfill(j,690-15,WHITE);
    floodfill(j,690+15,WHITE);

    }
    j+=45;

    }

   //grass
 k = 870;
   while(k<=1270)
   {
   setcolor(LIGHTGREEN);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   int grasses[] = {k,735,k+5,715,k+10,735,k,735};
   drawpoly(4,grasses);
   floodfill(k+5,730,LIGHTGREEN);
   k+=10;
   }
 //flowers

     j = 870;
    while(j<=1270)
    {
    {
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    ellipse(j,690,0,360,20,10);
    ellipse(j,690,0,360,10,20);
    floodfill(j,690,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(j-15,690,WHITE);
    floodfill(j+15,690,WHITE);
    floodfill(j,690-15,WHITE);
    floodfill(j,690+15,WHITE);

    }
    j+=45;

    }


  //tree
 setcolor(LIGHTGREEN);
 int t1[] = {1000,400,1060,310,1120,400,1000,400};
 drawpoly(4,t1);
 setfillstyle(SOLID_FILL,LIGHTGREEN);
 fillpoly(4,t1);

  int t2[] = {1000,450,1060,370,1120,450,1000,450};
 drawpoly(4,t2);
 setfillstyle(SOLID_FILL,LIGHTGREEN);
 fillpoly(4,t2);

  int t3[] = {1000,500,1060,420,1120,500,1000,500};
 drawpoly(4,t3);
 setfillstyle(SOLID_FILL,LIGHTGREEN);
 fillpoly(4,t3);
  int t4[] = {1000,550,1060,470,1120,550,1000,550};
 drawpoly(4,t4);
 setfillstyle(SOLID_FILL,LIGHTGREEN);
 fillpoly(4,t4);
 setcolor(BROWN);
int t5[] = {1050,550,1050,720,1070,720,1070,550,1050,550};
drawpoly(5,t5);
 setfillstyle(SOLID_FILL,BROWN);
 fillpoly(5,t5);


//fish1
setcolor(LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);
 arc(200,400,50,300,30);
 line(215,375,310,440);
 line(215,425,310,390);
 floodfill(250,400,LIGHTRED);

 setcolor(RED);
setfillstyle(SOLID_FILL,RED);
  line(215,375,310,440);
 line(215,425,310,390);
 line(310,440,310,390);
 floodfill(307,420,RED);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
 circle(180,400,3);
 floodfill(181,401,BLACK);
 arc(180,400,270,90,20);


 //fish2
 setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
 arc(100,600,50,300,30);
 line(115,575,210,640);
 line(115,625,210,590);
 floodfill(150,600,YELLOW);

 setcolor(LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);
line(115,575,210,640);
 line(115,625,210,590);
 line(210,640,210,590);
 floodfill(207,620,LIGHTRED);

 setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
 circle(80,600,3);
 floodfill(81,601,BLACK);

 arc(80,600,270,90,20);


 //birds
 setcolor(BLACK);

 arc(320,50,0,60,30);
 arc(380,50,120,180,30);


 //left
  arc(480,50,0,60,30);
 arc(540,50,120,180,30);

 arc(520,50,0,60,30);
 arc(580,50,120,180,30);

 //right
  arc(880,50,0,60,30);
 arc(940,50,120,180,30);

 arc(920,50,0,60,30);
 arc(980,50,120,180,30);

    getch();
    closegraph();
    }
