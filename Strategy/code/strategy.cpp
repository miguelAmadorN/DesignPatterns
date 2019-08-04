#include "AES.h"
#include "DES.h"
#include "EncodeAlgorithm.h"
#include <iostream>

int main()
{
	int option = 1;
	EncodeAlgorithm *algorithm;	

	if(option)
	{	
		algorithm = new AES();
	}
	else
	{
		algorithm = new DES();
	}
	
	algorithm->encode();


	return 0;
}
