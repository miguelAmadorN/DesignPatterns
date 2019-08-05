#ifndef SUBJECT_H_
#define SUBJECT_H_
#include "Observer.h"
class Subject
{
public:
	virtual void addObserver(Observer *observer) = 0;
	//virtual void removeObserver(Observer *observer) = 0;
	virtual void notifyObservers(int data) = 0;
};


#endif 
