#pragma once
#include "Beverage.h"
#include "CondimentDecorator.h"
#include <string>

class  Milk :public CondimentDecorator
{
private:
	Beverage* m_Beverage;


public:
	Milk(Beverage *temp)
	{
		m_Beverage = temp;
	}

public:
	double cost()
	{
		return m_Beverage->cost() + 1.0;
	}

	std::string GetDescription()
	{
		return m_Beverage->GetDescription() + "£¬add milk";
	}
};