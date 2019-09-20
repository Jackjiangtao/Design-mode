#pragma once
#include "flyBeahivor.h"

#include "FlywithWing.h"
#include "Nofly.h"
#include "QuackBehavior.h"
#include "Quack.h"
#include "MuteQuack.h"
#include "Squack.h"


class Duck
{
public:
	Duck() 
	{
	}

	virtual void disply() = 0;
	virtual void swim() = 0;

	virtual void performQuack()
	{
		m_quack->quack();
	}

	virtual void performFly()
	{
		m_fly->fly();
	}

	~Duck()
	{
		if (m_fly !=NULL)
		{
			delete m_fly;
			m_fly = NULL;
		}

		if (m_quack != NULL)
		{
			delete m_quack;
			m_quack = NULL;
		}
	}

	FlyBeahivor* m_fly;
	QuackBeahivor* m_quack;

};