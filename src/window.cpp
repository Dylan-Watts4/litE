#include "window.h"

//#include <GLFW/glfw3.h>
//#include "../include/glad/glad.h"
//#include "glad.c"

// ---------- Window ----------
// ---------- Public ----------

Window::Window () {}

void Window::destroyWindow () {
    glfwDestroyWindow(window);
}

// ---------- Protected ----------

void Window::loadGLAD () {
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}

// ---------- Windowed ----------
// ---------- Public ----------

WindowedWindow::WindowedWindow (int width, int height, char* title) {
    this->width = width;
    this->height = height;
    initWindow(title);
}

void WindowedWindow::setResolution (int width, int height) {
    this->width = width;
    this->height = height;
}

int WindowedWindow::getWidth () {
    return this->width;
}

int WindowedWindow::getHeight () {
    return this->height;
}

void WindowedWindow::createWindow () {
    loadGLAD();
    glViewport(0, 0, width, height);
    glfwSetFramebufferSizeCallback(window, frameBufferSizeCallback);
}

// ---------- Private ----------

void WindowedWindow::initWindow (char* title) {
    initWindowHints();
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    glfwMakeContextCurrent(window);
}

void WindowedWindow::initWindowHints () {

}

void frameBufferSizeCallback (GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

// ---------- Fullscreen ----------
// ---------- Public ----------

FullscreenWindow::FullscreenWindow (int width, int height, char* title) {
    this->width = width;
    this->height = height;
    initMonitor();
    initWindow(title);
}

void FullscreenWindow::setResolution (int width, int height) {
    this->width = width;
    this->height = height;
}

int FullscreenWindow::getWidth () {
    return this->width;
}

int FullscreenWindow::getHeight () {
    return this->height;
}

void FullscreenWindow::createWindow () {
    loadGLAD();
}

// ---------- Private ----------

void FullscreenWindow::initMonitor () {
    monitor = glfwGetPrimaryMonitor();
}

void FullscreenWindow::initWindow (char* title) {
    initWindowHints();
    window = glfwCreateWindow (width, height, title, monitor, NULL);
    glfwMakeContextCurrent(window);
}

void FullscreenWindow::initWindowHints () {

}