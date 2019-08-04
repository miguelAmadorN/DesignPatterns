#ifndef COLLEAGUE_H_
#define COLLEAGUE_H_

class Mediator;

class Colleague
{
public:
	virtual void sendMessage(char *message, int idColleague) = 0;
	virtual void receiveMessage(char *message, Colleague *colleague) = 0;

	virtual int getId() = 0;
	virtual void setId(int id) = 0;
	virtual char* getName() = 0;
	virtual void setName(char name[10]) = 0;
private:
	int id;
	char name[10];

};


#endif