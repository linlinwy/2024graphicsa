#include <GL/glut.h>///留下來，外掛

void display()
{
    glBegin(GL_POLYGON);///開始畫多邊形
        glColor3f(1,0,0); glVertex2f(0,1);
        glColor3f(0,1,0); glVertex2f(+1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();///結束畫
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

