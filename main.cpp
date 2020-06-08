#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>



int change_frame=1;
int Frame_3_wait_time=0;
int Frame_4_wait_time=0;
int Frame_5_wait_time=0;
int Frame_6_wait_time=0;

static GLfloat spin1_frame1 = 0.0;
static GLfloat spin1_frame2 = 0.0;
static GLfloat spinl_frame3 = 0.0;
static GLfloat spinr_frame3 = 0.0;
static GLfloat spinl_frame4 = 0.0;
static GLfloat spinr_frame4 = 0.0;
static GLfloat spinl_frame5 = 0.0;
static GLfloat spinr_frame5 = 0.0;
static GLfloat spinl_frame6 = 0.0;
static GLfloat spinr_frame6 = 0.0;



int w=1366,h=768;

int flag_frame1=0;
int flag_frame3=0;
int flag_frame4=0;
int flag_frame5=0;
int flag_frame6=0;



float iter_frame1=0;
float iter_frame2=2000.0;
float iter1_frame3=2000.0;
float iter2_frame3=-2000.0;
float iter3_frame3=00.0;
float time_frame3=.1;
float iter1_frame4=2000.0;
float iter2_frame4=-2000.0;
float iter3_frame4=00.0;
float time_frame5 =.1;
float time1_frame5 =.1;
float iter1_frame5=2000.0;
float iter2_frame5=-2000.0;
float iter3_frame5=00.0;
float time_frame6 =.1;
float time1_frame6 =.1;
float iter1_frame6=2000.0;
float iter2_frame6=00.0;
float iter3_frame6=00.0;





void init()
{//           R    G     B      A
glClearColor(0.5f, 0.9f, 1.0f, 1.0f);
glOrtho(-w,w,-h,h,-1000,1000);
}

void init1()
{//           R    G     B      A
glClearColor(0.9f, 0.7f, 1.3f, 1.0f);
glOrtho(-w,w,-h,h,-1000,1000);

}
void init2()
{//           R    G     B      A
glClearColor(0.9f, 0.7f, 0.3f, 1.0f);
glOrtho(-w,w,-h,h,-1000,1000);


}

void init5()
{//           R    G     B      A
glClearColor(0.9f, 0.7f, 0.3f, 1.0f);
glOrtho(-w,w,-h,h,-1000,1000);

}

void init6()
{//           R    G     B      A
glClearColor(0.9f, 0.7f, 0.3f, 1.0f);
glOrtho(-w,w,-h,h,-1000,1000);

}

void spinDisplay_left_FRAME1(void){
   spin1_frame1 = spin1_frame1 + 1;

   glutPostRedisplay();
}

void spinDisplay_left_FRAME2(void){

   spin1_frame2 = spin1_frame2 + .5;

   glutPostRedisplay();
}
void spinDisplay_left_FRAME3(void)
{
   spinl_frame3 = spinl_frame3 + .5;

   glutPostRedisplay();
}
void spinDisplay_right_FRAME3(void)
{
   spinr_frame3 = spinr_frame3 - .5;

   glutPostRedisplay();
}
void spinDisplay_left_FRAME4(void)
{
   spinl_frame4 = spinl_frame4 + .5;

   glutPostRedisplay();
}
void spinDisplay_right_FRAME4(void)
{
   spinr_frame4 = spinr_frame4 - .3;

   glutPostRedisplay();
}
void spinDisplay_left_FRAME5(void)
{
   spinl_frame5 = spinl_frame5 + .3;

   glutPostRedisplay();
}

void spinDisplay_right_FRAME5(void)
{
   spinr_frame5 = spinr_frame5 - .3;

   glutPostRedisplay();
}
void spinDisplay_left_FRAME6(void)
{
   spinl_frame6 = spinl_frame6 + .3;

   glutPostRedisplay();
}
void spinDisplay_right_FRAME6(void)
{
   spinr_frame6 = spinr_frame6 - .3;

   glutPostRedisplay();
}


void DrawCircle(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void DrawHalfCircle(float cx, float cy, float rx,float ry, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for(int ii = 0; ii < num_segments; ii++)
	{
		float theta = 1.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = rx * cosf(theta);//calculate the x component
		float y = ry * sinf(theta);//calculate the y component

		glVertex2f(x + cx, -y + cy);//output vertex

	}
	glEnd();
}



void rinser()
{
    glPushMatrix();

float offset = 16*sin(3.0f * 3.14159265359f * time_frame3);

glTranslatef(-40 + offset,0,0);
glColor3f(0.3f, 0.3f, 0.3f);
glBegin(GL_QUADS);
 glVertex3d(-1200.0,500.0,0.0);
    glVertex3d(-1200.0,100.0,0.0);
    glVertex3d(-1400.0,100.0,0.0);
    glVertex3f(-1400.0,500.0,0.0);
glEnd();
glTranslatef(40,0,0);
time_frame3=time_frame3+.01;

glPopMatrix();


}



void rinser2()
{
 glPushMatrix();
float offset = 16*sin(2.0f * 3.14159265359f * time_frame3);


glTranslatef(-10 + offset,0,0);

glColor3f(0.4f, 0.4f, 0.4f);
glBegin(GL_QUADS);
 glVertex3d(-1100.0,300.0,0.0);
    glVertex3d(-1100.0,100.0,0.0);
    glVertex3d(-1400.0,100.0,0.0);
    glVertex3f(-1400.0,300.0,0.0);
glEnd();

glTranslatef(100,0,0);
time_frame3=time_frame3+.01;

glPopMatrix();

}

void TEXTmake(int x, int y, float r, float g, float b, char* string)
{
  glColor3f( r, g, b );
  glRasterPos2f(x, y);
  int len, i;
  len = (int)strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
  }
}


/////////////////////////////////////Frame1/////////////////////////////

