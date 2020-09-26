#include <graphics.h>
#include <conio.h>
main()
{
   int gd=DETECT,gm;
   int points6[]={850,550,950,450,1050,550,850,550};
   int points[]={0,800,10,775,20,800,0,800};
   int mount1[]={0,424,250,100,500,424,0,424};
   int mount2[]={425,424,625,150,825,424,425,424};
   int mount3[]={720,424,895,200,1050,424,720,424};
   int mount4[]={1000,424,1267,25,1535,424,1000,424};
   int roof[]={950,450,1250,450,1350,550,1050,550,950,450};

   initgraph(&gd, &gm, " ");

   //sky
   setcolor(CYAN);
   rectangle(0,0,1534,425);
   setfillstyle(SOLID_FILL,CYAN);
   floodfill(1,1,CYAN);
   setcolor(RED);
   arc(804,270,0,360,270);
   setfillstyle(SOLID_FILL,RED);
   floodfill(803,268,RED);
   setcolor(YELLOW);
   arc(804,270,0,360,250);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(803,268,YELLOW);

   //ground
   setcolor(LIGHTGREEN);
   arc(767,-5000,180,360,5700);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   floodfill(767,750,LIGHTGREEN);
   setcolor(LIGHTGRAY);
   arc(1534,400,199,225,900);
   arc(-400,400,315,342,900);
   arc(767,-5000,180,360,5700);
   line(0,799,1534,799);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(650,790,LIGHTGRAY);
   setcolor(BLACK);
   arc(1534,400,199,225,900);
   arc(-400,400,315,342,900);

   //Sea
   setcolor(BLUE);
   line(0,425,1536,425);
   arc(767,-5000,180,360,5700);
   setfillstyle(SOLID_FILL,BLUE);
   floodfill(767,500,BLUE);
   setcolor(LIGHTGREEN);
   rectangle(0,424,1536,474);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   floodfill(767,450,LIGHTGREEN);


   //mountains
   setcolor(BROWN);
   line(0,424,1534,424);
   drawpoly(4, mount1);
   setfillstyle(SOLID_FILL,BROWN);
   fillpoly(4,mount1);
   setcolor(BROWN);
   drawpoly(4, mount2);
   setfillstyle(SOLID_FILL,BROWN);
   fillpoly(4,mount2);
   setcolor(BROWN);
   drawpoly(4, mount3);
   setfillstyle(SOLID_FILL,BROWN);
   fillpoly(4,mount3);
   setcolor(BROWN);
   drawpoly(4, mount4);
   setfillstyle(SOLID_FILL,BROWN);
   fillpoly(4,mount4);

   //main
   setcolor(RED);
   setfillstyle(INTERLEAVE_FILL,RED);
   rectangle(1050,550,1350,800);
   floodfill(1084,600,RED);
   drawpoly(5,roof);
   setfillstyle(BKSLASH_FILL,RED);
   fillpoly(5,roof);

   //doorwall
   setcolor(LIGHTRED);
   setfillstyle(SOLID_FILL,LIGHTRED);
   rectangle(850,550,1050,800);
   floodfill(884,600,LIGHTRED);
   drawpoly(4,points6);
   setfillstyle(SOLID_FILL,LIGHTRED);
   fillpoly(4,points6);

   //door
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   rectangle(900,650,1000,800);
   floodfill(960,700,YELLOW);
   setcolor(RED);

   //windows
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   rectangle(1100,600,1150,650);
   floodfill(1140,620,YELLOW);
   rectangle(1250,600,1300,650);
   floodfill(1260,620,YELLOW);
   rectangle(1100,700,1150,750);
   floodfill(1140,720,YELLOW);
   rectangle(1250,700,1300,750);
   floodfill(1270,720,YELLOW);
   setcolor(BLACK);
   line(1125,600,1125,650);
   line(1100,625,1150,625);
   line(1275,600,1275,650);
   line(1250,625,1300,625);
   line(1125,700,1125,750);
   line(1100,725,1150,725);
   line(1275,700,1275,750);
   line(1250,725,1300,725);

   setcolor(GREEN);
   for(int i=0;i<160;i++)
   {
       drawpoly(4,points);
       setfillstyle(SOLID_FILL,GREEN);
       fillpoly(4,points);
       points[0] = (i+1)*10;
       points[4] = (i+2)*10;
       points[2] = ( points[0] + points[4] )/2;
       points[6] = points[0];
   }

    //tree
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    arc(140,560,90,320,50);
    arc(160,480,50,290,50);
    arc(260,480,-90,120,50);
    arc(280,560,-120,110,50);
    arc(210,430,-15,195,50);
    arc(210,600,180,360,50);
    floodfill(200,550,GREEN);
    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL,MAGENTA);
    circle(180,500,10);
    circle(220,540,8);
    circle(200,440,10);
    circle(240,590,5);
    circle(120,580,8);
    circle(240,480,7);
    circle(285,565,10);
    floodfill(200,440,MAGENTA);
    floodfill(220,540,MAGENTA);
    floodfill(180,500,MAGENTA);
    floodfill(240,590,MAGENTA);
    floodfill(240,480,MAGENTA);
    floodfill(120,580,MAGENTA);
    floodfill(285,565,MAGENTA);
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    line(0,799,650,799);
    line(157,600,210,650);
    line(210,650,263,599);
    arc(-16,700,-30,30,200);
    arc(435,700,150,210,200);
    floodfill(200,700,BROWN);

    //cloud
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    arc(410,205,-99,120,40);
    arc(250,205,80,310,40);
    arc(296,165,-15,195,40);
    arc(368,165,-15,195,40);
    arc(296,245,135,345,40);
    arc(368,245,135,360,40);
    arc(1430,135,-99,120,40);
    arc(1270,135,80,310,40);
    arc(1316,95,-15,195,40);
    arc(1388,95,-15,195,40);
    arc(1316,175,135,345,40);
    arc(1388,175,135,360,40);
    floodfill(1270,150,WHITE);
    floodfill(270,250,WHITE);

   setcolor(BLACK);
   arc(310,100,20,90,50);
   arc(400,100,90,160,50);
   arc(110,130,20,90,50);
   arc(200,130,90,160,50);
   arc(710,80,20,90,50);
   arc(800,80,90,160,50);
   arc(760,150,20,90,50);
   arc(850,150,90,160,50);
   arc(1310,160,20,90,50);
   arc(1400,160,90,160,50);
   arc(1410,70,20,90,50);
   arc(1500,70,90,160,50);


   getch();
   closegraph();
   return 0;
}
