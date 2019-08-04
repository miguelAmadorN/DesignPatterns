#ifndef WINDOWSWARNING_H_
#define WINDOWSWARNING_H_
#include "Warnings.h"
/*
	Concrete product
*/
class WindowsWarning: public Warnings
{
public:
	WindowsWarning();
	void getWarning();
};
/*
	Following declarations should be in a .cpp file
*/
WindowsWarning::WindowsWarning(){}
void WindowsWarning::getWarning()
{
	printf("Windows Directory is C:\n");
}
#endif
