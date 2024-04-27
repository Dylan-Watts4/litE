#include "fullscreen.h"

// ---------- Fullscreen ----------
// ---------- Public ----------

Fullscreen::Fullscreen (int width, int height, char* title) {
    this->width = width;
    this->height = height;
    initMonitor();
    initWindow(title);
}

Fullscreen::~Fullscreen () {
    // Destroy objs
    delete window;
    delete monitor;
}

void Fullscreen::setResolution (int width, int height) {
    this->width = width;
    this->height = height;
}

int Fullscreen::getWidth () {
    return this->width;
}

int Fullscreen::getHeight () {
    return this->height;
}

void Fullscreen::createWindow () {
    loadGLAD();
}

// ---------- Private ----------

void Fullscreen::initMonitor () {
    monitor = glfwGetPrimaryMonitor();
}

void Fullscreen::initWindow (char* title) {
    initWindowHints();
    window = glfwCreateWindow (width, height, title, monitor, NULL);
    glfwMakeContextCurrent(window);
}

void Fullscreen::initWindowHints () {

}