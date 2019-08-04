#ifndef ELECTRICIAN_H
#define ELECTRICIAN_H
#include "Visitor.h"
#include "Automobile.h"
#include "Motorcycle.h"
class Electrician: public Visitor
{
	private:
		int automobileCosts = 1000;
		int motorcycleCosts = 2350;
	public:
		Electrician();
		void visit(Automobile *automobile);
		void visit(Motorcycle *motorcycle);
};

#endif