void myDisplay1()
{
    if(iter_frame1>-900)
     iter_frame1=iter_frame1-0.9;
     else{
        change_frame=2;
     }
     glutPostRedisplay();
glClear(GL_COLOR_BUFFER_BIT);


glColor3f(0.2f,.8f,0.2f);
glBegin(GL_QUADS);//ground
    glVertex3d(1400.0,150.0,0.0);
    glVertex3d(1400.0,-1000.0,0.0);
    glVertex3d(-1400.0,-1000.0,0.0);
    glVertex3f(-1400.0,150.0,0.0);
glEnd();



////// sacks//////
glPushMatrix();
glTranslatef(250,300,0);
glScalef(2.0,2.0,0);
glColor3f(1.0,0.9,0.1);
DrawCircle(-420,-230,28,30,40);
glColor3f(0.9,0.8,0);
DrawCircle(-420,-210,28,17,40);
glColor3f(.4,0.2,0.1);
DrawCircle(-420,-210,26,12,5);

glColor3f(1.0,0.9,0.1);
DrawCircle(-450,-250,28,30,40);
glColor3f(0.9,0.8,0);
DrawCircle(-450,-230,28,17,40);
glColor3f(.4,0.2,0.1);
DrawCircle(-450,-230,26,12,7);

glColor3f(1.0,0.9,0.1);
DrawCircle(-390,-250,28,30,40);
glColor3f(0.9,0.8,0);
DrawCircle(-390,-230,28,17,40);
glColor3f(.4,0.2,0.1);
DrawCircle(-390,-230,26,12,6);

glPopMatrix();

/////////////////





///////////HILLS////////////
glColor3f(0.5f, 0.9f, 1.0f);
DrawCircle(-1200,160,200,200,900);
DrawCircle(-400,160,200,200,900);
DrawCircle(400,160,200,200,900);
DrawCircle(1200,160,200,200,900);

glColor3f(0.2f,.8f,0.2f);
DrawCircle(-800,160,200,200,900);
DrawCircle(0,160,200,200,900);
DrawCircle(800,160,200,200,900);
////////HILLS//////////////



/////////TREES/////////

for (int i=0 ; i<11; i++){
        int j;
        if(i%2==1)
        {
             j= -300;
        }
        else{
            j=0;
        }
int x=i*150;


glColor3f(0.6f,0.3f,0.1f);
 glBegin(GL_TRIANGLES);//tree log
    glVertex3f(-350+x,0.0+j,0.0);//center
    glVertex3f(-320+x,-200+j,0.0);//left
    glVertex3f(-380+x,-200+j,0.0);//right

glEnd();

glColor3f(0.1f,.7f,0.2f);//leaves
DrawCircle(-350+x,00+j,50,50,100);
DrawCircle(-290+x,30+j,50,50,100);
DrawCircle(-410+x,30+j,50,50,1000);
DrawCircle(-340+x,50+j,50,50,100);

}

/////////////TREES/////////


/////////////FENCE/////////
glColor3f(0.5f,0.3f,0.1f);

glBegin(GL_QUADS);//ground
    glVertex3d(1400.0,-400.0,0.0);
    glVertex3d(1400.0,-410.0,0.0);
    glVertex3d(-500.0,-410.0,0.0);
    glVertex3f(-500.0,-400.0,0.0);
glEnd();

glBegin(GL_QUADS);
    glVertex3d(1400.0,-470.0,0.0);
    glVertex3d(1400.0,-480.0,0.0);
    glVertex3d(-500.0,-470.0,0.0);
    glVertex3f(-500.0,-480.0,0.0);
glEnd();


for (int i =0 ; i<20; i++)
{

int x=i*100;
glBegin(GL_QUADS);
    glVertex3d(-510.0+x,-400.0,0.0);
    glVertex3d(-510.0+x,-550.0,0.0);
    glVertex3d(-500.0+x,-550.0,0.0);
    glVertex3f(-500.0+x,-400.0,0.0);
glEnd();

}
/////////////FENCE/////////





//////////TRUCK/////////

glColor3f(0.8f,0.0f,0.0f);
glBegin(GL_QUADS);//container
    glVertex3d(iter_frame1-500.0,0.0,0.0);
    glVertex3d(iter_frame1-500.0,-240.0,0.0);
    glVertex3d(iter_frame1-850.0,-240.0,0.0);
    glVertex3f(iter_frame1-850.0,0.0,0.0);
glEnd();
glColor3f(0.6f,0.3f,0.4f);
glBegin(GL_QUADS);//hood
    glVertex3d(iter_frame1-870.0,-50.0,0.0);
    glVertex3d(iter_frame1-870.0,-240.0,0.0);
    glVertex3d(iter_frame1-1100.0,-240.0,0.0);
    glVertex3f(iter_frame1-990.0,-50.0,0.0);
glEnd();
glBegin(GL_QUADS);//ENGINE
    glVertex3d(iter_frame1-870.0,-130.0,0.0);
    glVertex3d(iter_frame1-870.0,-240.0,0.0);
    glVertex3d(iter_frame1-1100.0,-240.0,0.0);
    glVertex3f(iter_frame1-1100.0,-130.0,0.0);
glEnd();

glBegin(GL_QUADS);//SLIDER
    glVertex3d(iter_frame1-500.0,-240.0,0.0);
    glVertex3d(iter_frame1-500.0,-260.0,0.0);
    glVertex3d(iter_frame1-1100.0,-260.0,0.0);
    glVertex3f(iter_frame1-1100.0,-240.0,0.0);
glEnd();
glColor3f(0.8f,1.0f,1.f);
glBegin(GL_QUADS);//WINDOW
     glVertex3d(iter_frame1-880.0,-60.0,0.0);
    glVertex3d(iter_frame1-880.0,-135.0,0.0);
    glVertex3d(iter_frame1-1020.0,-135.0,0.0);
    glVertex3f(iter_frame1-980.0,-60.0,0.0);
glEnd();


/****wheels**/
glColor3f(0.1f, 0.1f, 0.1f);//tire
DrawCircle(iter_frame1-1000,-250,50,50,900);
DrawCircle(iter_frame1-600,-250,50,50,900);
DrawCircle(iter_frame1-700,-250,50,50,900);

glColor3f(0.5f, 0.5f, 0.5f);//inside tire
DrawCircle(iter_frame1-1000,-250,30,30,900);
DrawCircle(iter_frame1-600,-250,30,30,900);
DrawCircle(iter_frame1-700,-250,30,30,900);


///car wheel rim 1
	glPushMatrix();
	glTranslatef(iter_frame1-1000,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame1, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();
	glPushMatrix();

///car wheel rim 2
	glTranslatef(iter_frame1-700,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame1, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();	glPushMatrix();

///car wheel rim 3
	glTranslatef(iter_frame1-600,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame1, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();



spinDisplay_left_FRAME1();

/***wheels***/
///////////////////////
TEXTmake(-800,500,0,0,.4,"FRESHLY PICKED COCOA BEANS FROM THE ORCHARD ARE LOADED FOR " );
TEXTmake(-800,450,0,0,.4,"TRANSPORT TO THE CHOCOLATE FACTORY ");
glFlush();

if(flag_frame1==0)
{
    Sleep(2000);
    flag_frame1=1;
}

 if(iter_frame1>-900){}
     else{
        change_frame=2;
             glutPostRedisplay();
     }
}


/////////////////////////////////////Frame2/////////////////////////////


void myDisplay2()
{

glClear(GL_COLOR_BUFFER_BIT);


glColor3f(0.2f,.8f,0.2f);
glBegin(GL_QUADS);//GROUND
    glVertex3d(1400.0,150.0,0.0);
    glVertex3d(1400.0,-1000.0,0.0);
    glVertex3d(-1400.0,-1000.0,0.0);
    glVertex3f(-1400.0,150.0,0.0);
glEnd();



///////////////Factory///////////
glColor3f(1.2f,.8f,0.2f);
glBegin(GL_QUADS);//BUILDING 1
    glVertex3d(500.0,450.0,0.0);
    glVertex3d(500.0,00.0,0.0);
    glVertex3d(-300.0,00.0,0.0);
    glVertex3f(-300.0,450.0,0.0);
glEnd();
glColor3f(1.0f,.5f,0.3f);
glBegin(GL_QUADS);//BUILDING 1 roof
    glVertex3d(480.0,550.0,0.0);
    glVertex3d(500.0,450.0,0.0);
    glVertex3d(-300.0,450.0,0.0);
    glVertex3f(-280.0,550.0,0.0);
glEnd();




glPushMatrix();
glTranslatef(-950.0,0.0,0.0);
glColor3f(1.0f,.5f,0.4f);
glBegin(GL_QUADS);//BUILDING 2
    glVertex3d(500.0,450.0,0.0);
    glVertex3d(500.0,00.0,0.0);
    glVertex3d(-250.0,00.0,0.0);
    glVertex3f(-250.0,450.0,0.0);
glEnd();
glColor3f(1.0f,.6f,0.3f);
glBegin(GL_QUADS);//BUILDING 2 roof
    glVertex3d(480.0,550.0,0.0);
    glVertex3d(500.0,450.0,0.0);
    glVertex3d(-250.0,450.0,0.0);
    glVertex3f(-220.0,550.0,0.0);
glEnd();

glPopMatrix();

glPushMatrix();
glTranslatef(-1300.0,0.0,0.0);
glColor3f(1.0f,.7f,0.4f);
glBegin(GL_QUADS);//BUILDING 3
    glVertex3d(500.0,500.0,0.0);
    glVertex3d(500.0,00.0,0.0);
    glVertex3d(-250.0,00.0,0.0);
    glVertex3f(-250.0,500.0,0.0);
glEnd();
glColor3f(1.0f,.5f,0.3f);
glBegin(GL_QUADS);//BUILDING 3 roof
    glVertex3d(480.0,600.0,0.0);
    glVertex3d(500.0,500.0,0.0);
    glVertex3d(-250.0,500.0,0.0);
    glVertex3f(-220.0,600.0,0.0);
glEnd();

glPopMatrix();


glColor3f(0.4f,0.5f,0.4f);
glBegin(GL_QUADS);//Tube
    glVertex3d(-320.0,430.0,0.0);
    glVertex3d(-320.0,100.0,0.0);
    glVertex3d(-500.0,100.0,0.0);
    glVertex3f(-500.0,430.0,0.0);
glEnd();
glBegin(GL_QUADS);//Tube stand
    glVertex3d(-380.0,430.0,0.0);
    glVertex3d(-380.0,0.0,0.0);
    glVertex3d(-440.0,0.0,0.0);
    glVertex3f(-440.0,430.0,0.0);
glEnd();
glBegin(GL_QUADS);//Tube pipe
    glVertex3d(-400.0,430.0,0.0);
    glVertex3d(-580.0,0.0,0.0);
    glVertex3d(-600.0,0.0,0.0);
    glVertex3f(-430.0,430.0,0.0);
glEnd();
glColor3f(0.2f,.2f,0.2f);
glBegin(GL_TRIANGLES);//Tube roof
    glVertex3d(-320.0,430.0,0.0);
    glVertex3f(-500.0,430.0,0.0);
    glVertex3d(-410.0,480.0,0.0);

glEnd();

///////////////FACTORY///////////

TEXTmake(0, 200, 0.0, 0.0, 0.0, "LOADING BAY");

//////////truck///////////////////////////
if(iter_frame2>=-900.0)
iter_frame2=iter_frame2-2;

 glutPostRedisplay();
glPushMatrix();
glScalef(.5, .5, 0.0);
glTranslatef(iter_frame2+2000,300,0);

glColor3f(0.8f,0.0f,0.0f);
glBegin(GL_QUADS);//container
    glVertex3d(-500.0,0.0,0.0);
    glVertex3d(-500.0,-240.0,0.0);
    glVertex3d(-850.0,-240.0,0.0);
    glVertex3f(-850.0,0.0,0.0);
glEnd();
glColor3f(0.6f,0.3f,0.4f);
glBegin(GL_QUADS);//hood
    glVertex3d(-870.0,-50.0,0.0);
    glVertex3d(-870.0,-240.0,0.0);
    glVertex3d(-1100.0,-240.0,0.0);
    glVertex3f(-990.0,-50.0,0.0);
glEnd();
glBegin(GL_QUADS);//bonett
    glVertex3d(-870.0,-130.0,0.0);
    glVertex3d(-870.0,-240.0,0.0);
    glVertex3d(-1100.0,-240.0,0.0);
    glVertex3f(-1100.0,-130.0,0.0);
glEnd();

glBegin(GL_QUADS);//rim
    glVertex3d(-500.0,-240.0,0.0);
    glVertex3d(-500.0,-260.0,0.0);
    glVertex3d(-1100.0,-260.0,0.0);
    glVertex3f(-1100.0,-240.0,0.0);
glEnd();
glColor3f(0.8f,1.0f,1.f);
glBegin(GL_QUADS);//window
     glVertex3d(-880.0,-60.0,0.0);
    glVertex3d(-880.0,-135.0,0.0);
    glVertex3d(-1020.0,-135.0,0.0);
    glVertex3f(-980.0,-60.0,0.0);
glEnd();


/****wheels**/
glColor3f(0.1f, 0.1f, 0.1f);

DrawCircle(-1000,-250,50,50,900);
DrawCircle(-600,-250,50,50,900);
DrawCircle(-700,-250,50,50,900);


glColor3f(0.5f, 0.5f, 0.5f);

DrawCircle(-1000,-250,30,30,900);
DrawCircle(-600,-250,30,30,900);
DrawCircle(-700,-250,30,30,900);



glPushMatrix();

///car wheel rim 1

	glTranslatef(-1000,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame2, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();
	glPushMatrix();

///car wheel rim 2
	glTranslatef(-700,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame2, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();	glPushMatrix();

///car wheel rim 3
	glTranslatef(-600,-250,0);
	glColor3f(0.1f, 0.1f, 0.1f);
 glRotatef(spin1_frame2, 0.0, 0.0, 1.0);
	glRectf(-30.0, -5.0, 30.0, 5.0);
	glRectf(-5.0, -30.0, 5.0, 30.0);
glPopMatrix();

if(iter_frame2>=-900.0)
    spinDisplay_left_FRAME2();

/***wheels***/

///////////////////////
glPopMatrix();
glFlush();
if(iter_frame2>=-900.0){}
     else{
        change_frame=3;
             glutPostRedisplay();
             Sleep(2000);
     }
}



/////////////////////////////////////Frame3/////////////////////////////


void myDisplay3()
{

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.9f, 0.7f, 0.3f);
glBegin(GL_QUADS);  //BACKGROUND
    glVertex3d(2000.0,2000.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,2000.0,0.0);
glEnd();

glColor3f(0.9f, 0.5f, 0.3f);
glBegin(GL_QUADS);  //ground
    glVertex3d(2000.0,-100.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,-100.0,0.0);
glEnd();



if(iter2_frame3<=4000.0)
     iter2_frame3=iter2_frame3+0.6;

    glutPostRedisplay();
////////COCOBEANS/////
glPushMatrix();
glTranslatef(iter2_frame3+2000,0,0);
for(int i =0 ;i<500 ;i++){
        int x=i*40;
glColor3f(0.7f, 0.4f, 0.2f);
DrawCircle(-2000+x,10,10,10,200);
glColor3f(0.6f, 0.4f, 0.2f);
DrawCircle(-1990+x,20,10,10,200);
glColor3f(0.6f, 0.3f, 0.2f);
DrawCircle(-1980+x,10,10,10,200);}
glPopMatrix();
///////COCOBEANS/////

rinser();
rinser2();



glColor3f(0.9f, 0.7f, 0.3f);
glBegin(GL_QUADS);  //false yellow wall
    glVertex3d(2000.0,1000.0,0.0);
    glVertex3d(2000.0,00.0,0.0);
    glVertex3d(00.0,00.0,0.0);
    glVertex3f(00.0,1000.0,0.0);
glEnd();


////black machine//////

glColor3f(0.2f, 0.2f, 0.2f);//black slider
glBegin(GL_QUADS);
 glVertex3d(00.0,-10.0,0.0);
    glVertex3d(00.0,-100.0,0.0);
    glVertex3d(-1800.0,-100.0,0.0);
    glVertex3f(-1800.0,-10.0,0.0);
glEnd();

glColor3f(0.7f, 0.6f, 0.5f);//white belt
glBegin(GL_QUADS);
 glVertex3d(00.0,0.0,0.0);
    glVertex3d(00.0,-20.0,0.0);
    glVertex3d(-1200.0,-20.0,0.0);
    glVertex3f(-1200.0,-0.0,0.0);
glEnd();



glColor3f(0.2f, 0.2f, 0.2f);//machine body
glBegin(GL_POLYGON);
 glVertex3d(-1100.0,100.0,0.0);
 glVertex3d(-1000.0,00.0,0.0);
    glVertex3d(-1000.0,-200.0,0.0);
    glVertex3d(-1800.0,-200.0,0.0);
    glVertex3f(-1800.0,00.0,0.0);
    glVertex3f(-1800.0,100.0,0.0);

glEnd();




//BOLTS
for(int i=0 ; i<=10; i++){

glPushMatrix();
int x=i*400;
glScalef(0.2,0.2,0);
glTranslatef(-5000+x,-100,0);
glColor3f(0.3f, 0.3f, 0.3f);
DrawCircle(0,0,100,100,90);
glColor3f(1.0f, 1.0f, 1.0);
glRotatef(spinr_frame3, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRotatef(45, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRectf(-5.0, -100.0, 5.0, 100.0);
glRotatef(225, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);

glPopMatrix();}

if(iter1_frame3>=-900.0)
    spinDisplay_right_FRAME3();
glPopMatrix();
//BOLTS

////black   machine//////




/////////powder//////


if(iter3_frame3<=280.0)
     iter3_frame3=iter3_frame3+0.6;
     else
        iter3_frame3=00;

    glutPostRedisplay();
    glPushMatrix();
glTranslatef(0+iter3_frame3,0,0);
for(int i=0;i<20;i++){


        int x=i*60;

glColor3f(0.5f, 0.3f, 0.2f);
DrawCircle(0+x ,-20,50,50,100);
}
glPopMatrix();
/////////////////////powder






///right black machine//////////////

glPushMatrix();
glTranslatef(1000,0,0);


glColor3f(0.2f, 0.2f, 0.2f);//2nd black slider
glBegin(GL_QUADS);
 glVertex3d(00.0,-10.0,0.0);
    glVertex3d(00.0,-100.0,0.0);
    glVertex3d(-800.0,-100.0,0.0);
    glVertex3f(-800.0,-10.0,0.0);
glEnd();

glColor3f(0.7f, 0.6f, 0.5f);//2nd white slider
glBegin(GL_QUADS);
 glVertex3d(00.0,0.0,0.0);
    glVertex3d(00.0,-20.0,0.0);
    glVertex3d(-1200.0,-20.0,0.0);
    glVertex3f(-1200.0,-0.0,0.0);
glEnd();
glPopMatrix();



for(int i=0 ; i<=10; i++){

glPushMatrix();

        int x=i*400;
glScalef(0.2,0.2,0);
	glTranslatef(600+x,-100,0);
	glColor3f(0.3f, 0.3f, 0.3f);
DrawCircle(0,0,100,100,90);
	glColor3f(1.0f, 1.0f, 1.0);
 glRotatef(spinr_frame3, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);

glPopMatrix();}

glColor3f(0.8f, 0.8f, 0.8f);//body
        glBegin(GL_QUADS);
 glVertex3d(1500.0,100.0,0.0);
    glVertex3d(1500.0,400.0,0.0);
    glVertex3d(1100.0,400.0,0.0);
    glVertex3f(1100.0,100.0,0.0);
glEnd();



glPushMatrix();//piston 1
float offset1 = 16*sin(2.0f * 3.14159265359f * time_frame3);

glTranslatef(-0 ,0+offset1,0);
glColor3f(0.3f, 0.3f, 0.3f);//body
        glBegin(GL_QUADS);
 glVertex3d(1100.0,400.0,0.0);
    glVertex3d(1100.0,00.0,0.0);
    glVertex3d(1000.0,00.0,0.0);
    glVertex3f(1000.0,400.0,0.0);
glEnd();
glTranslatef(40,0,0);
time_frame3=time_frame3+.01;
glPopMatrix();



glPushMatrix();//piston 1
glTranslatef(150,0,0);
float offset2 = 16*sin(3.0f * 3.14159265359f * time_frame3);

glTranslatef(-0 ,0+offset2,0);
glColor3f(0.4f, 0.4f, 0.4f);//body
        glBegin(GL_QUADS);
 glVertex3d(1100.0,400.0,0.0);
    glVertex3d(1100.0,00.0,0.0);
    glVertex3d(1000.0,00.0,0.0);
    glVertex3f(1000.0,400.0,0.0);
glEnd();
glTranslatef(40,0,0);
time_frame3=time_frame3+.01;
glPopMatrix();





glColor3f(0.2f, 0.2f, 0.2f);//body
        glBegin(GL_QUADS);
 glVertex3d(1500.0,100.0,0.0);
    glVertex3d(1500.0,-100.0,0.0);
    glVertex3d(1000.0,-100.0,0.0);
    glVertex3f(1000.0,100.0,0.0);
glEnd();

 glColor3f(0.2f, 0.2f, 0.2f);//body base
        glBegin(GL_QUADS);
 glVertex3d(1500.0,-100.0,0.0);
    glVertex3d(1500.0,-200.0,0.0);
    glVertex3d(900.0,-200.0,0.0);
    glVertex3f(1000.0,-100.0,0.0);
glEnd();




/////////////////////right black machine




/////////roller
glPushMatrix();////body
glTranslatef(0,50,0);
glScalef(1.3, 1.3, 0.0);
glColor3f(0.5f, 0.3f, 0.3f);
glBegin(GL_POLYGON);
 glVertex3d(180.0,-50.0,0.0);
 glVertex3d(200.0,-100.0,0.0);
    glVertex3d(200.0,-200.0,0.0);
    glVertex3d(-200.0,-200.0,0.0);
    glVertex3f(-200.0,-100.0,0.0);
     glVertex3d(-180.0,-50.0,0.0);
glEnd();

DrawCircle(0,50,200,200,90);
glColor3f(0.7f, 0.6f, 0.5f);
DrawCircle(0,50,100,100,90);




glPushMatrix();///mixer

	glTranslatef(00,50,0);
	glColor3f(0.4f, 0.4f, 0.4);
 glRotatef(spinl_frame3, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();

if(iter1_frame3>=-900.0)
    spinDisplay_left_FRAME3();
glPopMatrix();

////roller //////




///QCHECKER//////
glColor3f(0.3f, 0.3f, 0.3);
glBegin(GL_QUADS);//smaller rig
 glVertex3d(-500.0,100.0,0.0);
    glVertex3d(-500.0,1000.0,0.0);
    glVertex3d(-900.0,1000.0,0.0);
    glVertex3f(-900.0,100.0,0.0);
glEnd();

glColor3f(0.4f, 0.4f, 0.4);//bigger rig
glBegin(GL_QUADS);
 glVertex3d(-400.0,500.0,0.0);
    glVertex3d(-400.0,1000.0,0.0);
    glVertex3d(-1000.0,1000.0,0.0);
    glVertex3f(-1000.0,500.0,0.0);
glEnd();

    glPushMatrix();
if((int)iter2_frame3 % 2==0){
    glColor3f(1.f, 0.0f, 0.0f);
    }
else{
    glColor3f(1.0f, 0.0f, 0.0f); //laser
glBegin(GL_QUADS);
 glVertex3d(-500.0,100.0,0.0);
    glVertex3d(-500.0,0.0,0.0);
    glVertex3d(-900.0,0.0,0.0);
    glVertex3f(-900.0,100.0,0.0);
glEnd();
    glColor3f(0.f, 1.0f, 0.0f);}

DrawCircle(-700,200,20,20,100);//light1


if((int)iter2_frame3 % 2!=0)
    glColor3f(1.f, 0.0f, 0.0f);
else
    glColor3f(0.f, 1.0f, 0.0f);

DrawCircle(-600,200,20,20,100);//light2
DrawCircle(-800,200,20,20,100);//light3
glPopMatrix();
///////////////

TEXTmake(-800,-450,0.2,0.2,0.2,"THE RINSER THAN GET RID OF THE HUSKS FROM THE BEANS AND AN AUTOMATED LASER CHECKER " );
TEXTmake(-800,-500,0.2,0.2,.2,"CHECKS FOR THE BEST PICKS.THAN THE BEANS ARE POUNDED TO POWDER BY ROLLERS");
TEXTmake(-800,-550,0.2,0.2,.2,"AND ADDITIONAL HYDROLIC PISTONS ");
glFlush();

}


/////////////////////////////////////Frame4/////////////////////////////


void myDisplay4()
{

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.9f, 0.7f, 0.3f);
glBegin(GL_QUADS);  //BACKground
    glVertex3d(2000.0,2000.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,2000.0,0.0);
glEnd();





glColor3f(0.9f, 0.5f, 0.3f);
glBegin(GL_QUADS);  //ground
    glVertex3d(2000.0,-100.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,-100.0,0.0);
glEnd();





glColor3f(0.4f, 0.45f, 0.4f);
glBegin(GL_QUADS);  //pipe
    glVertex3d(2000.0,00.0,0.0);
    glVertex3d(2000.0,70.0,0.0);
    glVertex3d(-2000.0,70.0,0.0);
    glVertex3f(-2000.0,00.0,0.0);
glEnd();


for(int i=0;i<50;i++)
{
    int x =i*80;

glColor3f(.55f, 0.55f, 0.55f);
glBegin(GL_QUADS);  //pipe stripe
    glVertex3d(-1200.0+x,00.0,0.0);
    glVertex3d(-1200.0+x,70.0,0.0);
    glVertex3d(-1220.0+x,70.0,0.0);
    glVertex3f(-1220.0+x,00.0,0.0);
glEnd();
}

////////////////shaker///////////////////

glColor3f(0.4f, 0.4f, 0.4f);
glBegin(GL_QUADS);  //body
    glVertex3d(-600.0,200.0,0.0);
    glVertex3d(-600.0,-220.0,0.0);
    glVertex3d(-1100.0,-220.0,0.0);
    glVertex3f(-1100.0,200.0,0.0);
glEnd();


glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_TRIANGLES);  //HEAD
    glVertex3d(-600.0,200.0,0.0);
    glVertex3d(-850.0,400.0,0.0);
    glVertex3f(-1100.0,200.0,0.0);
glEnd();




glPushMatrix();

if (flag_frame4==0){
glTranslatef(2,0,0);
flag_frame4=1;
}

else{
    glTranslatef(-2,0,0);
    flag_frame4=0;
}

glColor3f(0.4f, 0.4f, 0.4f);
glBegin(GL_QUADS);  //shaker pipe
    glVertex3d(-800.0,800.0,0.0);
    glVertex3d(-800.0,360.0,0.0);
    glVertex3d(-900.0,360.0,0.0);
    glVertex3f(-900.0,8000.0,0.0);
glEnd();

glPopMatrix();

/////fan 1

glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(-1600,480,0);
glRotatef(45, 1.5, 0.0, 0.0);
glColor3f(0.7f, 0.6f, 0.5f);
DrawCircle(0,50,100,100,90);

	glTranslatef(00,50,0);
	glColor3f(0.4f, 0.4f, 0.4f);
    glRotatef(spinl_frame4, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();
///////////

/////fan2

glPushMatrix();
glScalef(0.5,0.5,0);
glTranslatef(-1850,480,0);
glRotatef(45, 1.5, 0.0, 0.0);
glColor3f(0.7f, 0.6f, 0.5f);
DrawCircle(0,50,100,100,90);

	glTranslatef(00,50,0);
	glColor3f(0.4f, 0.4f, 0.4);
 glRotatef(spinl_frame4, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();
////////



if(iter1_frame4>=-900.0)
    spinDisplay_left_FRAME4();
     spinDisplay_right_FRAME4();
glPopMatrix();


//////////shaker




//////////stirrer
glPushMatrix();
 glRotatef(-5, 1.0, 0.0, 0.0);
glTranslatef(-200,00,0);
 glRotatef(spinr_frame4, 0.0, 1.0, 0.0);
glColor3f(0.1f, 0.1f, 0.1f);
glBegin(GL_QUADS);
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(200.0,-200.0,0.0);
    glVertex3d(-200.0,-200.0,0.0);
    glVertex3f(-200.0,200.0,0.0);
glEnd();

glColor3f(0.2f, 0.2f, 0.2f);
glRotatef(90, 0.0, 1.0, 0.0);
glBegin(GL_QUADS);
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(200.0,-200.0,0.0);
    glVertex3d(-200.0,-200.0,0.0);
    glVertex3f(-200.0,200.0,0.0);
glEnd();

glColor3f(0.3f, 0.3f, 0.3f);
glRotatef(45, 0.0, 1.0, 0.0);
glBegin(GL_QUADS);
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(200.0,-200.0,0.0);
    glVertex3d(-200.0,-200.0,0.0);
    glVertex3f(-200.0,200.0,0.0);
glEnd();
glRotatef(45, 0.0, 1.0, 0.0);




glColor3f(0.4f, 0.4f, 0.4f);
glRotatef(225, 0.0, 1.0, 0.0);
glBegin(GL_QUADS);  //mixer
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(200.0,-200.0,0.0);
    glVertex3d(-200.0,-200.0,0.0);
    glVertex3f(-200.0,200.0,0.0);
glEnd();


glRotatef(225, 0.0, 1.0, 0.0);
glBegin(GL_QUADS);  //mixer
    glVertex3d(20.0,1000.0,0.0);
    glVertex3d(20.0,-200.0,0.0);
    glVertex3d(-20.0,-200.0,0.0);
    glVertex3f(-20.0,1000.0,0.0);
glEnd();
glPopMatrix();
//////////


glColor3f(0.5f, 0.5f, 0.5f);//body
glBegin(GL_QUADS);
    glVertex3d(50.0,150.0,0.0);
    glVertex3d(50.0,-220.0,0.0);
    glVertex3d(-450.0,-220.0,0.0);
    glVertex3f(-450.0,150.0,0.0);
glEnd();

glColor3f(0.5f, 0.5f, 0.5f);//head
glBegin(GL_QUADS);
    glVertex3d(50.0,1020.0,0.0);
    glVertex3d(50.0,500.0,0.0);
    glVertex3d(-450.0,500.0,0.0);
    glVertex3f(-450.0,1020.0,0.0);
glEnd();



/////////roller
glPushMatrix();
glTranslatef(700,50,0);
glScalef(1.5, 1.5, 0.0);
glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_QUADS);

 glVertex3d(190.0,80.0,0.0);
    glVertex3d(190.0,-180.0,0.0);
    glVertex3d(-190.0,-180.0,0.0);
    glVertex3f(-190.0,80.0,0.0);

glEnd();

DrawCircle(0,50,200,200,90);
glColor3f(0.2f, 0.2f, 0.2f);
DrawCircle(0,50,100,100,90);


glPushMatrix();

	glTranslatef(00,50,0);
	glColor3f(0.4f, 0.4f, 0.4);
 glRotatef(spinl_frame4*0.3, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();

if(iter1_frame4>=-900.0)
    spinDisplay_left_FRAME4();
glPopMatrix();
TEXTmake(-800,-450,0.2,0.2,0.2,"MILK CREAM,COCOA BUTTER AND ADDED SUGAR ARE THEN MIXED THOUROUGHLY WITH THE " );
TEXTmake(-800,-500,0.2,0.2,.2,"FRESH COCO POWDER TO MAKE CREAMY LUMPS OF CHOCOLATE");

glFlush();

}

/////////////////////////////////////////Frame 5//////////////////////////////////////////
void myDisplay5()
{

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.9f, 0.7f, 0.3f);
glBegin(GL_QUADS);  //BACKground
    glVertex3d(2000.0,2000.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,2000.0,0.0);
glEnd();


glColor3f(0.9f, 0.5f, 0.3f);
glBegin(GL_QUADS);  //ground
    glVertex3d(2000.0,-100.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,-100.0,0.0);
glEnd();




////////////////////////////////////////////////////

glColor3f(0.2f, 0.2f, 0.2f);
glBegin(GL_QUADS);  //belt
    glVertex3d(2000.0,30.0,0.0);
    glVertex3d(2000.0,-70.0,0.0);
    glVertex3d(-2000.0,-70.0,0.0);
    glVertex3f(-2000.0,30.0,0.0);
glEnd();
glColor3f(0.5f, 0.3f, 0.3f);
glBegin(GL_QUADS);  //belt
    glVertex3d(2000.0,-70.0,0.0);
    glVertex3d(2000.0,-110.0,0.0);
    glVertex3d(-2000.0,-110.0,0.0);
    glVertex3f(-2000.0,-70.0,0.0);
glEnd();
//BOLTS
for(int i=0 ; i<=35; i++){

glPushMatrix();
int x=i*400;
glTranslatef(-200,-70,0);
glScalef(0.2,0.2,0);
glTranslatef(-5000+x,-100,0);
glColor3f(0.2f, 0.2f, 0.2f);
DrawCircle(0,0,100,100,90);
glColor3f(1.0f, 1.0f, 1.0);
glRotatef(spinr_frame5*0.2, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRotatef(45, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRectf(-5.0, -100.0, 5.0, 100.0);
glRotatef(225, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);

glPopMatrix();}

if(iter1_frame5>=-900.0)
    spinDisplay_right_FRAME5();
glPopMatrix();
//BOLTS


//////////////

if(iter1_frame5<=200.0)
     iter1_frame5=iter1_frame5+0.05;
     else
        iter1_frame5=00;

    glutPostRedisplay();
    glPushMatrix();
glTranslatef(0+iter1_frame5,0,0);

////////////////////mold
for(int i=0;i<5;i++)
{ int x=i*200;

glColor3f(0.6f, 0.3f, 0.1f);
DrawCircle(-1600+x,-15,50,30,13);
}

///////////////////////

///////////////CUT
for(int i=0;i<5;i++)
{ int x=i*200;

glColor3f(0.6f, 0.3f, 0.1f);

glBegin(GL_QUADS);
    glVertex3d(-500.0+x,15.0,0.0);
    glVertex3d(-500.0+x,-45.0,0.0);
    glVertex3d(-600.0+x,-45.0,0.0);
    glVertex3f(-600.0+x,15.0,0.0);
glEnd();
glColor3f(0.5f, 0.2f, 0.0f);
glRectf(-590+x,-35,-570+x,-15);
glRectf(-590+x,-10,-570+x,10);

glRectf(-560+x,-35,-540+x,-15);
glRectf(-560+x,-10,-540+x,10);

glRectf(-530+x,-35,-510+x,-15);
glRectf(-530+x,-10,-510+x,10);


}
////////////////

///////////////wrapped
for(int i=0;i<5;i++)
{ int x=i*200;

glColor3f(1.0f, 0.1f, 0.1f);

glBegin(GL_QUADS);
    glVertex3d(500.0+x,15.0,0.0);
    glVertex3d(500.0+x,-45.0,0.0);
    glVertex3d(400.0+x,-45.0,0.0);
    glVertex3f(400.0+x,15.0,0.0);
glEnd();


glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);
    glVertex3d(410.0+x,15.0,0.0);
    glVertex3d(410.0+x,-45.0,0.0);
    glVertex3d(400.0+x,-45.0,0.0);
    glVertex3f(400.0+x,15.0,0.0);
glEnd();

glBegin(GL_QUADS);
    glVertex3d(500.0+x,15.0,0.0);
    glVertex3d(500.0+x,-45.0,0.0);
    glVertex3d(490.0+x,-45.0,0.0);
    glVertex3f(490.0+x,15.0,0.0);
glEnd();
}
////////////////




glPopMatrix();



glPushMatrix();

float offset3 = 40*sin(4.0f * 3.14159265359f * time_frame5);

glTranslatef(-0 ,0+offset3,0);



glColor3f(0.6f, 0.3f, 0.1f);
glBegin(GL_QUADS);  //choco soup
    glVertex3d(-1280.0,550.0,0.0);
  glColor3f(0.7f, 0.5f, 0.3f);
    glVertex3d(-1280.0,-100.0,0.0);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex3d(-1320.0,-100.0,0.0);
    glColor3f(0.2f, 0.1f, 0.1f);
    glVertex3f(-1320,550.0,0.0);
glEnd();



glColor3f(0.2f, 0.2f, 0.2f);//bloober
glBegin(GL_QUADS);
    glVertex3d(-1200.0,150.0,0.0);
    glVertex3d(-1200.0,00.0,0.0);
    glVertex3d(-1400.0,00.0,0.0);
    glVertex3f(-1400,150.0,0.0);
glEnd();

glTranslatef(40,0,0);


glPopMatrix();

//////////////


glPushMatrix();///////Machine 1

glTranslatef(-100,0,0);
glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1090.0,110.0,0.0);
    glVertex3d(-1090.0,-200.0,0.0);
    glVertex3d(-1410.0,-200.0,0.0);
    glVertex3f(-1410.0,110.0,0.0);
glEnd();



glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1100.0,100.0,0.0);
    glVertex3d(-1100.0,-200.0,0.0);
    glVertex3d(-1400.0,-200.0,0.0);
    glVertex3f(-1400.0,100.0,0.0);
glEnd();

glPopMatrix();







glPushMatrix();


float offset2 = 30*sin(3.0f * 3.14159265359f * time_frame5);

glTranslatef(-0 ,0+offset2,0);

glColor3f(0.3f, 0.3f, 0.3f);
glBegin(GL_QUADS);  //piston 1
    glVertex3d(-500.0,510.0,0.0);
    glVertex3d(-500.0,00.0,0.0);
    glVertex3d(-600.0,00.0,0.0);
    glVertex3f(-600.0,510.0,0.0);
glEnd();

glColor3f(0.2f, 0.2f, 0.2f);
glBegin(GL_QUADS);  //piston 2
    glVertex3d(-450.0,510.0,0.0);
    glVertex3d(-450.0,300.0,0.0);
    glVertex3d(-650.0,300.0,0.0);
    glVertex3f(-650.0,510.0,0.0);
glEnd();
glTranslatef(40,0,0);
time_frame5=time_frame5+.0003;

glPopMatrix();

glColor3f(0.4f, 0.4f, 0.4f);
glBegin(GL_QUADS);  //piston head
    glVertex3d(-400.0,1100.0,0.0);
    glVertex3d(-400.0,400.0,0.0);
    glVertex3d(-700.0,400.0,0.0);
    glVertex3f(-700.0,1100.0,0.0);
glEnd();






glPushMatrix();///////Machine 2


glColor3f(0.5f, 0.5f, 0.5f);
DrawCircle(-550,100,200,100,10);


glTranslatef(700,0,0);
glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1090.0,110.0,0.0);
    glVertex3d(-1090.0,-200.0,0.0);
    glVertex3d(-1410.0,-200.0,0.0);
    glVertex3f(-1410.0,110.0,0.0);
glEnd();



glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1100.0,100.0,0.0);
    glVertex3d(-1100.0,-200.0,0.0);
    glVertex3d(-1400.0,-200.0,0.0);
    glVertex3f(-1400.0,100.0,0.0);
glEnd();

glPopMatrix();
//////////////////////




glColor3f(1.0f, 0.1f, 0.1f);
glBegin(GL_QUADS);  //wrapping red
    glVertex3d(250.0,465.0,0.0);
    glVertex3d(350.0,200.0,0.0);
    glColor3f(1.0f, .5f, 0.5f);
    glVertex3d(300.0,200.0,0.0);
    glVertex3f(200.0,500.0,0.0);
glEnd();


glColor3f(0.7f, .7f, 0.7f);
glBegin(GL_QUADS);  //wrapping silver
    glVertex3d(500.0,500.0,0.0);
    glVertex3d(400.0,200.0,0.0);
    glColor3f(0.6f, 0.6f, 0.6f);
  glVertex3d(350.0,200.0,0.0);
    glVertex3f(450.0,465.0,0.0);
glEnd();


glPushMatrix();///////Machine 3

glTranslatef(1600,0,0);
glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1090.0,110.0,0.0);
    glVertex3d(-1090.0,-200.0,0.0);
    glVertex3d(-1410.0,-200.0,0.0);
    glVertex3f(-1410.0,110.0,0.0);
glEnd();



glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1100.0,100.0,0.0);
    glVertex3d(-1100.0,-200.0,0.0);
    glVertex3d(-1400.0,-200.0,0.0);
    glVertex3f(-1400.0,100.0,0.0);
glEnd();

glPopMatrix();


glColor3f(0.5f, 0.5f, 0.5f);
DrawHalfCircle(350,200,250,150,5000);




glBegin(GL_QUADS);  //new
    glVertex3d(450.0,40.0,0.0);
    glVertex3d(450.0,-100.0,0.0);
    glVertex3d(250.0,-100.0,0.0);
    glVertex3f(250.0,40.0,0.0);
glEnd();
glColor3f(0.3f, 0.3f, 0.3f);



glPushMatrix();

float offset = 15*sin(3.0f * 3.14159265359f * time1_frame5);

glTranslatef(0 ,0+offset,0);
glBegin(GL_QUADS);  //new 1
    glVertex3d(450.0,40.0,0.0);
    glVertex3d(450.0,00.0,0.0);
    glVertex3d(250.0,00.0,0.0);
    glVertex3f(250.0,40.0,0.0);
glEnd();
glTranslatef(0 ,0+offset,0);
glBegin(GL_QUADS);  //new 2
    glVertex3d(450.0,-60.0,0.0);
    glVertex3d(450.0,-100.0,0.0);
    glVertex3d(250.0,-100.0,0.0);
    glVertex3f(250.0,-60.0,0.0);
glEnd();
glTranslatef(0,0,0);
time1_frame5=time1_frame5+.001;
glPopMatrix();





//////////

glPushMatrix();
glTranslatef(-750 ,100,0);

glColor3f(0.3f, 0.3f, 0.3f);
glBegin(GL_QUADS);  //piston 1
    glVertex3d(-520.0,510.0,0.0);
    glVertex3d(-520.0,200.0,0.0);
    glVertex3d(-580.0,200.0,0.0);
    glVertex3f(-580.0,510.0,0.0);
glEnd();

glColor3f(0.2f, 0.2f, 0.2f);
glBegin(GL_QUADS);  //piston 2
    glVertex3d(-450.0,510.0,0.0);
    glVertex3d(-450.0,300.0,0.0);
    glVertex3d(-650.0,300.0,0.0);
    glVertex3f(-650.0,510.0,0.0);
glEnd();

glColor3f(0.4f, 0.4f, 0.4f);
glBegin(GL_QUADS);  //piston head
    glVertex3d(-400.0,1100.0,0.0);
    glVertex3d(-400.0,400.0,0.0);
    glVertex3d(-700.0,400.0,0.0);
    glVertex3f(-700.0,1100.0,0.0);
glEnd();

glPopMatrix();





//////////


glPushMatrix();/////////wrapper roller red

	glTranslatef(150,400,0);
glColor3f(1.0f, 0.1f, 0.1f);
DrawCircle(0,0,120,120,90);


	glColor3f(0.7f, 0.6f, 0.5f);
DrawCircle(0,0,100,100,90);






	glColor3f(0.4f, 0.4f, 0.4);
 glRotatef(spinr_frame5*0.5, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();

if(iter1_frame5>=-900.0)
    spinDisplay_right_FRAME5();
glPopMatrix();



glColor3f(0.5f, 0.6f, 0.6f);
glBegin(GL_TRIANGLES);  //
    glVertex3d(100.0,200.0,0.0);
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(150.0,400.0,0.0);

glEnd();



glColor3f(0.5f, 0.6f, 0.6f);
glBegin(GL_TRIANGLES);  //
    glVertex3d(500.0,200.0,0.0);
    glVertex3d(600.0,200.0,0.0);
    glVertex3d(550.0,400.0,0.0);

glEnd();
glPopMatrix();
////////wrapper roller red


glPushMatrix();/////////wrapper roller silver

	glTranslatef(550,400,0);
glColor3f(.6f, 0.6f, 0.6f);
DrawCircle(0,0,120,120,90);


	glColor3f(0.7f, 0.6f, 0.5f);
DrawCircle(0,0,100,100,90);


	glColor3f(0.4f, 0.4f, 0.4);
 glRotatef(spinl_frame5, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	 glRotatef(45, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
	glRectf(-5.0, -100.0, 5.0, 100.0);
	glRotatef(225, 0.0, 0.0, 1.0);
	glRectf(-100.0, -5.0, 100.0, 5.0);
glPopMatrix();

if(iter1_frame5>=-900.0)
    spinDisplay_left_FRAME5();
glPopMatrix();



glColor3f(0.5f, 0.6f, 0.6f);
glBegin(GL_TRIANGLES);  //
    glVertex3d(100.0,200.0,0.0);
    glVertex3d(200.0,200.0,0.0);
    glVertex3d(150.0,400.0,0.0);

glEnd();



glColor3f(0.5f, 0.6f, 0.6f);
glBegin(GL_TRIANGLES);  //
    glVertex3d(500.0,200.0,0.0);
    glVertex3d(600.0,200.0,0.0);
    glVertex3d(550.0,400.0,0.0);

glEnd();
glPopMatrix();
////////wrapper roller silver

/////////////////////////////////
TEXTmake(-800,-450,0.2,0.2,0.2,"THE CREAMY LUMPS ARE THEN FROZEN TO A LITTLE COOLING TEMPERATURE TO DIVIDE" );
TEXTmake(-800,-500,0.2,0.2,.2,"INTO BARS.A CUTTING MECHANISM THAN SHAPES THE CHOCOLATE INTO ITS WELL KNOWN ");
TEXTmake(-800,-550,0.2,0.2,.2,"CHECKERED TILE DESIGN");
glFlush();

}


/////////////////////////////////////Frame6 //////////////////////////////////////////

void myDisplay6()
{

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.9f, 0.8f, 0.4f);
glBegin(GL_QUADS);  //BACKGROUND
    glVertex3d(2000.0,2000.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,2000.0,0.0);
glEnd();


glColor3f(0.9f, 0.5f, 0.3f);
glBegin(GL_QUADS);  //ground
    glVertex3d(2000.0,-400.0,0.0);
    glVertex3d(2000.0,-2000.0,0.0);
    glVertex3d(-2000.0,-2000.0,0.0);
    glVertex3f(-2000.0,-400.0,0.0);
glEnd();




////////////////////////////////////////////////////
glPushMatrix();
glTranslatef(0,400,0);







glColor3f(0.2f, 0.2f, 0.2f);
glBegin(GL_QUADS);  //belt 1
    glVertex3d(-400.0,30.0,0.0);
    glVertex3d(-400.0,-70.0,0.0);
    glVertex3d(-2000.0,-70.0,0.0);
    glVertex3f(-2000.0,30.0,0.0);
glEnd();
glColor3f(0.5f, 0.3f, 0.3f);
glBegin(GL_QUADS);  //belt 2
    glVertex3d(-400.0,-70.0,0.0);
    glVertex3d(-400.0,-110.0,0.0);
    glVertex3d(-2000.0,-110.0,0.0);
    glVertex3f(-2000.0,-70.0,0.0);
glEnd();



if(iter1_frame6<=200.0)
     iter1_frame6=iter1_frame6+0.4;
     else
        iter1_frame6=00;

    glutPostRedisplay();
    glPushMatrix();
glTranslatef(0+iter1_frame6,0,0);
glTranslatef(-2000,0,0);

///////////////wrapped
for(int i=0;i<5;i++)
{ int x=i*200;

glColor3f(1.0f, 0.1f, 0.1f);

glBegin(GL_QUADS);
    glVertex3d(500.0+x,15.0,0.0);
    glVertex3d(500.0+x,-45.0,0.0);
    glVertex3d(400.0+x,-45.0,0.0);
    glVertex3f(400.0+x,15.0,0.0);
glEnd();


glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);
    glVertex3d(410.0+x,15.0,0.0);
    glVertex3d(410.0+x,-45.0,0.0);
    glVertex3d(400.0+x,-45.0,0.0);
    glVertex3f(400.0+x,15.0,0.0);
glEnd();

glBegin(GL_QUADS);
    glVertex3d(500.0+x,15.0,0.0);
    glVertex3d(500.0+x,-45.0,0.0);
    glVertex3d(490.0+x,-45.0,0.0);
    glVertex3f(490.0+x,15.0,0.0);
glEnd();
}
////////////////




glPopMatrix();






//BOLTS
for(int i=0 ; i<=9; i++){

glPushMatrix();
int x=i*400;
glTranslatef(-200,-70,0);
glScalef(0.2,0.2,0);
glTranslatef(-5000+x,-100,0);
glColor3f(0.2f, 0.2f, 0.2f);
DrawCircle(0,0,100,100,90);
glColor3f(1.0f, 1.0f, 1.0);
glRotatef(spinr_frame6*0.5, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRotatef(45, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRectf(-5.0, -100.0, 5.0, 100.0);
glRotatef(225, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);

glPopMatrix();}

if(iter1_frame6>=-900.0)
    spinDisplay_right_FRAME6();
glPopMatrix();
//BOLTS
glPopMatrix();

//////////////NEW


glPushMatrix();
glTranslatef(700,-200,0);


glColor3f(0.2f, 0.2f, 0.2f);
glBegin(GL_QUADS);  //belt
    glVertex3d(2000.0,80.0,0.0);
    glVertex3d(2000.0,-70.0,0.0);
    glVertex3d(-2000.0,-70.0,0.0);
    glVertex3f(-2000.0,80.0,0.0);
glEnd();
glColor3f(0.5f, 0.3f, 0.3f);
glBegin(GL_QUADS);  //belt
    glVertex3d(2000.0,-70.0,0.0);
    glVertex3d(2000.0,-110.0,0.0);
    glVertex3d(-2000.0,-110.0,0.0);
    glVertex3f(-2000.0,-70.0,0.0);
glEnd();



if(iter2_frame6<=1250.0){
     iter2_frame6=iter2_frame6+0.4;
      }


     else{
        iter2_frame6=00;

     }
    glutPostRedisplay();
glPushMatrix();


glTranslatef(-1770,-50,0);


glTranslatef(0+iter2_frame6 ,0,0);





int x=0;
///////////////BOX close
	glColor3f(0.9, 0.7, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(500+x,220);
   glVertex2f(340+x,300);
   glVertex2f(340+x,100);
   glVertex2f(500+x,20);
  glEnd();

	glColor3f(0.9, 0.75, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(700+x,220);
   glVertex2f(500+x,220);
   glVertex2f(500+x,20);
   glVertex2f(700+x,20);
  glEnd();

  	glColor3f(0.9, 0.6, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(520+x,300);
   glVertex2f(340+x,300);

   glVertex2f(500+x,220);
   glVertex2f(700+x,220);
  glEnd();

 	glColor3f(0.7, 0.4, 0.0);
  glBegin(GL_LINES);
   glVertex2f(430,300);


   glVertex2f(600,220);

  glEnd();




  glPushMatrix();
glTranslatef(-1200,00,00);
///////////////BOX open
	glColor3f(0.9, 0.7, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(500,220);
   glVertex2f(340,300);

   glVertex2f(340,100);
   glVertex2f(500,20);
  glEnd();

  glColor3f(0.9, 0.6, 0.0);
    glBegin(GL_QUADS);
   glVertex2f(500,220);
   glVertex2f(340,300);

   glVertex2f(270,230);
   glVertex2f(430,130);
  glEnd();

	glColor3f(0.9, 0.75, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(700+x,220);
   glVertex2f(500+x,220);
   glVertex2f(500+x,20);
   glVertex2f(700+x,20);
  glEnd();

  	glColor3f(0.8, 0.6, 0.0);
  glBegin(GL_QUADS);
   glVertex2f(520+x,300);
   glVertex2f(340+x,300);
   glVertex2f(500+x,220);
   glVertex2f(700+x,220);
  glEnd();



  glColor3f(0.9, 0.6, 0.0);
  glBegin(GL_TRIANGLES);

   glVertex2f(700,220);
   glVertex2f(700,150);
   glVertex2f(750,150);
  glEnd();


////////////////

glPopMatrix();





	glPopMatrix();

////////////////












//BOLTS
for(int i=0 ; i<=39; i++){

glPushMatrix();
int x=i*400;
glTranslatef(-900,-70,0);
glScalef(0.2,0.2,0);
glTranslatef(-5000+x,-100,0);
glColor3f(0.2f, 0.2f, 0.2f);
DrawCircle(0,0,100,100,90);
glColor3f(1.0f, 1.0f, 1.0);
glRotatef(spinr_frame6*0.5, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRotatef(45, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);
glRectf(-5.0, -100.0, 5.0, 100.0);
glRotatef(225, 0.0, 0.0, 1.0);
glRectf(-100.0, -5.0, 100.0, 5.0);

glPopMatrix();}

if(iter1_frame6>=-900.0)
    spinDisplay_right_FRAME6();
glPopMatrix();
//BOLTS
glPopMatrix();


//////////////NEW


glPushMatrix();///////Machine 1

glTranslatef(-100,0,0);
glColor3f(0.5f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1090.0,110.0,0.0);
    glVertex3d(-1090.0,-500.0,0.0);
    glVertex3d(-1410.0,-500.0,0.0);
    glVertex3f(-1410.0,110.0,0.0);
glEnd();



glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1100.0,100.0,0.0);
    glVertex3d(-1100.0,-500.0,0.0);
    glVertex3d(-1400.0,-500.0,0.0);
    glVertex3f(-1400.0,100.0,0.0);
glEnd();

glPopMatrix();

glPushMatrix();///////Machine 2
glColor3f(0.5f, 0.5f, 0.5f);

glTranslatef(700,0,0);
glColor3f(0.4f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-990.0,110.0,0.0);
    glVertex3d(-990.0,-500.0,0.0);
    glVertex3d(-1510.0,-500.0,0.0);
    glVertex3f(-1510.0,110.0,0.0);
glEnd();

glBegin(GL_QUADS);  //machine body
    glVertex3d(-1050.0,300.0,0.0);
    glVertex3d(-1090.0,100.0,0.0);
    glVertex3d(-1410.0,100.0,0.0);
    glVertex3f(-1450.0,300.0,0.0);
glEnd();




glPushMatrix();


glTranslatef(0 ,0+iter1_frame6,0);
glTranslatef(0 ,-200,0);
glColor3f(0.4f,0.4f,0.4f);
glBegin(GL_QUADS);  //piston
    glVertex3d(-1200.0,500.0,0.0);
    glVertex3d(-1200.0,1000.0,0.0);
    glVertex3d(-1260.0,1000.0,0.0);
    glVertex3f(-1260.0,500.0,0.0);
glEnd();
glColor3f(0.6f,0.6f,0.6f);
glBegin(GL_QUADS);  //piston
    glVertex3d(-1160.0,500.0,0.0);
    glVertex3d(-1160.0,550.0,0.0);
    glVertex3d(-1310.0,550.0,0.0);
    glVertex3f(-1310.0,500.0,0.0);
glEnd();


glTranslatef(0,0,0);
time_frame6=time_frame6+.0006;
glPopMatrix();



glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1000.0,100.0,0.0);
    glVertex3d(-1000.0,-500.0,0.0);
    glVertex3d(-1500.0,-500.0,0.0);
    glVertex3f(-1500.0,100.0,0.0);
glEnd();

glPopMatrix();
//////////////////////

glPushMatrix();

glTranslatef(2000,0,0);
glColor3f(0.4f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-990.0,110.0,0.0);
    glVertex3d(-990.0,-500.0,0.0);
    glVertex3d(-1510.0,-500.0,0.0);
    glVertex3f(-1510.0,110.0,0.0);
glEnd();

glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1000.0,100.0,0.0);
    glVertex3d(-1000.0,-500.0,0.0);
    glVertex3d(-1500.0,-500.0,0.0);
    glVertex3f(-1500.0,100.0,0.0);
glEnd();

glPopMatrix();

glPushMatrix();

glTranslatef(2510,0,0);
glColor3f(0.4f, 0.5f, 0.5f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-990.0,200.0,0.0);
    glVertex3d(-990.0,-500.0,0.0);
    glVertex3d(-1510.0,-500.0,0.0);
    glVertex3f(-1510.0,200.0,0.0);
glEnd();

glColor3f(0.6f, 0.6f, 0.6f);
glBegin(GL_QUADS);  //machine body
    glVertex3d(-1000.0,190.0,0.0);
    glVertex3d(-1000.0,-500.0,0.0);
    glVertex3d(-1500.0,-500.0,0.0);
    glVertex3f(-1500.0,190.0,0.0);
glEnd();

glPopMatrix();

/////////////////////////////////
TEXTmake(-200,500,0.2,0.2,0.2,"THE CHOCOLATE BARS ARE THEN READY FOR SHIPPING " );
TEXTmake(-200,450,0.2,0.2,.2,"AND PACKED INTO LARGE ORDERS FOR YOUR LOCAL CANDY SHOP");
glFlush();

}




void myDisplay0(){

    if (change_frame==1){
        myDisplay1();

    }
    else if(change_frame==2){
        myDisplay2();
    }
    else if(change_frame==3){
        myDisplay3();
       Frame_3_wait_time=Frame_3_wait_time+1;
       //printf("Frame_3_wait_time=%d\n",Frame_3_wait_time);
        if(Frame_3_wait_time==300){
            change_frame=4;
            glutPostRedisplay();
        }
    }
    else if(change_frame==4){
        myDisplay4();
         Frame_4_wait_time=Frame_4_wait_time+1;
     //  printf("Frame_4_wait_time=%d\n",Frame_4_wait_time);
        if(Frame_4_wait_time==3000){
            change_frame=5;
            glutPostRedisplay();
    }
    }
       else if(change_frame==5){
        myDisplay5();
          Frame_5_wait_time=Frame_5_wait_time+1;
   //    printf("Frame_5_wait_time=%d\n",Frame_5_wait_time);
        if(Frame_5_wait_time==3000){
            change_frame=6;
            glutPostRedisplay();
    }
    }
       else if(change_frame==6){
        myDisplay6();
                  Frame_6_wait_time=Frame_6_wait_time+1;
 //      printf("Frame_6_wait_time=%d\n",Frame_6_wait_time);
        if(Frame_6_wait_time==8000){
         exit(0);
    }
       }

}



int main()
{
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(w,h);
glutInitWindowPosition(0,0);
glutCreateWindow("HOUSE");
init();
glutDisplayFunc(myDisplay0);
glutMainLoop();
return 0;
}
