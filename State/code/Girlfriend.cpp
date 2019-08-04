#include "Girlfriend.h"
#include "happy.h"
#include "angry.h"

Girlfriend::Girlfriend()
{

}

void Girlfriend::getHug()
{
	s -> getHug();
}

void Girlfriend::getKiss()
{
	s -> getKiss();
}

void Girlfriend::makeAngry()
{
	s = new angry(); 
}

void Girlfriend::makeHappy()
{
	s = new happy();
}
