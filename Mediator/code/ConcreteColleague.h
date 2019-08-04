#ifndef CONCRETECOLLEAGUE_H_
#define CONCRETECOLLEAGUE_H_
#include <stdio.h>
#include <string.h>
#include "Colleague.h"

class ConcreteColleague: public Colleague
{
public:
	ConcreteColleague(Mediator* mediator);
	void sendMessage(char *message, int idColleague);
	void receiveMessage(char *message, Colleague *colleague);

	int getId();
	void setId(int id);
	char* getName();
	void setName(char name[10]);
private:
	Mediator* mediator;
	int id;
	char name[10];
	//specific attributes and methods of concrete colleague 
};

ConcreteColleague::ConcreteColleague(Mediator* mediator)
{
	this -> mediator = mediator; 
}

void ConcreteColleague::sendMessage(char *message, int idColleague)
{
	mediator->notifyToColleague(message, idColleague, this);
}

void ConcreteColleague::receiveMessage(char *message, Colleague *colleague)
{
	printf("%s -- Message from %s: %s\n", name, colleague -> getName(), message);
}

int ConcreteColleague::getId()
{
	return id;
}

void ConcreteColleague::setId(int id)
{
	this->id = id;
}

char* ConcreteColleague::getName()
{
	return name;
}

void ConcreteColleague::setName(char name[10])
{
	strncpy(this->name, name, 10);
}

#endif