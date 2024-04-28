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

// These are just some wrappers for my memory's sake
void Window::setHint (int hint, int val) {
    glfwWindowHint(hint, val);
}

void Window::setAttribute (GLFWwindow* window, int hint, int value) {
    glfwSetWindowAttrib(window, hint, value);
}

void Window::hide () {
    glfwHideWindow(window);
}

void Window::show () {
    glfwShowWindow(window);
}

void Window::setResolution () {}
int Window::getWidth () {return 1;}
int Window::getHeight () {return 1;}

void Window::setProcessInput (std::function<void(GLFWwindow*)> p) {
    processInput = p;
}

void Window::setRender (std::function<void(GLFWwindow*)> r) {
    render = r;
}

void Window::createWindow () {}

// ---------- Protected ----------

void Window::loadGLAD () {
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

void Window::initWindow () {}
void Window::initWindowHints () {}