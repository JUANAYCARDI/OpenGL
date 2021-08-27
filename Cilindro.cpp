#include "Cilindro.h"

Cilindro::Cilindro() {}

void Cilindro::DibujarCilindro() {

    glPushMatrix();
        glRotatef(-90, 1.0, 0.0, 0.0);
        glTranslatef(0.0, 1.5, -1.0);
        glutSolidCylinder(0.5, 7, 20, 20);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.0, 6.5, -1.5);
        glutSolidSphere(1, 20, 20);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.0, -1.5, -1.5);
        glutSolidSphere(1, 20, 20);
    glPopMatrix();
}