#include <GL/glut.h>///�d�U�ӡA�~��

void display()
{
    glBegin(GL_POLYGON);///�}�l�e�h���
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(+1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
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

