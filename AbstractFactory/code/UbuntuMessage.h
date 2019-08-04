#ifndef UBUNTUMESSAGE_H_
#define UBUNTUMESSAGE_H_
#include "Messages.h"
/*
	Concrete product
*/
class UbuntuMessage: public Messages
{
public:
	UbuntuMessage();
	void getMessage();
};
/*
	Following declarations should be in a .cpp file
*/
UbuntuMessage::UbuntuMessage(){}
void UbuntuMessage::getMessage()
{
	printf("This is Linux\n");
}
#endif
