#ifndef CONCRETEOBSERVER_H_
#define CONCRETEOBSERVER_H_
#include "Observer.h"
#include <stdio.h>

class ConcreteObserver: public Observer
{
public:
	ConcreteObserver();
	~ConcreteObserver();
	void update(int data);	
};

ConcreteObserver::ConcreteObserver(){}
ConcreteObserver::~ConcreteObserver(){}
void ConcreteObserver::update(int data)
{
	printf("ASCII in number is %c\n", data);
}

#endif