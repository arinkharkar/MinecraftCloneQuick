#pragma once

#include <iostream>
#include <Windows.h>
#include "Include/glad/glad.h"
#include "Include/glfw3.h"




constexpr static float rgb(int r, int g, int b) { 
	return float((r << 16) | (g << 8) | (b)) / 255.0f; 
};

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

void process_input(GLFWwindow* window);