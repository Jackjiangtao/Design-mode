#pragma once

//ÀÁºº
class LazySingle
{
public:

	static LazySingle* Getinstance();

private:
	LazySingle();
	static LazySingle* m_log;
};

//ÀÁºº+Ëø
//ÀÁºº
class LazySingleLock
{
public:

	static LazySingleLock* Getinstance();

private:
	LazySingleLock();
	static LazySingleLock* m_log;
};



//¶öºº
class HungrySingle
{
public:

	static HungrySingle* Getinstance();

private:
	HungrySingle();
	
};

