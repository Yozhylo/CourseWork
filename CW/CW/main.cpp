#include <glew.h>
#include <glfw3.h>

int windowW = 500, windowH = 500;
GLFWwindow* game;

void main()
{
	glfwInit();
	game = glfwCreateWindow(windowW, windowH, "Labyrinth", NULL, NULL);
	while (!glfwWindowShouldClose(game))
	{

		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
			glColor3f(1,1,1); glVertex2f(1,1);
			glVertex2f(0, 1);
			glVertex2f(1, 0);
		glEnd();
		glfwPollEvents();
	}
	glfwDestroyWindow(game);
	glfwTerminate();
}