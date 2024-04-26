#ifndef FULLSCREEN_H
#define FULLSCREEN_H

#include "window.h"
#include <GLFW/glfw3.h>

// Child class for fullscreen windows
class FullscreenWindow : public Window {
private:
    // GLFWmonitor object - holds monitor info
    GLFWmonitor* monitor;
    // Width and height of the window
    int width, height;
    // Initialise the monitor
    void initMonitor ();
    // Initialise the window
    // Param: title 
    void initWindow (char*);
    // Set the window hints
    void initWindowHints ();
public:
    // Constructor to set up window
    // Param: width, height, title
    FullscreenWindow (int,int,char*);
    // Set the resolution of the window
    // Param: width, height
    void setResolution (int,int);
    // Get the width of the window
    // Return: width
    int getWidth ();
    // Get the height of the window
    // Return: height
    int getHeight ();
    // Creates the window
    void createWindow ();
};

#endif