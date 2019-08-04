#include <iostream>
#include <string.h>
#include "Motorcycle.h"
#include <stdlib.h>

Motorcycle::Motorcycle()
{
}

void Motorcycle::accept(Visitor &visitor)
{
	visitor.visit(this);
}

void Motorcycle::addRepairCosts(int cost)
{
	repairCost += cost;
}

void Motorcycle::setRepairs(std::string repair)
{
	repairs += repair;
}

int Motorcycle::getRepairCosts()
{
	return repairCost;
}

std::string Motorcycle::getRepairs()
{
	return repairs;
}



