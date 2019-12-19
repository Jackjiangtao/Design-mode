#pragma once

//����
class LazySingle
{
public:

	static LazySingle* Getinstance();

private:
	LazySingle();
	static LazySingle* m_log;
};

//����+��
//����
class LazySingleLock
{
public:

	static LazySingleLock* Getinstance();

private:
	LazySingleLock();
	static LazySingleLock* m_log;
};



//����
class HungrySingle
{
public:

	static HungrySingle* Getinstance();

private:
	HungrySingle();
	
};

