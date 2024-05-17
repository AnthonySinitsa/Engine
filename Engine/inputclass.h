// The input class handles the user input from the keyboard. This class is given input from the SystemClass::MessageHandler function. 
// The input object will store the state of each key in a keyboard array.
//  When queried it will tell the calling functions if a certain key is pressed.

#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_

///////////////////////////////
// PRE-PROCESSING DIRECTIVES //
///////////////////////////////
#define DIRECTINPUT_VERSION 0x0800

/////////////
// LINKING //
/////////////
#pragma comment(lib, "dinput8.lib")
#pragma comment(lib, "dxguid.lib")

//////////////
// INCLUDES //
//////////////
#include <dinput.h>

////////////////////////////////////////////////////////////////////////////////
// Class name: InputClass
////////////////////////////////////////////////////////////////////////////////
class InputClass
{
public:
    InputClass();
    InputClass(const InputClass&);
    ~InputClass();

    bool Initialize(HINSTANCE, HWND, int, int);
    void Shutdown();
    bool Frame();

    bool IsEscapePressed();
    bool IsLeftArrowPressed();
    bool IsRightArrowPressed();

    void GetMouseLocation(int&, int&);
    bool IsMousePressed();

private:
    bool ReadKeyboard();
    bool ReadMouse();
    void ProcessInput();

private:
    IDirectInput8* m_directInput;
    IDirectInputDevice8* m_keyboard;
    IDirectInputDevice8* m_mouse;

    unsigned char m_keyboardState[256];
    DIMOUSESTATE m_mouseState;

    int m_screenWidth, m_screenHeight, m_mouseX, m_mouseY;
};

#endif
