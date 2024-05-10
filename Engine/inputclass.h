#pragma once

// The input class handles the user input from the keyboard. This class is given input from the SystemClass::MessageHandler function. 
// The input object will store the state of each key in a keyboard array.
//  When queried it will tell the calling functions if a certain key is pressed.

#ifndef _INPUTCLASS_H_
#define _INPUTCLASS_H_


////////////////////////////////////////////////////////////////////////////////
// Class name: InputClass
////////////////////////////////////////////////////////////////////////////////
class InputClass
{
public:
	InputClass();
	InputClass(const InputClass&);
	~InputClass();

	void Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};

#endif
