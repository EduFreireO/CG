#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    // Inicialize GLFW
    if (!glfwInit()) {
        return -1;
    }

    // Crie uma janela GLFW
    GLFWwindow* window = glfwCreateWindow(800, 600, "Minha Janela OpenGL", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }

    // Torne a janela atual
    glfwMakeContextCurrent(window);

    // Inicialize GLEW
    if (glewInit() != GLEW_OK) {
        return -1;
    }

    // Loop principal
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        // Renderize aqui!

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Encerre o GLFW
    glfwTerminate();

    return 0;
}