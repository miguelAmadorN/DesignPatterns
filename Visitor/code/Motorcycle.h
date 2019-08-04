#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Visitable.h"
#include <string>
/**
	visitor is abstract class so I have to write
	void accept(Visitor *visitor);
	void accept(Visitor &visitor);
**/

class Motorcycle: public Visitable
{
	public:
		Motorcycle();
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
