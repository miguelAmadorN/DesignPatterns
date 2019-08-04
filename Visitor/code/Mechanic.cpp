#include <iostream>
#include "Mechanic.h"

Mechanic::Mechanic(){}

void Mechanic::visit(Automobile *automobile)
{
	automobile->setRepairs(" 4 cylinders Fixed\n");
	automobile->addRepairCosts( automobileCosts );	
}

void Mechanic::visit(Motorcycle *motorcycle)
{
	motorcycle->setRepairs(" 2 cylinders Fixed\n");
	motorcycle->addRepairCosts( motorcycleCosts );
}
