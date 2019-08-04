#ifndef VISITOR_H_
#define VISITOR_H_
/**
forward declaration
**/
class Automobile;
class Motorcycle;

class Visitor
{
	public: 
		virtual void visit(Automobile *automobile) = 0;
		virtual void visit(Motorcycle *motorcycle) = 0;
};

#endif
