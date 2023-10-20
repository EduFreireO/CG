
#include <GL/glut.h>

void drawRocket() {
    // Draw the body of the rocket
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);  // Red color
    glVertex2f(0.2, 0.0);
    glVertex2f(0.4, 0.0);
    glVertex2f(0.4, 0.8);
    glVertex2f(0.2, 0.8);
    glEnd();

    // Draw the top part of the rocket
    glBegin(GL_TRIANGLES);
    glVertex2f(0.2, 0.8);
    glVertex2f(0.4, 0.8);
    glVertex2f(0.3, 1.0);
    glEnd();

    // Draw the rocket's window
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 1.0);  // Blue color
    glVertex2f(0.28, 0.4);
    glVertex2f(0.32, 0.4);
    glVertex2f(0.32, 0.6);
    glVertex2f(0.28, 0.6);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawRocket();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Rocket Drawing");
    glutInitWindowSize(400, 400);
    glutDisplayFunc(display);
    glOrtho(0, 1, 0, 1, -1, 1);
    glutMainLoop();
    return 0;
}