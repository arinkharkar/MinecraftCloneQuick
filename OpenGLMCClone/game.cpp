#include <vector> 
#include "Include/glfw3.h"
#include "game.h"

#ifndef M_PI 
#define M_PI 3.1415926535
#endif

using std::vector;
// matrix "4 square" meaning a 4x4 matrix
typedef float matrix_m4s[16];

struct vector3 {
    float x, y, z;
};

struct triangle {
    vector3 points[3];
};

struct mesh {
    vector<triangle> tris;
};

mesh meshCube;


void game_start() {
	matrix_m4s matrix_proj = {0};
	meshCube.tris = {
		// SOUTH
	{ 0.0f, 0.0f, 0.0f,    0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 0.0f },
	{ 0.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 0.0f, 0.0f },

		// EAST                                                      
	{ 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f },
	{ 1.0f, 0.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 0.0f, 1.0f },

	// NORTH                                                     
	{ 1.0f, 0.0f, 1.0f,    1.0f, 1.0f, 1.0f,    0.0f, 1.0f, 1.0f },
	{ 1.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 0.0f, 1.0f },

	// WEST                                                      
	{ 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 1.0f,    0.0f, 1.0f, 0.0f },
	{ 0.0f, 0.0f, 1.0f,    0.0f, 1.0f, 0.0f,    0.0f, 0.0f, 0.0f },

	// TOP                                                       
	{ 0.0f, 1.0f, 0.0f,    0.0f, 1.0f, 1.0f,    1.0f, 1.0f, 1.0f },
	{ 0.0f, 1.0f, 0.0f,    1.0f, 1.0f, 1.0f,    1.0f, 1.0f, 0.0f },

	// BOTTOM                                                    
	{ 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f },
	{ 1.0f, 0.0f, 1.0f,    0.0f, 0.0f, 0.0f,    1.0f, 0.0f, 0.0f },
	};

	float fNear = 0.1f;
	float fFar = 1000.0f;
	float fFov = M_PI;
	float fAspectRatio = (float)DEFAULT_SCREEN_HEIGHT / (float)DEFAULT_SCREEN_WIDTH;
	float fFovRad = 1.0f / tanf(fFov * 0.5f);
	matrix_proj
}

void game_update(GLFWwindow* window) {
	for (const auto& tri : meshCube.tris) {

	}
}