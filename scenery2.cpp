#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm ;
   initgraph(&gd, &gm, " ");

//background color below sea(land)
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    int ground[] = {0,160,1280,160,1280,660,0,660,0,160};
    drawpoly(5,ground);
    floodfill(20,400,LIGHTGREEN);

//bg color bw mountains and land (sea)
   setcolor(LIGHTBLUE);
   setfillstyle(SOLID_FILL,LIGHTBLUE);
   int sea[] = {0,180,1280,220,1280,300,0,260,0,180};
   drawpoly(5,sea);
   floodfill(10,190,LIGHTBLUE);

//bg color beyond mountain(sky)
    setcolor(CYAN);
    setfillstyle(SOLID_FILL,CYAN);
    int sky[]={0,160,1280,160,1280,0,0,0,0,160};
    drawpoly(5,sky);
    floodfill(10,10,CYAN);

//hut wall(left)
    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(470,380,590,535);
    floodfill(472,382,LIGHTRED);

//hut wall(right)
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    rectangle(590,380,810,535);
    floodfill(597,382,RED);

//hut door
    setcolor(YELLOW);
    setfillstyle(CLOSE_DOT_FILL,YELLOW);
    rectangle(490,445,570,535);
    floodfill(492,447,YELLOW);

//hut top
    int top[] = {470,380,530,285,590,380,470,380};
    setcolor(MAGENTA);
    setfillstyle(SOLID_FILL,MAGENTA);
    drawpoly(4,top);
    floodfill(530,375,MAGENTA);

//hut top_circle
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL ,YELLOW);
    circle(530,355,20);
    floodfill(530,355,YELLOW);

//hut shed
    int shed[] = {530,285,590,380,810,380,750,285,530,285};
    setcolor(LIGHTMAGENTA);
    setfillstyle(XHATCH_FILL,LIGHTMAGENTA);
    drawpoly(5,shed);
    floodfill(537,295,LIGHTMAGENTA);

// hut doorknob
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    circle(550,490,10);
    floodfill(550,490,DARKGRAY);

//hut window
    setcolor(MAGENTA);
    setfillstyle(XHATCH_FILL,MAGENTA);
    rectangle(660,430,740,480);
    floodfill(662,435,MAGENTA);

//hut path
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    arc(450,535,-90,0,40);
    arc(450,535,-60,0,120);
    line(490,535,570,535);
    line(450,575,512,637);
    floodfill(492,537,LIGHTGRAY);

//mountains
    int i=0;
    while(i<=1024)
    {

        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        int mountains[]= {i,160,i+128,40,i+256,160,i,160};
        drawpoly(4,mountains);
        floodfill(i+128,100,BROWN);

        i+=256;
    }

//sun
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    pieslice(768,160,42,137,100);
    floodfill(768,150,YELLOW);

//bird
    setcolor(BLACK);
    arc(241,90,0,120,15);
    arc(271,90,60,180,15);
    arc(270,60,0,120,15);
    arc(300,60,60,180,15);

//grass
    setcolor(GREEN);

    int j = 0;
    while(j<=1230)
    {
        if(j>150 && j<=240)
        {
            j+=30;
            continue;
        }
        else if(j<1080 && j>=990)
        {
            j+=30;
            continue;
        }
        else if(j>=390 && j<=530)
        {
            j+=30;
            continue;
        }
        ellipse(j,660,0,50,30,50);
        ellipse(j,660,0,60,29,40);
        ellipse(j,660,0,70,28,30);
        ellipse(j+60,660,130,180,30,50);
        ellipse(j+60,660,120,180,29,40);
        ellipse(j+60,660,110,180,28,30);

        j+=30;

    }

//flowers
    i = 290;
    j = 30;
    while(j<=1240)
    {

        while(i<610)
            {
                setcolor(LIGHTRED);
                ellipse(j,i,0,360,20,10);
                ellipse(j,i,0,360,10,20);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(j,i,LIGHTRED);
                setfillstyle(SOLID_FILL,LIGHTRED);
                floodfill(j-15,i,LIGHTRED);
                floodfill(j+15,i,LIGHTRED);
                floodfill(j,i-15,LIGHTRED);
                floodfill(j,i+15,LIGHTRED);

                i+=60;
            }
        j+=1210;
        i = 350;
    }

//tree 1 trunk
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(925,590,-60,40,100);//trunk curve
    arc(1165,590,140,240,100);//trunk curve
    arc(1000,500,90,320,40);//tree curve to close the trunk
    arc(1085,500,-120,110,40);//tree curve to close the trunk
    line(0,660,1150,660);//bottom line
    line(1000,500,1045,570);//left v
    line(1045,570,1085,500);//right v
    floodfill(1045,590,BROWN);

//tree 1 curves
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    arc(1000,500,90,320,40);
    arc(1000,430,50,290,40);
    arc(1085,430,-90,120,40);
    arc(1085,500,-120,110,40);
    arc(1045,400,-15,195,40);
    line(1000,500,1045,570);//left v
    line(1045,570,1085,500);// right v
    floodfill(1045,500,GREEN);

//tree 2 trunk
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(125,590,-60,40,100);//trunk curve
    arc(365,590,140,240,100);//trunk curve
    arc(200,500,90,320,40);//tree curve to close the trunk
    arc(285,500,-120,110,40);//tree curve to close the trunk
    line(0,660,350,660);//bottom line
    line(200,500,245,570);//left v
    line(245,570,285,500);//right v
    floodfill(245,590,BROWN);

//tree 2 curves
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    arc(200,500,90,320,40);
    arc(200,430,50,290,40);
    arc(285,430,-90,120,40);
    arc(285,500,-120,110,40);
    arc(245,400,-15,195,40);
    line(200,500,245,570);//left v
    line(245,570,285,500);//right v
    floodfill(245,500,GREEN);

//nameplate
    outtextxy(500,400,"MANSI'S");
    outtextxy(500,410,"MANSION");

//left cloud
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(532,50,10,170,30,30);
    ellipse(492,50,10,170,30,30);
    ellipse(532,70,190,350,30,30);
    ellipse(492,70,190,350,30,30);
    ellipse(542,60,280,80,40,25);
    ellipse(482,60,100,260,40,25);
    floodfill(512,60,WHITE);

//right cloud
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(1042,50,0,180,30,30);
    ellipse(1004,50,10,170,30,30);
    ellipse(1042,70,190,350,30,30);
    ellipse(1004,70,190,350,30,30);
    ellipse(1052,60,280,80,40,25);
    ellipse(994,60,100,260,40,25);
    floodfill(1024,60,WHITE);

    getch();
    closegraph();
    }
