#pragma once

#include "IHuman.h"

class IHumanFactory
{
public:
	IHumanFactory(void)
	{

	}
	~IHumanFactory(void)
	{

	}
	virtual IHuman* CreateHuman() = 0;

};