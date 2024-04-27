#ifndef WINDOWED_H
#define WINDOWED_H

#include "window.h"
#include <GLFW/glfw3.h>

void frameBufferSizeCallback (GLFWwindow*,int,int);

// Child class for windowed windows
class Windowed : public Window {
private:
    // Width and height of the window
    int width, height;
    // Initialise the window var
    // Param: title
    void initWindow (char*);
    // Set the window hints
    void initWindowHints ();
public:
    // Constructor to set up window
    // Param: width, height, title
    Windowed (int,int,char*);
    // Destoryer
    ~Windowed ();
    // Set the resolution of the window
    // Param: width, height
    void setResolution (int,int);
    // Get the width of the window
    // Return: width
    int getWidth ();
    // Get the height of the window
    // Return: height
    int getHeight ();
    void createWindow();
};

#endif