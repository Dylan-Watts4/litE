#include "window.h"

//#include <GLFW/glfw3.h>
//#include "../include/glad/glad.h"
//#include "glad.c"

// ---------- Window ----------
// ---------- Public ----------

Window::Window () {}

GLFWwindow* Window::getWindow () {
    return window;
}

void Window::destroyWindow () {
    glfwDestroyWindow(window);
}

void Window::setResolution () {}
int Window::getWidth () {return 1;}
int Window::getHeight () {return 1;}
void Window::setRender (std::function<void(GLFWwindow*)> r) {}
void Window::createWindow () {}

// ---------- Protected ----------

void Window::loadGLAD () {
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

void Window::initWindow () {}
void Window::initWindowHints () {}