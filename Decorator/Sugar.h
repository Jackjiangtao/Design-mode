#pragma once
#include "Beverage.h"
#include "CondimentDecorator.h"
#include <string>

class  Sugar :public CondimentDecorator
{
private:
	Beverage* m_Beverage;


public:
	Sugar(Beverage* temp)
	{
		m_Beverage = temp;
	}

public:
	double cost()
	{
		return m_Beverage->cost() + 0.5;
	}

	std::string GetDescription()
	{
		return m_Beverage->GetDescription() + "£¬add Sugar";
	}
};