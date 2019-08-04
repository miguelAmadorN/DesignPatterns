#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_
#include "Messages.h"
#include "Warnings.h"
/*
	Abstract Factory interface 
*/

class AbstractFactory
{

public:
	virtual Messages* getMessages() = 0;
	virtual Warnings* getWarnings() = 0;

};

#endif 