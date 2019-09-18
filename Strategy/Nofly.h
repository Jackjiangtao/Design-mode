#pragma once
#include "flyBeahivor.h"

class NoFly :public FlyBeahivor
{
public:

	void fly()
	{
		std::cout << " No fly";
	}
private:

};