#ifndef MECHANIC_H
#define MECHANIC_H
#include "Visitor.h"
#include "Automobile.h"
#include "Motorcycle.h"

class Mechanic: public Visitor
{
	public:
		Mechanic();
		void visit(Automobile *automobile);
		void visit(Motorcycle *motorcycle);
	private:
		int motorcycleCosts = 1500;
		int automobileCosts  = 2000;
		
};

#endif
