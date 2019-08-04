#ifndef OBJECT_H_
#define OBJECT_H_
#include "Singleton.h"

class Object
{
private:
	Singleton* singleton;
public:
	Object();
	void print();

};

/*
	Following declarations should be in a .cpp file
*/
Object::Object()
{
	singleton = Singleton::getInstance();
}

void Object::print()
{
	printf("N: %d\n", singleton -> number );
}

#endif
