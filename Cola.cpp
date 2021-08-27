#include "Cola.h"

Cola::Cola() {}

void Cola::DibujarCola(float shoulder, float elbow, float segmentos) {

    glPushMatrix();
        glRotatef(-90, 1.0, 0.0, 0.0);
        glTranslatef(-0.25, 0.0, 0.0);
        glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0);
        glTranslatef(0.25, 0.0, 0.0);
        glPushMatrix();
            glScalef(0.5, 0.4, 1.0);
            glutSolidCube(1.0);
        glPopMatrix();
        for (int i = 0; i < segmentos; i++) {
            glTranslatef(0.25, 0.0, 0.1);
            glRotatef((GLfloat)elbow, 0.0, 0.0, 1.0);
            glTranslatef(0.25, 0.0, 0.0);
            glPushMatrix();
                glScalef(0.5, 0.4, 1.0);
                glutSolidCube(1.0);
            glPopMatrix();
        }    

    glPopMatrix();

}
