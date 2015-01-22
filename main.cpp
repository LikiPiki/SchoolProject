#include <GLUT/glut.h>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void display () {
    glClear(GL_COLOR_BUFFER_BIT);
    glRotatef(1, 2, 3, 2);
    glBegin(GL_LINE_STRIP);
    glVertex3f(-50, -50, -50);
    glVertex3f(50, -50, -50);
    glVertex3f(50, 50, -50);
    glVertex3f(-50, 50, -50);
    glVertex3f(-50, -50, -50);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex3f(-50, -50, 50);
    glVertex3f(50, -50, 50);
    glVertex3f(50, 50, 50);
    glVertex3f(-50, 50, 50);
    glVertex3f(-50, -50, 50);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(-50, -50, 50);
    glVertex3f(-50, -50, -50);
    glVertex3f(50, -50, 50);
    glVertex3f(50, -50, -50);
    glVertex3f(50, 50, 50);
    glVertex3f(50, 50, -50);
    glVertex3f(-50, 50, 50);
    glVertex3f(-50, 50, -50);
    glEnd();
    glFlush();
    glutSwapBuffers();
    
}

void timer(int = 0) {
    display();
    glutTimerFunc(10, timer, 0);
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 10);
    glutCreateWindow("Cube");
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -100, 100);
    glutDisplayFunc(display);
    timer();
    glutMainLoop();
    
    
    return 0;
}

