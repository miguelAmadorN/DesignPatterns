#include <iostream>
#include "Electrician.h"

Electrician::Electrician(){}

void Electrician::visit(Automobile *automobile)
{
	automobile->setRepairs(" Fixed battery\n");
	automobile->addRepairCosts(automobileCosts);
}

void Electrician::visit(Motorcycle *motorcycle)
{
	motorcycle->setRepairs(" Fixed mini battery\n");
	motorcycle->addRepairCosts(motorcycleCosts);
}

