#include <GL/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSolidCube(0.3);
	///glutSolidSphere(0.3,30,30);
	glutSolidTeapot(0.3);
	glutSwapBuffers();
}
void reshape (int w,int h)
{
    glViewport(0,0,w,h);///設定視窗會看到的區域
    float ar=w/(float) h;///長寬比，寬長比
    glMatrixMode(GL_PROJECTION);///切換投影矩陣
    glLoadIdentity();
    gluPerspective(60,ar,0.01,100);///透視投影

    glMatrixMode(GL_MODELVIEW);///切換model view矩陣
    glLoadIdentity();
    gluLookAt(0,0,-2,0,0,0,0,1,0);
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	///glutInitWindowSize(300,600);///改變視窗長寬
	glutCreateWindow("week16-2");

	glutReshapeFunc(reshape);///加這行
	glutDisplayFunc(display);

	glutMainLoop();
}
