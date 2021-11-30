// An OpenGL display of a ship's cockpit.

#ifndef COCKPIT_H_
#define COCKPIT_H_

#ifdef __APPLE_CC__
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "ship.hpp"
#include <string>
#include <iostream>

class Cockpit {
  Ship& ship;
  int cockpitId;
public:
  Cockpit(Ship& ship): ship(ship) {}
  void create(bool onFire = false);
  void draw(bool onFire = false);
  void addGauge(float cx, float cy, float r, int num_segments = 100, float needle_direction = 0.0);
};

void Cockpit::create(bool onFire) {
  cockpitId = glGenLists(1);
  glNewList(cockpitId, GL_COMPILE);
  glDisable(GL_LIGHTING);

  if (onFire) {
    glColor3f(1.0, 0.0, 0.0);
  }
  else {
    this->addGauge(-0.5, -0.8, 0.15, 50, M_PI * (1.0 - this->ship.getSpeed()));
    glColor3f(0.2, 0.2, 0.2);
  }
  glBegin(GL_POLYGON);
  glVertex3f(0, -1, 0);
  glVertex3f(1, -1, 0);
  for (double x = 1.0; x >= -1.05; x -= 0.05) {
    glVertex3f(x, 20*cos(x / 10.0) - 20.6, 0);
  }
  glVertex3f(-1, -1, 0);
  glEnd();

  glEnable(GL_LIGHTING);
  glEndList();
}

inline void Cockpit::addGauge (float cx, float cy, float r, int num_segments, float needle_direction) {
	// add needle
	glColor3f(1.0, 0.0, 0.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
		glVertex2f(cx, cy);
		glVertex2f(cx + cosf(needle_direction) * 0.9 * r, cy + sinf(needle_direction) * 0.9 * r);
	glEnd();
	glLineWidth(1.0);

	// Add tick marks
	glColor3f(0.0, 0.7, 0.0);
	glLineWidth(1.3);
	for (float ii = 0; ii <= M_PI; ii += M_PI/10)   {
		glBegin(GL_LINES);
			glVertex2f(cx + cosf(ii) * 0.8 * r, cy + sinf(ii) * 0.8 * r);
			glVertex2f(cx + cosf(ii) * 0.9 * r, cy + sinf(ii) * 0.9 * r);
		glEnd();
	}

	// add label
	glColor3f (1.0, 0.0, 0.0);
	glRasterPos2f(cx - 0.015, cy - 0.05);
	std::string label = "kts";
	const char *string = label.c_str();

	while(*string){
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
	}

	// add circle background - NOTE: subject to skweing when window isn't square
	glColor3f(0.0, 0.0, 0.6);
	glBegin(GL_POLYGON);
	for (int ii = 0; ii < num_segments; ii++)   {
		float theta = 2.0f * M_PI * float(ii) / float(num_segments);//get the current angle
		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component
		glVertex2f(x + cx, y + cy);//output vertex
	}
	glEnd();
}

inline void Cockpit::draw(bool onFire) {
  this->create(onFire);
  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();
  glLoadIdentity();
  glMatrixMode(GL_PROJECTION);
  glPushMatrix();
  glLoadIdentity();
  glCallList(cockpitId);
  glPopMatrix();
  glMatrixMode(GL_MODELVIEW);
  glPopMatrix();
}

#endif
