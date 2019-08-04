#include "Singleton.h"
#include "Object.h"
int main()
{
	Singleton *singleton = Singleton::getInstance();
	printf("N: %d\n", singleton -> number );

	singleton -> number++;

	Object *object = new Object();
	object -> print();

	return 0;
}
