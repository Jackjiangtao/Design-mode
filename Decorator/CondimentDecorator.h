#pragma once
#include "Beverage.h"

class  CondimentDecorator :public Beverage
{
public:
	virtual double cost() = 0;
	virtual std::string GetDescription() = 0;
};