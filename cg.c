#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i;

//a,b,c,d are used for Translation
int a=200, b=-190;
int c=200, d=-190;

//k,l,m,n are used for Scaling.

float k=0.5, l=0.5;
float m=0.5, n=0.5;
//rain coordinates//
int x,y,j;
initgraph(&gd,&gm,"C:\\TC\\BGI");             //Write the Path of BGI Folder
for(i=0;i<=500;i++)
{
// 3 CLOUDS
//MIDDLE CLOUD

ellipse(200,30,60,240,10,15);
ellipse(225,20,345,165,20,15);
ellipse(262,27,340,160,20,15);
ellipse(268,42,230,50,20,10);
ellipse(226,46,163,340,31,15);
ellipse(300,21,20,182,21,19);
ellipse(325,31,290,100,21,15);
ellipse(299,45,228,20,33,11);

//LEFT CLOUD

ellipse(40,30,60,240,10,15);
ellipse(65,20,345,165,20,15);
ellipse(105,27,340,160,20,15);
ellipse(109,42,230,50,20,10);
ellipse(66,46,163,340,31,17);

//RIGHT CLOUD
ellipse(450,30,60,240,10,15);
ellipse(475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse(518,42,230,50,20,10);
ellipse(476,46,163,340,31,15);

// 3 TREES
// 1ST TREE


line(240,420,275,420);
line(240,420,245,405);
line(275,420,270,405);
line(245,405,240,405);
line(270,405,275,405);
line(240,405,245,390);
line(275,405,270,390);
line(245,390,240,390);
line(270,390,275,390);
line(240,390,258,370);
line(275,390,257,370);

//TREE 1 TRUNK

line(250,460,250,420);
line(265,460,265,420);
line(250,460,265,460);
line(250,420,265,420);

// 2ND TREE

// THIS TREE IS TRANSLATION (TRANSFORMATION) OF 1ST TREE.



line(240+c,420+d,275+c,420+d);
line(240+c,420+d,245+c,405+d);
line(275+c,420+d,270+c,405+d);
line(245+c,405+d,240+c,405+d);
line(270+c,405+d,275+c,405+d);
line(240+c,405+d,245+c,390+d);
line(275+c,405+d,270+c,390+d);
line(245+c,390+d,240+c,390+d);
line(270+c,390+d,275+c,390+d);
line(240+c,390+d,258+c,370+d);
line(275+c,390+d,257+c,370+d);

//TREE 2 TRUNK
line(250+c,460+d,250+c,420+d);
line(265+c,460+d,265+c,420+d);
line(250+c,460+d,265+c,460+d);
line(250+c,420+d,265+c,420+d);

// 3RD TREE

// THIS TREE IS SCALING (TRANSFORMATION) OF 1ST TREE.

//TREE 3 CROWN
line(240*m,420*n,275*m,420*n);
line(240*m,420*n,245*m,405*n);
line(275*m,420*n,270*m,405*n);
line(245*m,405*n,240*m,405*n);
line(270*m,405*n,275*m,405*n);
line(240*m,405*n,245*m,390*n);
line(275*m,405*n,270*m,390*n);
line(245*m,390*n,240*m,390*n);
line(270*m,390*n,275*m,390*n);
line(240*m,390*n,258*m,370*n);
line(275*m,390*n,257*m,370*n);

//TREE 3 TRUNK
line(250*m,460*n,250*m,420*n);
line(265*m,460*n,265*m,420*n);
line(250*m,460*n,265*m,460*n);
line(250*m,420*n,265*m,420*n);

// 3 HOUSES
// 1ST HOUSE

//TRIANGLE OF HOUSE 1
line(88,400,163,400);
line(100,370,88,400);
line(100,370,112,400);
line(100,370,150,370);
line(150,370,163,400);
line(88,400,163,400);
line(100,370,112,400);
line(100,370,112,400);
line(100,370,150,370);
line(150,370,163,400);


line(112,400,112,440);
line(88,440,112,440);
line(88,400,88,440);
line(112,440,163,440);


line(163,400,163,440);
line(112,440,163,440);
line(112,400,112,440);
line(88,400,163,400);

//1ST HOUSE DOOR
line(94,440,94,420);
line(106,440,106,420);
line(94,420,106,420);

// 2ND HOUSE

//THIS HOUSE IS TRANSLATION (TRANSFORMATION) OF 1ST TREE.

//TRIANGLE OF HOUSE 2
line(88+a,400+b,163+a,400+b);
line(100+a,370+b,88+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,150+a,370+b);
line(150+a,370+b,163+a,400+b);

line(88+a,400+b,163+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,112+a,400+b);
line(100+a,370+b,150+a,370+b);
line(150+a,370+b,163+a,400+b);


line(112+a,400+b,112+a,440+b);
line(88+a,440+b,112+a,440+b);
line(88+a,400+b,88+a,440+b);
line(112+a,440+b,163+a,440+b);


line(163+a,400+b,163+a,440+b);
line(112+a,440+b,163+a,440+b);
line(112+a,400+b,112+a,440+b);
line(88+a,400+b,163+a,400+b);

//2ND HOUSE DOOR
line(94+a,440+b,94+a,420+b);
line(106+a,440+b,106+a,420+b);
line(94+a,420+b,106+a,420+b);

// 3RD HOUSE

/* THIS HOUSE IS SCALING (TRANSFORMATION) OF 1ST TREE. */

//TRIANGLE OF HOUSE 3
line(88*k,400*l,163*k,400*l);
line(100*k,370*l,88*k,400*l);
line(100*k,370*l,112*k,400*l);
line(100*k,370*l,150*k,370*l);
line(150*k,370*l,163*k,400*l);


line(88*k,400*l,163*k,400*l);
line(100*k,370*l,112*k,400*l);
line(100*k,370*l,112*k,400*l);
line(100*k,370*l,150*k,370*l);
line(150*k,370*l,163*k,400*l);

line(112*k,400*l,112*k,440*l);
line(88*k,440*l,112*k,440*l);
line(88*k,400*l,88*k,440*l);
line(112*k,440*l,163*k,440*l);

line(163*k,400*l,163*k,440*l);
line(112*k,440*l,163*k,440*l);
line(112*k,400*l,112*k,440*l);
line(88*k,400*l,163*k,400*l);

//3RD HOUSE DOOR

line(94*k,440*l,94*k,420*l);
line(106*k,440*l,106*k,420*l);
line(94*k,420*l,106*k,420*l);

//MOUNTAIN

//1ST TRIANGLE
setcolor(WHITE);  //BOUNDARY COLOR OF MOUNTAIN
line(0,150,100,75);
line(100,75,200,150);

//2ND TRIANGLE
setcolor(WHITE);

line(175,131,275,75);
line(275,75,375,150);

//3RD TRIANGLE
setcolor(WHITE);

line(350,131,450,75);
line(450,75,550,150);

//4TH TRIANGLE
setcolor(WHITE);
line(525,131,600,75);
line(600,75,750,180);

line(0,150,750,150);

// SUN
setcolor(WHITE);

arc(178,112,0,180,30);

//ROAD
setcolor(WHITE);
line(0,322,700,322);

//CAR BODY
setcolor(WHITE);
line(0+i,300,13+i,298);
line(13+i,298,30+i,280);
line(30+i,280,80+i,280);
line(80+i,280,97+i,298);
line(97+i,298,120+i,300);
line(0+i,300,0+i,315);
line(0+i,315,25+i,315);
arc(35+i,315,0,180,9);
line(45+i,315,67+i,315);
arc(77+i,315,0,180,9);
line(85+i,315,120+i,315);
line(120+i,300,120+i,315);

//FIRST WINDOW
setcolor(WHITE);

line(32+i,285,50+i,285);
line(50+i,285,50+i,295);
line(50+i,295,23+i,295);
line(32+i,285,23+i,295);

//SECOND WINDOW
setcolor(WHITE);

line(60+i,285,78+i,285);
line(60+i,285,60+i,295);
line(60+i,295,85+i,295);
line(78+i,285,85+i,295);

//WHEELS
//LEFT WHEELS
setcolor(WHITE);
circle(35+i,315,6);

//RIGHT WHEELS
setcolor(WHITE);

circle(77+i,315,6);
delay(5);
cleardevice();
//rain//
x=getmaxx();
y=getmaxy();
for(j=0;j<100;j++)
{
outtextxy(rand(x)%2000,rand(y)%2000,"|");
}
}
getch();
closegraph();
}
