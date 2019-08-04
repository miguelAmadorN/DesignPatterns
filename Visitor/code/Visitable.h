#ifndef VISITABLE_H_
#define VISITABLE_H_
#include "Visitor.h"

class Visitable
{
	public:
		virtual void accept(Visitor *visitor) {}
};

#endif
