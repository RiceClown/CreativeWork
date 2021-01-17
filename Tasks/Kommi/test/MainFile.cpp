#pragma  once
#include "graph.h"
#include <Windows.h>
#include <iostream>

using namespace std;



int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");			//���������� ������� � ������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	glutInit(&argc, argv);				//������������� GLUT

	setGraph();							//�������� �����		

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //�������� OpenGL ���� � ������ ������ � ���.
	glutInitWindowSize(WinW, WinH);
	glutCreateWindow("������ ������������");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(clickMouse);
	glutPassiveMotionFunc(moveMouse);

	glutMainLoop();
}

