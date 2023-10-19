#include <GL/glut.h> //O arquivo glut.h inclui, além dos protótipos das funções GLUT, os arquivos gl.h e glu.h,
#include <stdlib.h>
#include <stdio.h>

// g++ ex.cpp -lglut -lGL -lGLU

void display(void);
void keyboard(unsigned char key, int x, int y);
void bico()
{
  glBegin(GL_TRIANGLES);
  //glBegin(GL_TRIANGLE_STRIP);
  //glBegin(GL_TRIANGLE_FAN);
  //glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.6);
    glVertex2f(0.4, 0.8);
    glVertex2f(0.6,0.6);
   
  glEnd();
}
void capsula()
{
    glBegin(GL_QUADS);
      glVertex2f(0.28, 0.6);
      glVertex2f(0.28, 0.41);
      glVertex2f(0.52,0.41);
      glVertex2f(0.52,0.6);
  glEnd();
}
void inferior()
{
  glBegin(GL_QUADS);
  glVertex2f(0.28, 0.41);
  glVertex2f(0.28, 0.2);
  glVertex2f(0.52, 0.2);
  glVertex2f(0.52, 0.41);
  glEnd();
}

void corpo()
{
  glBegin(GL_QUADS);
    glVertex2f(0.28, 0.6);
    glVertex2f(0.28, 0.2);
    glVertex2f(0.52,0.2);
    glVertex2f(0.52,0.6);
  glEnd();
}
void asa()
{
  glBegin(GL_QUADS);
    glVertex2f(0.28, 0.41);
    glVertex2f(0.2, 0.33);
    glVertex2f(0.2, 0.2); // j
    glVertex2f(0.28, 0.2);
  glEnd();

  glBegin(GL_QUADS);
    glVertex2f(0.52, 0.41);
    glVertex2f(0.6, 0.33);
    glVertex2f(0.6, 0.2); // k
    glVertex2f(0.52, 0.2);
  glEnd();    
}
void traseira()
{
  glBegin(GL_QUADS);
    glVertex2f(0.36, 0.2); 
    glVertex2f(0.32, 0.12);
    glVertex2f(0.48, 0.12);
    glVertex2f(0.44, 0.2);
  glEnd();  
}
int main(int argc, char** argv){
  glutInit(&argc, argv); //Estabelece contato com sistema de janelas
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //Cores dos pixels serão expressos em RGB
  glutInitWindowSize (800, 800); //Posição inicial do canto superior esquerdo da janela a ser criada
  glutInitWindowPosition (00, 00); //Estabelece o tamanho (em pixels) da janela a ser criada
  glutCreateWindow (argv[0]); //Cria uma nova janela com valor de retorno (não usado)
  // que a identifica, caso tenha mais de uma
  glClearColor(1.0, 0.0, 1.0, 0.0); //selecionar cor de fundo (Branco)
  glOrtho (-1, 1,-1, 1, -1 ,1); //define as coordenadas do volume de recorte (clipping volume),
  glutDisplayFunc(display); //Função callback chamada para fazer o desenho
  glutKeyboardFunc(keyboard); //Chamada sempre que uma tecla for precionada
  glutMainLoop(); //Depois de registradas as callbacks, o controle é entregue ao sistema de janelas
  printf("\nTestando... \n");
  return 0;
}

void display(void){
  glClear(GL_COLOR_BUFFER_BIT); ////Limpa a janela de visualização com a cor de fundo especificada
  glColor3f (0.0, 0.0, 0.0);
  //glBegin(GL_POINTS);
  //glBegin(GL_LINES);
  //glBegin(GL_LINE_STRIP);
  //glBegin(GL_LINE_LOOP);
  //glBegin(GL_QUADS);
  //glBegin(GL_QUAD_STRIP);
  // glBegin(GL_TRIANGLES);
  // //glBegin(GL_TRIANGLE_STRIP);
  // //glBegin(GL_TRIANGLE_FAN);
  // //glBegin(GL_POLYGON);
  //   glVertex2f(0.2, 0.6);
  //   glVertex2f(0.0, 0.4);
  //   glVertex2f(0.4,0.4);
  bico(); 
  capsula();
  inferior();
  //corpo();
  asa();
  traseira();

  
  glFlush(); ////Executa os comandos OpenGL para renderização
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
    case 27: exit(0);
  }
}