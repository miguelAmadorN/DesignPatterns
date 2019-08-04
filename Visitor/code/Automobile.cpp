#include <iostream>
#include "Automobile.h"
#include <stdlib.h>


Automobile::Automobile()
{

}

void Automobile::accept(Visitor &visitor)
{
	visitor.visit(this);
}

void Automobile::addRepairCosts(int cost)
{
	repairCost += cost;
}

void Automobile::setRepairs( std::string repair)
{
	repairs += repair;	
}

int Automobile::getRepairCosts()
{
	return repairCost;
}

std::string Automobile::getRepairs()
{
	return repairs;
}



