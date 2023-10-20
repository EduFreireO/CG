#include <GL/glut.h> 
#include <stdlib.h>
#include <stdio.h>

void display(void);
void keyboard(unsigned char key, int x, int y);
void bico()
{
  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_TRIANGLES);
  
    glVertex2f(0.2, 0.6); // A
    //glColor3f(0, 1, 0);
    glVertex2f(0.4, 0.8); // B
    //glColor3f(0, 1, 0);
    glVertex2f(0.6,0.6);  // C
    //glColor3f(0, 1, 0);
  glEnd();
}
void capsula()
{
    
    glColor3f(0.64, 0.75, 0.78);
    glBegin(GL_QUADS);
      glVertex2f(0.28, 0.6); //D
      glVertex2f(0.28, 0.42); // H
      glVertex2f(0.52,0.42); // M
      glVertex2f(0.52,0.6); //G
  glEnd();
}
void inferior()
{
  
  glColor3f(0.64, 0.75, 0.78);
  glBegin(GL_QUADS);
    glVertex2f(0.28, 0.42);// h
    glVertex2f(0.28, 0.2); // e
    glVertex2f(0.52, 0.2); //F
    glVertex2f(0.52, 0.42); // m
  glEnd();
}
void asa()
{
  
  
  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_QUADS);
    glVertex2f(0.28, 0.41);
    glVertex2f(0.2, 0.33);
    glVertex2f(0.2, 0.2); // j
    glVertex2f(0.28, 0.2);
  glEnd();
  
  glColor3f(0.67, 0.09, 0.05);
  glBegin(GL_TRIANGLES);
    glVertex2f(0.28, 0.41);
    glVertex2f(0.2, 0.33);
    glVertex2f(0.28, 0.33); 
  glEnd(); 

  glColor3f(0.66, 0.01, 0.01);
  glBegin(GL_QUADS);
    glVertex2f(0.52, 0.41);
    glVertex2f(0.6, 0.33);
    glVertex2f(0.6, 0.2); // k
    glVertex2f(0.52, 0.2);
  glEnd();

  glColor3f(0.67, 0.09, 0.05);
  glBegin(GL_TRIANGLES);
    glVertex2f(0.6, 0.33);
    glVertex2f(0.52, 0.2); 
    glVertex2f(0.52, 0.41);
  glEnd();    
}
void traseira()
{
  glColor3f(0.39, 0.46, 0.48);
  glBegin(GL_QUADS);
    glVertex2f(0.36, 0.2); // n
    glVertex2f(0.32, 0.12); // o
    glVertex2f(0.48, 0.12);// p
    glVertex2f(0.44, 0.2);// q
  glEnd();  
}
void jane()
{
  glColor3f(0.97, 0.98, 0.97);
  glBegin(GL_QUADS);
    glVertex2f(0.34, 0.54); //s
    glVertex2f(0.34, 0.4);//t
    glVertex2f(0.46, 0.4); // u
    glVertex2f(0.46, 0.54);// V
  glEnd(); 

}
void base()
{
  glColor3f(0.86, 0.88, 0.93);
  glBegin(GL_QUADS);
    glVertex2f(0.2, 0.12); // o
    glVertex2f(0.2, 0.0);// p
    glVertex2f(0.6, 0.0);// q
    glVertex2f(0.6, 0.12); // n
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