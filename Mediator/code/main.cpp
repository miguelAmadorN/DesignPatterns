#include "ConcreteMediator.h"
#include "ConcreteColleague.h"


int main(int argc, char **argv)
{
	Mediator *concreteMediator = new ConcreteMediator();

	char namec1[10] = "Juan\0";
	char namec2[10] = "Pedro\0";
	
	Colleague *colleague1 = new ConcreteColleague(concreteMediator);
	colleague1->setId(1);
	colleague1->setName(namec1);

	Colleague *colleague2 = new ConcreteColleague(concreteMediator);
	colleague2->setId(2);
	colleague2->setName(namec2);

	concreteMediator->addColleague(colleague1);
	concreteMediator->addColleague(colleague2);

	char message[30] = "Hello! how are you?\0";
	colleague1->sendMessage(message, 2);
	return 0;
}