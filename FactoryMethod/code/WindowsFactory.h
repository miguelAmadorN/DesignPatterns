
#ifndef WINDOWSFACTORY_H_
#define WINDOWSFACTORY_H_
#include "AbstractFactory.h"
#include "WindowsMessage.h"
#include "WindowsWarning.h"
/*
	Concrete Factory
*/
class WindowsFactory: public AbstractFactory
{
public: 
	WindowsFactory();

	Messages* getMessages();
	Warnings* getWarnings();
};
/*
	Following declarations should be in a .cpp file
*/
WindowsFactory::WindowsFactory(){}

Messages* WindowsFactory::getMessages()
{
	return new WindowsMessage();
}

Warnings* WindowsFactory::getWarnings()
{
	return new WindowsWarning();
}



#endif
