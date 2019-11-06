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
		std::cout << "������Ц��" << std::endl;
	}
	void Cry()
	{
		std::cout << "�����˿ޣ�" << std::endl;
	}
	void Talk()
	{
		std::cout << "������˵����" << std::endl;
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
		std::cout << "������Ц��" << std::endl;
	}
	void Cry()
	{
		std::cout << "�����˿ޣ�" << std::endl;
	}
	void Talk()
	{
		std::cout << "������˵����" << std::endl;
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
		std::cout << "������Ц��" << std::endl;
	}
	void Cry()
	{
		std::cout << "�����˿ޣ�" << std::endl;
	}
	void Talk()
	{
		std::cout << "������˵����" << std::endl;
	}
};