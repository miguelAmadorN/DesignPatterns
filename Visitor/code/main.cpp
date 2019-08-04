#include <iostream>
#include "Automobile.h"
#include "Motorcycle.h"
#include "Mechanic.h"
#include "Electrician.h"
using namespace std;

int main()
{
	Automobile *automobile = new Automobile();
	Motorcycle *motorcycle = new Motorcycle();

	Mechanic mechanic;
	Electrician electrician;

	automobile->accept(mechanic);
	automobile->accept(electrician);

	motorcycle->accept(mechanic);
	motorcycle->accept(electrician);		

	cout << "Automobile:" << automobile->getRepairs() << " Costs: " << automobile->getRepairCosts() <<endl;

	cout << "Motorcycle:" << motorcycle->getRepairs() << " Costs: " <<  motorcycle->getRepairCosts()<<endl;

	return 0;
}
