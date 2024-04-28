#include "windowed.h"
#include <iostream>
#include <functional>

// Needs to be defined above main
void render (GLFWwindow* w) {
    // Do stuff
    std::cout << "A";
}

// Close call back function
void close_callback (GLFWwindow* window) {
    std::cout << "You tried closing" << std::endl;
}

int main () {
    Windowed window(600,600,"Test");
    // You can set hints this way!
    glfwSetWindowCloseCallback(window.getWindow(), close_callback);
    std::function<void(GLFWwindow*)> r = render;
    window.setRender(r);
    window.createWindow();
    return 0;
}
