#include "Triangulo.h"

Triangulo::Triangulo() {}

void Triangulo::DibujarTriangulo() {

	glPushMatrix();

		glTranslatef(0.0, 3.0, 0.0);
		//glutSolidTeapot(0.5);
		glBegin(GL_TRIANGLES);
			glVertex3f(0.0, 1.3, 0.0);
			glVertex3f(-1.5, -1.3, 0.0);
			glVertex3f(1.5, -1.3, 0.0);
		glEnd();

	glPopMatrix();
}
