#include <GL/glut.h>///�d�U�ӡA�~��

void display()
{
    glColor3f(274/255.0,180/255.0,171/255.0);
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot( 0.2 );

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
