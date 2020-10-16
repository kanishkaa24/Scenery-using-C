#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
    int gd = DETECT, gm ;
    initgraph(&gd, &gm, " ");

    // GROUND START

    // FLOOR
    setcolor(BROWN);
    line(0,450,900,0);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    floodfill(600,300,BROWN);

    // WATER BODY
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    arc(0,710,0,50,1000);
    line(0,450,900,0);
    line(1000,710,1500,710);
    arc(1200,-100,230,330,350);
    line(990,180,810,43);
    floodfill(1100,650,BLUE);


    // TREES
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(700,500,330,30,100);
    arc(920,500,150,210,100);
    line(785,550,835,549);
    line(785,450,835,449);
    floodfill(810,500,BROWN);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(810,440,25);
    floodfill(810,440,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(790,460,25);
    floodfill(790,460,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(830,460,25);
    floodfill(830,460,GREEN);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(610,290,330,30,100);
    arc(830,290,150,210,100);
    line(695,340,745,339);
    line(695,240,745,239);
    floodfill(720,290,BROWN);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(720,230,25);
    floodfill(720,230,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(700,250,25);
    floodfill(700,250,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(740,250,25);
    floodfill(740,250,GREEN);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(1050,90,330,30,100);
    arc(1270,90,150,210,100);
    line(1135,140,1185,139);
    line(1135,40,1185,39);
    floodfill(1160,90,BROWN);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(1160,30,25);
    floodfill(1160,30,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(1140,50,25);
    floodfill(1140,50,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(1180,50,25);
    floodfill(1180,50,GREEN);

    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(860,90,330,30,100);
    arc(1080,90,150,210,100);
    line(945,140,995,139);
    line(945,40,995,39);
    floodfill(970,90,BROWN);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(970,30,25);
    floodfill(970,30,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(950,50,25);
    floodfill(950,50,GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(990,50,25);
    floodfill(990,50,GREEN);

    // GRASS
    for(int i = 0; i <= 180; i = i + 20)
    {
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(0,710,1000,710);
        line(i,710,i+10,685);
        line(i+10,685,i+20,710);
        floodfill(i+5,700,GREEN);
    }

    for(int i = 700; i <= 980; i = i + 20)
    {
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        line(0,710,1000,710);
        line(i,710,i+10,685);
        line(i+10,685,i+20,710);
        floodfill(i+5,700,GREEN);
    }

    // BOAT
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    line(920,565,950,620);
    line(950,620,1050,620);
    line(1050,620,1080,565);
    line(1080,565,920,565);
    floodfill(1000,600,BROWN);

    // GROUND END;

    // SKY START
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(0,450,900,0);
    floodfill(10,10,BROWN);

    // CLOUDS
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(532,50,10,170,30,30);
    ellipse(492,50,10,170,30,30);
    ellipse(532,70,190,350,30,30);
    ellipse(492,70,190,350,30,30);
    ellipse(542,60,280,80,40,25);
    ellipse(482,60,100,260,40,25);
    floodfill(512,60,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(200,50,0,180,30,30);
    ellipse(162,50,10,170,30,30);
    ellipse(200,70,190,350,30,30);
    ellipse(162,70,190,350,30,30);
    ellipse(210,60,280,80,40,25);
    ellipse(152,60,100,260,40,25);
    floodfill(182,60,WHITE);

    // SUN
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    line(50,250,200,350);
    line(160,350,200,150);
    arc(180,330,75,180,110);
    floodfill(150,270,YELLOW);
    setcolor(RED);
    line(40,200,80,240);
    line(150,210,150,160);
    line(120,220,90,170);

    // BIRDS
    setcolor(BLACK);
    arc(35,110,0,60,25);
    arc(85,110,120,180,25);
    arc(0,50,0,60,25);
    arc(50,50,120,180,25);
    arc(265,200,0,60,25);
    arc(315,200,120,180,25);
    arc(365,100,0,60,25);
    arc(415,100,120,180,25);
    arc(265,80,0,60,25);
    arc(315,80,120,180,25);

    // MOUNTAINS
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    line(0,450,900,0);
    line(0,450,50,250);
    line(50,250,200,350);
    line(160,350,200,150);
    line(200,150,335,285);
    line(320,270,340,150);
    line(340,150,448,228);
    line(448,228,498,80);
    line(498,80,600,150);
    line(600,150,670,5);
    line(670,5,750,75);
    line(750,75,800,-1);
    floodfill(520,150,BROWN);
    floodfill(650,100,BROWN);
    floodfill(800,10,BROWN);
    floodfill(50,280,BROWN);
    floodfill(250,250,BROWN);
    floodfill(380,230,BROWN);

    // SKY END;

    // HUT START

    // FRONT SIDE
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    line(275,400,200,475);
    line(275,400,350,475);
    line(200,475,200,720);
    line(350,475,350,720);
    line(200,710,350,710);
    floodfill(300,500,RED);

    // SIDE VIEW
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    line(700,475,700,710);
    line(350,475,700,475);
    line(350,710,700,710);
    line(350,475,350,720);
    floodfill(400,600,RED);

    // TERRACE VIEW
    setcolor(BROWN);
    setfillstyle(HATCH_FILL,BROWN);
    line(275,400,350,475);
    line(350,475,700,475);
    line(275,400,625,400);
    line(625,400,700,475);
    line(350,475,350,720);
    floodfill(400,450,BROWN);

    // WINDOWS
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW );
    rectangle(400,550,500,650);
    rectangle(550,550,650,650);
    floodfill(450,600,YELLOW);
    floodfill(600,600,YELLOW);
    setcolor(RED);
    line(400,600,650,600);
    line(450,550,450,650);
    line(600,550,600,650);

    // DOOR
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(230,580,320,710);
    floodfill(250,650,YELLOW);

    // HUT END;

    getch();
    closegraph();
    return 0;
}


