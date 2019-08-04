#ifndef FACTORYMETHOD_H_
#define FACTORYMETHOD_H_
/*
	FactoryMethod
*/
enum OpSys 
{
  Linux,
  Windows
};

class FactoryMethod
{
public:
	static AbstractFactory* getFactory(OpSys type)
	{
		switch(type)
		{
			case Linux:
				return new UbuntuFactory();

			case Windows:
				return new WindowsFactory();
		}
		return NULL;
	}
};

#endif
