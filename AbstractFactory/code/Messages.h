#ifndef MESSAGES_H
#define MESSAGES_H
#include <stdio.h>

/*
Abstract product
*/

class Messages
{
public:
	virtual void getMessage() = 0;
};

#endif