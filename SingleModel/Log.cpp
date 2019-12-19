#include "Log.h"
#include <mutex>
#include<iostream>

LazySingle* LazySingle::m_log = NULL;

LazySingleLock* LazySingleLock::m_log = NULL;

LazySingleLock::LazySingleLock()
{
	std::cout << "Single Log loCk" << std::endl;
}



LazySingle* LazySingle::Getinstance()
{
	if (m_log==nullptr)
	{
		m_log = new LazySingle();
	}

	return m_log;
}

LazySingle::LazySingle()
{
	std::cout << "Single Log" << std::endl;
}


LazySingleLock* LazySingleLock::Getinstance()
{
	std::mutex mu;
	mu.lock();
	if (m_log == nullptr)
	{
		m_log = new LazySingleLock();
	}
	mu.unlock();
	return m_log;
}

HungrySingle* HungrySingle::Getinstance()
{
	static HungrySingle* m_log = new HungrySingle();

	return m_log;

}

HungrySingle::HungrySingle()
{
	std::cout << "Hungry Log" << std::endl;
}
