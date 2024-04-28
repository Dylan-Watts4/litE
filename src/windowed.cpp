#include "windowed.h"
#include <iostream>

// ---------- Windowed ----------
// ---------- Public ----------

Windowed::Windowed (int width, int height, char* title) {
    this->width = width;
    this->height = height;
    glfwInit();
    initWindow(title);
}

Windowed::~Windowed () {
    // Destroy objs
    delete window;
}

void Windowed::setResolution (int width, int height) {
    this->width = width;
    this->height = height;
}

int Windowed::getWidth () {
    return this->width;
}

int Windowed::getHeight () {
    return this->height;
}

void Windowed::createWindow () {
    loadGLAD();
    glViewport(0, 0, width, height);
    glfwSetFramebufferSizeCallback(window, frameBufferSizeCallback);
    while (!glfwWindowShouldClose(window)) {
        processInput(window);
        render(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

// ---------- Private ----------

void Windowed::initWindow (char* title) {
    initWindowHints();
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    glfwMakeContextCurrent(window);
}

void Windowed::initWindowHints () {

}

void frameBufferSizeCallback (GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
