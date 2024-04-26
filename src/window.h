/*
    Author:     D.Watts
    Date:       16/04/24
    Version:    0.0.1
    Desc:
        This header file will store class definitions for Window and all
        children of Window.
*/

#ifndef WINDOW_H
#define WINDOW_H

#include "../include/glad/glad.h"
#include <GLFW/glfw3.h>

// Base class for the windows
class Window {
protected:
    // ---------- Atributes ----------
    // Window
    GLFWwindow* window;
    // Monitor <- MOVE TO FULLSCREEN
    GLFWmonitor* monitor;
    // Video mode of the monitor <- MOVE TO FULLSCREEN
    struct CustomVidMode* vidmode;

    // ---------- Functions ----------
    // Get the primary monitor <- MOVE TO FULLSCREEN
    void initMonitor ();
    // Generate the vidmode for the window <- MOVE TO FULLSCREEN
    void initVidMode ();
    // Update window parameters
    virtual void updateWindowParams ();
    // Init the window hints
    virtual void initWindowHints ();
    // Load GLAD
    void loadGLAD ();
public:
    // Create the window obj
    // Param: width, height
    Window (int,int);
    // Create fullscreen window with monitor specs
    Window ();
    // Deconstructor to destroy window
    ~Window ();
    // Change the refresh rate
    // Param: refreshRate
    void setRefreshRate (int refreshRate); // <- Fullscreen
    // Get the refresh rate
    // Return: refreshRate
    int getRefreshRate (); // <- Fullscreen
    // Set the width and height
    // Param: width, height
    void setResolution (int,int);
    // Get the width of the window
    // Return: width
    int getWidth ();
    // Get the height of the window
    // Return: height
    int getHeight();
    // Create the window
    // Param: title
    void createWindow (char*);
    // Destroy the window
    void destroyWindow ();
};

// Probably a bad idea, but customisation??
struct CustomVidMode {
    int width;
    int height;
    int redBits;
    int greenBits;
    int blueBits;
    int refreshRate;
};

// Child class for windowed windows
class WindowedWindow : public Window {
private:
    // Width and height of the window
    int width, height;
public:
    // Constructor to set up window
    // Param: width, height
    WindowedWindow (int,int);
}

// Child class for fullscreen windows
class FullscreenWindow : public Window {
private:
    // GLFWwindow object - holds the window
    GLFWwindow* window;
    // GLFWmonitor object - holds monitor info
    GLFWmonitor* monitor;
public:
    // Constructor to set up window
    FullscreenWindow ();
}

#endif