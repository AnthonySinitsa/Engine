// The application class is the other object that is created by the system class. All the graphics functionality in this application will be encapsulated in this class. 
// I will also use the header in this file for all the graphics related global settings that we may want to change such as full screen or windowed mode. 
// Currently this class will be empty but in future tutorials will contain all the graphics objects.

#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_


//////////////
// INCLUDES //
//////////////
#include "d3dclass.h"
#include "cameraclass.h"
#include "modelclass.h"
#include "textureshaderclass.h"
#include "lightshaderclass.h"
#include "lightclass.h"


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
	bool Render(float);

private:

	D3DClass* m_Direct3D;
	CameraClass* m_Camera;
	ModelClass* m_Model;
	TextureShaderClass* m_TextureShader;
	LightShaderClass* m_LightShader;
	LightClass* m_Light;
};

#endif
