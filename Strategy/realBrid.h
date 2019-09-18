#pragma once
#include "flyBeahivor.h"

#include "FlywithWing.h"
#include "Nofly.h"
#include "Brid.h"

class RealBrid :public Brid
{
public:
	RealBrid(FlyBeahivor* fly) :Brid(fly)
	{
		m_fly = fly;
	}


	void disply()
	{
		std::cout << " i am real  brid" << std::endl;
		m_fly->fly();
	}

private:
	FlyBeahivor* m_fly;
};