#include "Invoker.h"
#include "GunCommands.h"



int main()
{
	
	Invoker invoker;
	Gun gun;

	Command *c1 =  new ReloadGun(&gun);
	Command *c2 =  new ShotGun(&gun);
	Command *c3 =  new AutoShotGun(&gun);

	invoker.addCommand(c1);
	invoker.addCommand(c2);
	invoker.addCommand(c3);


	invoker.runCommand(1);
	invoker.runCommand(0);
	invoker.runCommand(2);

	return 0;
}