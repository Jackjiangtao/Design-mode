#pragma once
#include <string>

class  	Beverage
{
private:
	std::string Descriptionl ;

public:
	virtual std::string GetDescription()
	{
		return Descriptionl;
	}

	virtual double cost() = 0;

};