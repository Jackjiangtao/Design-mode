#pragma once
#include "IHuman.h"
#include "IhumanFactory.h"

class WhiteHumanFactory : public IHumanFactory
{
public:
	WhiteHumanFactory(void)
	{

	}
	~WhiteHumanFactory(void)
	{

	}
	IHuman* CreateHuman()
	{
		return new WhiteHuman();
	}

};

class YellowHumanFactory : public IHumanFactory
{
public:
	YellowHumanFactory(void)
	{

	}
	~YellowHumanFactory(void)
	{

	}
	IHuman* CreateHuman()
	{
		return new YellowHuman();
	}

};

class BlackHumanFactory : public IHumanFactory
{
public:
	BlackHumanFactory(void)
	{

	}
	~BlackHumanFactory(void)
	{

	}
	IHuman* CreateHuman()
	{
		return new BlackHuman();
	}

};