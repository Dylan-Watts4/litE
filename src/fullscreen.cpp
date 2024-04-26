#include "fullscreen.h"

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