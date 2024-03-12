#include <GL/glut.h>///留下來，外掛

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

    glutInit(&argc, argv);///開啟GLUT功能

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///設定顯示模式

    glutCreateWindow("week03 mouse");///開一個GLUT視窗

    glutDisplayFunc(display);///要用display()函式來畫圖

    glutMouseFunc(mouse);///主要的迴圈，在這裡一直運作，不結束

   glutMainLoop();


}
