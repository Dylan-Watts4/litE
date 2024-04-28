#ifndef BORDERLESS_H
#define BORDERLESS_H

#include "window.h"
#include <GLFW/glfw3.h>

class Borderless : public Window {
private:
    // Monitor to display
    GLFWmonitor* monitor;
    // Video mode for the monitor
    const GLFWvidmode* mode;
    // Initialise the monitor
    void initMonitor ();
    // Initialise the video mode
    void initVidmode ();
    // Initialise the window
    // Param: title
    void initWindow (char*);
    // Set the window hints
    void initWindowHints ();
public:
    // Constructor to set up window
    // Param: title
    Borderless (char*);
    // Destroyer
    ~Borderless ();
    // Create the window
    void createWindow ();
};

#endif