#include <GL/glut.h>///留下來，外掛

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
    glutInit(&argc, argv);///開啟GLUT功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///設定顯示模式
    glutCreateWindow("week02_color_teapot");///開一個GLUT視窗
    glutDisplayFunc(display);///要用display()函式來畫圖

    glutMainLoop();///主要的迴圈，在這裡一直運作，不結束
}
