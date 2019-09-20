#include "realDuck.h"

void RealDuck::swim()
{
	std::cout << "i can swim" << std::endl;
}

void RealDuck::disply()
{
		swim();
		performQuack();
		performFly();
}

