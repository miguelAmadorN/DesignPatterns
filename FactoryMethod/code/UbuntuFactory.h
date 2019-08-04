#ifndef UBUNTUFACTORY_H_
#define UBUNTUFACTORY_H_
#include "AbstractFactory.h"
#include "UbuntuMessage.h"
#include "UbuntuWarning.h"
/*
	Concrete Factory
*/
class UbuntuFactory: public AbstractFactory
{
public: 
	UbuntuFactory();
	Messages* getMessages();
	Warnings* getWarnings();
};
/*
	Following declarations should be in a .cpp file
*/
UbuntuFactory::UbuntuFactory(){}

Messages* UbuntuFactory::getMessages()
{
	return new UbuntuMessage();
}

Warnings* UbuntuFactory::getWarnings()
{
	return new UbuntuWarning();
}

#endif
