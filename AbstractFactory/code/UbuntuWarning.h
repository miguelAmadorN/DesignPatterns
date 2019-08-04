#ifndef UBUNTUWARNING_H_
#define UBUNTUWARNING_H_
#include "Warnings.h"
/*
	Concrete product
*/
class UbuntuWarning: public Warnings
{
public: 
	UbuntuWarning();
	void getWarning();
};
/*
	Following declarations should be in a .cpp file
*/
UbuntuWarning::UbuntuWarning(){}
void UbuntuWarning::getWarning()
{
	printf("Ubuntu Directory is usr/bin \n");
}
#endif
