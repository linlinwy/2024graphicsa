#include <GL/glut.h>///留下來，外掛

void display()
{
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char *argv[])///main()
{
    glutInit(&argc, argv);///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定顯示模式
    glutCreateWindow("GLUT Shapes");///開一個GLUT視窗
    glutDisplayFunc(display);///要用display()函式來畫圖

    glutMainLoop();///主要的迴圈，在這裡一直運作，不結束
}
