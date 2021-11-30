//
//  main.cpp
//  solarsystem
//
//  Created by Changkun Ou on 16/06/07.
//  Copyright © 2016 Shiyanlou.com. All rights reserved.
//



#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "solarsystem.hpp"
#include <stdlib.h>

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay(void) {
    solarsystem.onDisplay();
}
void onUpdate(void) {
    solarsystem.onUpdate();
}
void onKeyboard(unsigned char key, int x, int y) {
    solarsystem.onKeyboard(key, x, y);
}

void foo ()
{
    exit(0);
}

int main(int argc, char*  argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
    glutCreateWindow("Solar System");
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
    glutWMCloseFunc(foo);
    glutMainLoop();
    return 0;
}
