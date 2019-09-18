#pragma once
#include "Ablstract.h"

#include <iostream>

class A : public Ablstract
{
public:
	virtual ~A () {

	};
protected:
	void Study()
	{
		std::cout << "60 is enough" << std::endl;
	}

	void Work()
	{
		std::cout << "freedom " << std::endl;
	}

	void Love()
	{
		std::cout << "married " << std::endl;
	}
};