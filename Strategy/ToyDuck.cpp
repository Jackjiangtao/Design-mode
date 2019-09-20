#include "ToyDuck.h"

void ToyDuck::swim()
{
	std::cout << "i can swim" << std::endl;
}

void ToyDuck::disply()
{
	swim();
	performQuack();
	performFly();
}
