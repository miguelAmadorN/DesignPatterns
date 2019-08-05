#include "ConcreteSubject.h"
#include "ConcreteObserver.h"
#include "ConcreteObserver2.h"

int main()
{
	Subject *subject = new ConcreteSubject();

	Observer *o1 = new ConcreteObserver();
	Observer *o2 = new ConcreteObserver2();

	subject->addObserver(o1);
	subject->addObserver(o2);

	printf("Enter a number, enter zero for finishing \n");
	int data;
	do
	{
		scanf("%d", &data);
		subject-> notifyObservers(data);	
	}while(data);

	return 0;
}