#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include "Visitable.h"
#include <string>

class Automobile: public Visitable
{
	public:
		Automobile();
		void accept(Visitor &visitor);
		void addRepairCosts(int cost);
		void setRepairs(std::string repairs);
		int  getRepairCosts();
		std::string getRepairs();
	private:
		int  repairCost;
		std::string repairs;
};

#endif
