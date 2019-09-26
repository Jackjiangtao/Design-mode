#pragma once
#include "Beverage.h"

class Coffee :public Beverage
{
private:
	std::string Descriptionl = "Coffee";

public:

	std::string GetDescription()
	{
		return Descriptionl;
	}

	double cost()
	{
		return 1.99;
	}

};