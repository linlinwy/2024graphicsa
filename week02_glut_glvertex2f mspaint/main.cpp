#include <GL/glut.h>///�d�U�ӡA�~��

void display()
{
    glBegin(GL_POLYGON);///�}�l�e
        glVertex2f((34-200)/200.0,-(76-200)/200.0);
        glVertex2f((48-200)/200.0,-(131-200)/200.0);
        glVertex2f((85-200)/200.0,-(59-200)/200.0);
    glEnd();///�����e
    glBegin(GL_POLYGON);///�}�l�e
        glVertex2f((383-200)/200.0,-(79-200)/200.0);
        glVertex2f((348-200)/200.0,-(146-200)/200.0);
        glVertex2f((312-200)/200.0,-(55-200)/200.0);
    glEnd();///�����e
    glutSwapBuffers();

}
int main(int argc, char *argv[])///main()
{
    glutInit(&argc, argv);///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w��ܼҦ�
    glutCreateWindow("week02_color_teapot");///�}�@��GLUT����
    glutDisplayFunc(display);///�n��display()�禡�ӵe��

    glutMainLoop();///�D�n���j��A�b�o�̤@���B�@�A������
}
