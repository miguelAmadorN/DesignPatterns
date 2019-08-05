#ifndef CONCRETESUBJECT_H_
#define CONCRETESUBJECT_H_
#include <vector>
#include <iterator>
#include "Observer.h"
#include "Subject.h"
using namespace std;

class ConcreteSubject: public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void addObserver(Observer *observer);
	//void removeObserver(Observer *observer);
	void notifyObservers(int data);
private:
    vector<Observer *> obs;
    vector<Observer *>::iterator ptr;
	
};

ConcreteSubject::ConcreteSubject(){}
    ConcreteSubject::~ConcreteSubject(){}

	void ConcreteSubject::addObserver(Observer *observer)
	{
        obs.push_back(observer);
	}

	void ConcreteSubject::notifyObservers(int data)
	{
        for(ptr = obs.begin(); ptr != obs.end(); ptr++)
		{
			(*ptr) -> update(data);
		}
	}

#endif