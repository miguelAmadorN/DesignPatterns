#ifndef WINDOWSMESSAGE_H_
#define WINDOWSMESSAGE_H_
#include "Messages.h"
/*
	Concrete product
*/

class WindowsMessage: public Messages
{
public: 
	WindowsMessage();
	void getMessage();
};
/*
	Following declarations should be in a .cpp file
*/
WindowsMessage::WindowsMessage(){}
void WindowsMessage::getMessage()
{
	printf("This is Windows\n");
}
#endif
