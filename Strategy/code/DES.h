#ifndef DES_H
#define DES_H
#include "EncodeAlgorithm.h"

class DES : public EncodeAlgorithm
{
	public:
		DES();
	private:
		void encode();	
};
#endif
