#ifndef CONCRETEOBSERVER2_H_
#define CONCRETEOBSERVER2_H_
#include "Observer.h"
#include <stdio.h>
class ConcreteObserver2: public Observer
{
public:
	ConcreteObserver2();
	~ConcreteObserver2();
	void update(int data);	
};

ConcreteObserver2::ConcreteObserver2(){}
ConcreteObserver2::~ConcreteObserver2(){}
void ConcreteObserver2::update(int data)
{
	printf("Another thing with data %d\n", data);
}

#endif