#include <GL/glut.h>///�d�U�ӡA�~��

void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char *argv[])///main()
{
    glutInit(&argc, argv);///�}��GLUT�\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w��ܼҦ�
    glutCreateWindow("GLUT Shapes");///�}�@��GLUT����
    glutDisplayFunc(display);///�n��display()�禡�ӵe��

    glutMainLoop();///�D�n���j��A�b�o�̤@���B�@�A������
}
