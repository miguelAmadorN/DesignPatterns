#ifndef CONCRETEMEDIATOR_H_
#define CONCRETEMEDIATOR_H_

#include "Mediator.h"
#include <vector>
#include <iterator>
using namespace std;

class ConcreteMediator: public Mediator
{
private:
	vector<Colleague *> colleagues; //Data base
	vector<Colleague *>::iterator ptr;
public:
	ConcreteMediator();
	void notifyToColleague(char *message, int idColleague, Colleague *colleague);
	void addColleague(Colleague *colleague);
	//removeColleague, etc.
};

ConcreteMediator::ConcreteMediator(){}
void ConcreteMediator::addColleague(Colleague *colleague)
{
	colleagues.push_back(colleague);
}

void ConcreteMediator::notifyToColleague(char *message, int idColleague, Colleague *colleague)
{
	for(ptr = colleagues.begin(); ptr < colleagues.end(); ptr++)
	{
		if((*ptr)->getId() == idColleague)
		{
			(*ptr)->receiveMessage(message, colleague);
			break;
		}
	}
}

#endif