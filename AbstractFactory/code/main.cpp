#include <stdio.h>
#include <string.h>
#include <iostream>
#include "WindowsFactory.h"
#include "UbuntuFactory.h"
/*
	Client
*/
#ifdef __linux__
#define SO "Linux"
#endif // __linux__
 
#ifdef __MINGW32__
#define SO "Windows"
#endif // __MINGW32__

int main(int argc, char *argv[])
{
    char Linux[] = "Linux"; 
    char Windows[] = "Windows";
    AbstractFactory *abstractFactory;
    Messages *message;
    Warnings *warning;

    if(!strncmp(SO, Linux, 5))
    {
    	printf("Linux\n");
    	abstractFactory = new UbuntuFactory();

    }
    else if(!strncmp(SO, Windows, 6))
    {
    	printf("Windows\n");
    	abstractFactory = new WindowsFactory();
    }
    else
    {
    	printf("System unknown\n");
    	return 0;
    }
    
    message = abstractFactory -> getMessages();
    warning = abstractFactory -> getWarnings();

   	message -> getMessage();
   	warning -> getWarning();

    return 0;
}

