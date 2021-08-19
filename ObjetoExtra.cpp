#include "ObjetoExtra.h"

ObjetoExtra::ObjetoExtra() {}

void ObjetoExtra::DibujarExtra() {

	glPushMatrix();
		glBegin(GL_TRIANGLE_FAN);
			glVertex3f(1.0, 1.0, 0.0);
			glVertex3f(-1.0, 1.0, 0.0);
			glVertex3f(-1.0, -1.0, 0.0);
			glVertex3f(1.0, -1.0, 0.0);
			glVertex3f(1.0, -1.0, 1.0);
			glVertex3f(-1.0, -1.0, 1.0);
			glVertex3f(1.0, 1.0, 0.0);
			glVertex3f(1.0, -1.0, 1.0);
			glVertex3f(-1.0, 1.0, 0.0);
			glVertex3f(-1.0, -1.0, 1.0);
			glVertex3f(1.0, -1.0, 0.0);
			glVertex3f(1.0, -1.0, 1.0);
			glVertex3f(-1.0, -1.0, 0.0);
			glVertex3f(-1.0, -1.0, 1.0);
		glEnd();

	glPopMatrix();
}
