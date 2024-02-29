#include <GL/glut.h>///留下來，外掛

void display()
{
    glBegin(GL_POLYGON);///開始畫
        glVertex2f((34-200)/200.0,-(76-200)/200.0);
        glVertex2f((48-200)/200.0,-(131-200)/200.0);
        glVertex2f((85-200)/200.0,-(59-200)/200.0);
    glEnd();///結束畫
    glBegin(GL_POLYGON);///開始畫
        glVertex2f((383-200)/200.0,-(79-200)/200.0);
        glVertex2f((348-200)/200.0,-(146-200)/200.0);
        glVertex2f((312-200)/200.0,-(55-200)/200.0);
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
