#include "windowed.h"
#include <iostream>
#include <functional>

// Needs to be defined above main
void render (GLFWwindow* w) {
    // Do stuff
    std::cout << "A";
}

int main () {
    Windowed window(600,600,"Test");
    std::function<void(GLFWwindow*)> r = render;
    window.setRender(r);
    window.createWindow();
    return 0;
}
