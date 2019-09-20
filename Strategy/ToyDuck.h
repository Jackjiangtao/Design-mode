#pragma once
#include "flyBeahivor.h"

#include "FlywithWing.h"
#include "Nofly.h"
#include "Duck.h"

class ToyDuck :public Duck
{
public:
	ToyDuck()
	{
		this->m_fly = new NoFly;
		this->m_quack = new MuteQuack;
	}

	void swim();


	void disply();
};


