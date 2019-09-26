#pragma once
#include "Beverage.h"

class Tea :public Beverage
{
private:
	std::string Descriptionl = "Tea";

public:

	std::string GetDescription()
	{
		return Descriptionl;
	}

	double cost()
	{
		return 3;
	}

};