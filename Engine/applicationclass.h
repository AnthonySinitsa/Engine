// The application class is the other object that is created by the system class. All the graphics functionality in this application will be encapsulated in this class. 
// I will also use the header in this file for all the graphics related global settings that we may want to change such as full screen or windowed mode. 
// Currently this class will be empty but in future tutorials will contain all the graphics objects.
#ifndef _APPLICATIONCLASS_H_
#define _APPLICATIONCLASS_H_


///////////////////////
// MY CLASS INCLUDES //
///////////////////////
#include "d3dclass.h"
#include "inputclass.h"
#include "cameraclass.h"
#include "modelclass.h"
#include "lightclass.h"
#include "lightshaderclass.h"
#include "fontshaderclass.h"
#include "fontclass.h"
#include "textclass.h"
#include "modellistclass.h"
#include "timerclass.h"
#include "positionclass.h"
#include "frustumclass.h"


/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = false;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.3f;


////////////////////////////////////////////////////////////////////////////////
// Class name: ApplicationClass
////////////////////////////////////////////////////////////////////////////////
class ApplicationClass
{
public:
    ApplicationClass();
    ApplicationClass(const ApplicationClass&);
    ~ApplicationClass();

    bool Initialize(int, int, HWND);
    void Shutdown();
    bool Frame(InputClass*);

private:
    bool Render();
    bool UpdateRenderCountString(int);

private:
    D3DClass* m_Direct3D;
    CameraClass* m_Camera;
    ModelClass* m_Model;
    LightClass* m_Light;
    LightShaderClass* m_LightShader;
    FontShaderClass* m_FontShader;
    FontClass* m_Font;
    TextClass* m_RenderCountString;
    ModelListClass* m_ModelList;
    TimerClass* m_Timer;
    PositionClass* m_Position;
    FrustumClass* m_Frustum;
    XMMATRIX m_baseViewMatrix;
};

#endif