#include<windows.h>
// #include<GL/glut.h>
#include<stdlib.h>
void display(){
	// glClear(GL_COLOR_BUFFER_BIT);
	// glBegin(GL_POLYGON);
	glColor3f(0,0,1);
		glVertex3f(-0.6,-0.75,0.5);
	glColor3f(1,0,1);
		glVertex3f(0.6,-0.75,0);
	glColor3f(1,1,0.5);
		glVertex3f(0,0.75,0);
	glEnd();
	glFlush();
}
int main(int argc,char**argv){
	glutInit(&argc,argv);
	// glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(800,600);
	glutCreateWindow("OpenGL Triangle : Krishna");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}