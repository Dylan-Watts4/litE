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

    // ---------- Functions ----------
    // Initialise the window variable
    // Param: title
    virtual void initWindow (char*);
    // Init the window hints
    virtual void initWindowHints ();
    // Load GLAD
    void loadGLAD ();
public:
    Window();
    // Set the width and height
    // Param: width, height
    virtual void setResolution (int,int);
    // Get the width of the window
    // Return: width
    virtual int getWidth ();
    // Get the height of the window
    // Return: height
    virtual int getHeight();
    // Create the window
    // Param: title
    virtual void createWindow ();
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

void frameBufferSizeCallback (GLFWwindow*,int,int);

// Child class for windowed windows
class WindowedWindow : public Window {
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
    WindowedWindow (int,int,char*);
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