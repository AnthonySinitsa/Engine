#pragma once

// The application class is the other object that is created by the system class. All the graphics functionality in this application will be encapsulated in this class. 
// I will also use the header in this file for all the graphics related global settings that we may want to change such as full screen or windowed mode. 
// Currently this class will be empty but in future tutorials will contain all the graphics objects.

#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_


//////////////
// INCLUDES //
//////////////
#include <windows.h>


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;
// We'll need these four globals to start with.


class ApplicationClass
{
public:
	ApplicationClass();
	ApplicationClass(const ApplicationClass&);
	~ApplicationClass();

	bool Initialize(int, int, HWND);
	void Shutdown();
	bool Frame();

private:
	bool Render();

private:

};

#endif
