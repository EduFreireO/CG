#include <GL/glut.h> 
#include <stdlib.h>
#include <stdio.h>

void display(void);
void keyboard(unsigned char key, int x, int y);
void bico()
{
  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_TRIANGLES);
  
    glVertex2f(-0.21, 0.3); // A
    //glColor3f(0, 1, 0);
    glVertex2f(-0.01, 0.5); // B
    //glColor3f(0, 1, 0);
    glVertex2f(0.19,0.3);  // C
    //glColor3f(0, 1, 0);
  glEnd();
}
void capsula()
{
    
    glColor3f(0.64, 0.75, 0.78);
    glBegin(GL_QUADS);
      glVertex2f(-0.12, 0.3); //D
      glVertex2f(-0.12, 0.08); // H
      glVertex2f(0.12,0.08); // M
      glVertex2f(0.12,0.3); //G
  glEnd();
}
void inferior()
{
  
  glColor3f(0.64, 0.75, 0.78);
  glBegin(GL_QUADS);
    glVertex2f(-0.12, 0.08);// h
    glVertex2f(-0.12, -0.1); // e
    glVertex2f(0.12, -0.1); //F
    glVertex2f(0.12, 0.08); // m
  glEnd();
}
void asa()
{
  
  
  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_QUADS);
    glVertex2f(-0.12, 0.11);
    glVertex2f(-0.2, 0.03);
    glVertex2f(-0.2, -0.1); // j
    glVertex2f(-0.12, -0.1);
  glEnd();
  
 
  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_QUADS);
    glVertex2f(0.12, 0.11);
    glVertex2f(0.2, 0.03);
    glVertex2f(0.2, -0.1); // k
    glVertex2f(0.12, -0.1);
  glEnd();

   
}
void traseira()
{
  glColor3f(0.39, 0.46, 0.48);
  glBegin(GL_QUADS);
    glVertex2f(-0.04, -0.1); // n
    glVertex2f(-0.08, -0.18); // o
    glVertex2f(0.08, -0.18);// p
    glVertex2f(0.04, -0.1);// q
  glEnd();  
}
void jane()
{
  glColor3f(0.97, 0.98, 0.97);
  glBegin(GL_QUADS);
    glVertex2f(-0.06, 0.25); //s
    glVertex2f(-0.06, 0.11);//t
    glVertex2f(0.06, 0.11); // u
    glVertex2f(0.06, 0.25);// V
  glEnd(); 

}
void base()
{
  glColor3f(0.86, 0.88, 0.93);
  glBegin(GL_QUADS);
    glVertex2f(-0.4, -0.18);
    glVertex2f(0.4, -0.18);
    glVertex2f(0.4, -0.6); // k
    glVertex2f(-0.4, -0.6); // n
  glEnd(); 
}
int main(int argc, char** argv){
  glutInit(&argc, argv); 
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); 
  glutInitWindowSize (800, 800); 
  glutInitWindowPosition (00, 00); 
  glutCreateWindow (argv[0]); 
  
  glClearColor(0, 0.0, 0, 0.0);
  glOrtho (-1, 1,-1, 1, -1 ,1); 
  glutDisplayFunc(display); 
  glutKeyboardFunc(keyboard); 
  glutMainLoop(); 
  printf("\nTestando... \n");
  return 0;
}

void display(void){
  glClear(GL_COLOR_BUFFER_BIT); 
  glColor3f (0.0, 0.0, 0.0);
 
  bico(); 
  capsula();
  inferior();
  jane();
  asa();
  traseira();
  base();
  
  glFlush(); 
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
    case 27: exit(0);
  }
}