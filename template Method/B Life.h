#pragma once
#include "Ablstract.h"

#include <iostream>

class B : public Ablstract
{
public:
	virtual ~B() {

	};
protected:
	void Study()
	{
		std::cout << "good good study,day day up"<<std::endl;
	}

	void Work()
	{
		std::cout << "hard work,make money" << std::endl;
	}

	void Love()
	{
		std::cout << "lonely" << std::endl;
	}
};