#include <GL/glut.h>///�d�U�ӡA�~��

#include <stdio.h>

void mouse(int button,int state,int x,int y)

{

    printf("Hello Mouse!\n");

}

void display()

{

    glutSolidTeapot( 0.3 );

    glutSwapBuffers();

}

int main(int argc, char *argv[])///main()

{

    glutInit(&argc, argv);///�}��GLUT�\��

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�]�w��ܼҦ�

    glutCreateWindow("week03 mouse");///�}�@��GLUT����

    glutDisplayFunc(display);///�n��display()�禡�ӵe��

    glutMouseFunc(mouse);///�D�n���j��A�b�o�̤@���B�@�A������

   glutMainLoop();


}
