#pragma once
#include "flyBeahivor.h"

#include "FlywithWing.h"
#include "Nofly.h"
#include "Duck.h"
#

class RealDuck :public Duck
{
public:
	RealDuck() 
	{
		this->m_fly = new FlyWing;
		this->m_quack = new Quack;
	}

	void swim();
	void disply();
};



