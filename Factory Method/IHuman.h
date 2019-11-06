#pragma once

#include <iostream>
using namespace std;

class IHuman
{
public:
	IHuman(void)
	{

	}
	~IHuman()
	{

	}
	virtual void Laugh() = 0;
	virtual void Cry() = 0;
	virtual void Talk() = 0;

};

class WhiteHuman : public IHuman
{
public:
	WhiteHuman(void)
	{

	}
	~WhiteHuman(void)
	{

	}
	void Laugh()
	{
		std::cout << "白种人笑！" << std::endl;
	}
	void Cry()
	{
		std::cout << "白种人哭！" << std::endl;
	}
	void Talk()
	{
		std::cout << "白种人说话！" << std::endl;
	}
};

class YellowHuman : public IHuman
{
public:
	YellowHuman(void)
	{

	}
	~YellowHuman(void)
	{

	}
	void Laugh()
	{
		std::cout << "黄种人笑！" << std::endl;
	}
	void Cry()
	{
		std::cout << "黄种人哭！" << std::endl;
	}
	void Talk()
	{
		std::cout << "黄种人说话！" << std::endl;
	}
};

class BlackHuman : public IHuman
{
public:
	BlackHuman(void)
	{

	}
	~BlackHuman(void)
	{

	}
	void Laugh()
	{
		std::cout << "黑种人笑！" << std::endl;
	}
	void Cry()
	{
		std::cout << "黑种人哭！" << std::endl;
	}
	void Talk()
	{
		std::cout << "黑种人说话！" << std::endl;
	}
};