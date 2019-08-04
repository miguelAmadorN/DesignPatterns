#ifndef GIRLFRIEND_H
#define GIRLFRIEND_H
#include "state.h"
#include <iostream>

class Girlfriend 
{
	public:
		Girlfriend();
		void getHug();
		void getKiss();
		void makeAngry();
		void makeHappy();
	private: 
		state *s;

};



#endif
