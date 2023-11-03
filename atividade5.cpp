#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

int windowWidth = 640;
int windowHeight = 480;
int raio;
void keyboard(unsigned char key, int x, int y)
{
  switch (key) {
    case 27: exit(0);
  }
}

void selecionaPixel(int x, int y) 
{
    glBegin(GL_POINTS);
    glVertex2i(x, y);
    glVertex2i(-x, y);
    glVertex2i(x, -y);
    glVertex2i(-x, -y);
    glVertex2i(y, x);
    glVertex2i(-y, x);
    glVertex2i(y, -x);
    glVertex2i(-y, -x);
    glEnd();
}

void circulo() 
{
    int x = 0;
    int y = raio;
    int d = 1 - raio; 

    
    selecionaPixel(x, y);

    while (x < y) 
    {
        x++;
        if (d < 0) 
            d += 2 * x + 1;
         else 
        {
            y--;
            d += 2 * (x - y) + 1;
        }
        selecionaPixel(x, y);
    }
}

void display() 
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    circulo();  
    glFlush();
}

void init() 
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-windowWidth / 2, windowWidth / 2, -windowHeight / 2, windowHeight / 2);
}

int main(int argc, char** argv) 
{
    
    cout << "Digite o tamanho do raio: ";
    cin >> raio;
    while(raio > 10)
    {
        cout << "Digite um tamanho valido de raio\n";
        cin >> raio;
    }
    
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("");
    init();
    glutDisplayFunc(display);
     glutKeyboardFunc(keyboard); 
    glutMainLoop();

    return 0;
}
