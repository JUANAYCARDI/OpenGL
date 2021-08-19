#include "햞bol.h"

햞bol::햞bol(){}

void 햞bol::DibujarArbol(float x, float y, float z) {

	glPushMatrix();
		
			glRotatef(90, 1, 0, 0);
			glTranslatef(x, y, z);
				glPushMatrix();
					glRotatef(180, 1, 0, 0);
					glutSolidCone(1.5,2,20,20);
				glPopMatrix();
				glPushMatrix();
					glTranslatef(0, 0, -1.2);
					glRotatef(180, 1, 0, 0);
					glutSolidCone(1, 1.5, 20, 20);
				glPopMatrix();
			glutSolidCylinder(0.5, 1.5, 20, 20);
		
	glPopMatrix();
}
