#include <stdio.h>
#include <string.h>
#include <iostream>
#include "WindowsFactory.h"
#include "UbuntuFactory.h"
#include "FactoryMethod.h"

/*
	Client
*/

#ifdef __linux__
#define OS Linux
#endif // __linux__
 
#ifdef __MINGW32__
#define OS Windows
#endif // __MINGW32__

int main(int argc, char *argv[])
{

    AbstractFactory *abstractFactory = FactoryMethod::getFactory(OS);
    
    if(abstractFactory != NULL)
    {
      Messages *message = abstractFactory -> getMessages();
      Warnings *warning = abstractFactory -> getWarnings();

   	  message -> getMessage();
   	  warning -> getWarning();
    }

    return 0;
}

