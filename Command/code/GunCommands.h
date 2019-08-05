#ifndef GUNCOMMANDS_H_
#define GUNCOMMANDS_H_
#include "Gun.h"
#include "Command.h"
class ReloadGun: public Command
{
public:
	ReloadGun(Gun *gun);
	void execute();
private:
	Gun *gun;
};

ReloadGun::ReloadGun(Gun *gun)
{
	this->gun = gun;
}

void ReloadGun::execute()
{
	gun->reload();
}

class ShotGun: public Command
{
public:
	ShotGun(Gun *gun);
	void execute();
private:
	Gun *gun;
};

ShotGun::ShotGun(Gun *gun)
{
	this-> gun = gun;
}
void ShotGun::execute()
{
	gun->shot();
}


class AutoShotGun: public Command
{
public:
	AutoShotGun(Gun *gun);
	void execute();
private:
	Gun *gun;
};

AutoShotGun::AutoShotGun(Gun *gun)
{
	this -> gun = gun;
}
void AutoShotGun::execute()
{
	gun->reload();
	while(gun->shot());
}

#endif