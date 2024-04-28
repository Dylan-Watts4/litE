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

#include <functional>

#include "../include/glad/glad.h"
#include <GLFW/glfw3.h>

// Base class for the windows
class Window {
protected:
    // ---------- Atributes ----------
    // Window
    GLFWwindow* window;
    // Render function
    std::function<void(GLFWwindow*)> render; // Could remove pointer and use internal var
    // ---------- Functions ----------
    // Initialise the window variable
    // Param: title
    virtual void initWindow ();
    // Init the window hints
    virtual void initWindowHints ();
    // Load GLAD
    void loadGLAD ();
public:
    // Constructor for Window
    Window ();
    // Get the GLFWwindow*
    virtual GLFWwindow* getWindow ();
    // Set the width and height
    // Param: width, height
    virtual void setResolution ();
    // Get the width of the window
    // Return: width
    virtual int getWidth ();
    // Get the height of the window
    // Return: height
    virtual int getHeight ();
    // Set the render function
    // Param: std::function<void(GLFWwindow*)> render
    virtual void setRender (std::function<void(GLFWwindow*)>);
    // Set a glfw hint, just easier :)
    // Param: hint, value
    void setHint (int,int);
    // Set a glfw window attribute
    // Param: window, hint, val
    void setAttribute (GLFWwindow*,int,int);
    // Create the window
    // Param: title
    virtual void createWindow ();
    // Hide the window
    void hide ();
    // Show the window
    void show ();
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

#endif