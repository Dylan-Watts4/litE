#include "windowed.h"

//#include "../include/glad/glad.h"
//#include "glad.c"
//#include <GLFW/glfw3.h>

int main () {
    char title[] = "Test";
    Windowed* window = new Windowed(800,600,title);
    window->createWindow();
    window->destroyWindow();
    delete window;
    return 0;
}