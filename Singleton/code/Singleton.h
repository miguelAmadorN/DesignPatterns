#ifndef SINGLETON_H_
#define SINGLETON_H_
#include <stdio.h>

class Singleton
{
private:
	static Singleton *INSTANCE;
	Singleton();

public:
	int number;
	static Singleton* getInstance();

};

/*
	Following declarations should be in a .cpp file
*/
Singleton* Singleton::INSTANCE = new Singleton();
Singleton::Singleton(){ number = 3; }
Singleton* Singleton::getInstance()
{
	return INSTANCE;
}

#endif
