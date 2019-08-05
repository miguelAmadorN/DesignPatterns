#ifndef GUN_H_
#define GUN_H_
#include <stdio.h>
/*
Receiver
*/

class Gun
{
public:
	Gun();
	~Gun();
	void reload();
	int shot();
private:
	const char MaxBullets = 10; 
	int bullets;	
};

//Following code should be in a .cpp file

Gun::Gun(){ bullets = 0; }
Gun::~Gun(){}

void Gun::reload()
{
	bullets = MaxBullets;
	printf("Reloaded gun\n");
}

int Gun::shot()
{
	if(bullets > 0)
	{
		printf("Shot\n");
		bullets--;
	}
	else
	{
		printf("Reload!\n" );
	}
	return bullets;
}
#endif