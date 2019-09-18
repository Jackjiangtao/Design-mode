#pragma once
#include "flyBeahivor.h"

#include "FlywithWing.h"
#include "Nofly.h"


class Brid
{
public:
	Brid(FlyBeahivor* fly) 
	{
		m_fly = fly;
	}
	virtual void disply() = 0;
private:
	FlyBeahivor* m_fly;

};