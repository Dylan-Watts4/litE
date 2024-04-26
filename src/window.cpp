#include "window.h"

//#include <GLFW/glfw3.h>
//#include "../include/glad/glad.h"
//#include "glad.c"

// ---------- Public ----------

Window::Window (int width, int height) {
    initMonitor();
    initVidMode();
    vidmode->width = width;
    vidmode->height = height;
    initWindowHints();
}

Window::Window () {
    initMonitor();
    initVidMode();
    initWindowHints();
}

Window::~Window () {
    destroyWindow();
}

void Window::setRefreshRate (int freq) {
    vidmode->refreshRate = freq;
    glfwWindowHint(GLFW_REFRESH_RATE, vidmode->refreshRate);
    updateWindowParams();
}

int Window::getRefreshRate () {
    return vidmode->refreshRate;
}

void Window::setResolution (int width, int height) {
    vidmode->width = width;
    vidmode->height = height;
    updateWindowParams();
}

int Window::getWidth () {
    return vidmode->width;
}

int Window::getHeight () {
    return vidmode->height;
}

void Window::createWindow (char* title) {
    window = glfwCreateWindow(vidmode->width, vidmode->height, title, monitor, NULL);
    glfwMakeContextCurrent(window);
    loadGLAD();
}

void Window::destroyWindow () {
    glfwDestroyWindow(window);
}

// ---------- Private ----------

void Window::initMonitor () {
    monitor = glfwGetPrimaryMonitor();
}

void Window::initVidMode () {
    const GLFWvidmode* temp = glfwGetVideoMode(monitor);
    vidmode->width = temp->width;
    vidmode->height = temp->height;
    vidmode->redBits = temp->redBits;
    vidmode->greenBits = temp->greenBits;
    vidmode->blueBits = temp->blueBits;
    vidmode->refreshRate = temp->refreshRate;
    updateWindowParams();
}

void Window::updateWindowParams () {
    glfwSetWindowMonitor(window, monitor, 0, 0, vidmode->width, vidmode->height, vidmode->refreshRate);
}

void Window::initWindowHints () {
    glfwWindowHint(GLFW_RED_BITS, vidmode->redBits);
    glfwWindowHint(GLFW_GREEN_BITS, vidmode->greenBits);
    glfwWindowHint(GLFW_BLUE_BITS, vidmode->blueBits);
    glfwWindowHint(GLFW_REFRESH_RATE, vidmode->refreshRate);
}

void Window::loadGLAD () {
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}