#ifndef MEDIATOR_H_
#define MEDIATOR_H_

#include "Colleague.h"

class Mediator
{
public:
	virtual void notifyToColleague(char *message, int idColleague, Colleague *colleague) = 0;
	virtual void addColleague(Colleague *colleague) = 0;
};


#endif