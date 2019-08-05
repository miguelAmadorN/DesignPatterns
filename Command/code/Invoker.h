#ifndef INVOKER_H_
#define INVOKER_H_
#include <vector>
#include "Command.h"
using namespace std;

class Invoker
{
public:
	void addCommand(Command *command);
	void runCommand(int number);
private:
	vector<Command *> commands;

};


void Invoker::addCommand(Command *command)
{
	commands.push_back(command);
}

void Invoker::runCommand(int number)
{
	commands[number]->execute();
}

#endif