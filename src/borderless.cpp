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
        processInput(window);
        render(window);
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
    setHint(GLFW_RED_BITS, mode->redBits);
    setHint(GLFW_GREEN_BITS, mode->greenBits);
    setHint(GLFW_BLUE_BITS, mode->blueBits);
    setHint(GLFW_REFRESH_RATE, mode->refreshRate);
}