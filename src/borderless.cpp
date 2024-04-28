#include "borderless.h"

// ---------- Borderless ----------
// ---------- Public ----------

Borderless::Borderless (char* title) {
    glfwInit();
    initMonitor();
    initVidmode();
    initWindow(title);
}

Borderless::~Borderless () {
    delete window;
    delete monitor;
    delete mode;
}

void Borderless::createWindow () {
    loadGLAD();
    glViewport(0, 0, mode->width, mode->height);
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

// ---------- Private ----------

void Borderless::initMonitor () {
    monitor = glfwGetPrimaryMonitor();
}

void Borderless::initVidmode () {
    mode = glfwGetVideoMode(monitor);
}

void Borderless::initWindow (char* title) {
    initWindowHints();
    window = glfwCreateWindow(mode->width, mode->height, title, monitor, NULL);
    glfwMakeContextCurrent(window);
}

void Borderless::initWindowHints () {
    glfwWindowHint(GLFW_RED_BITS, mode->redBits);
    glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
    glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
    glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
}