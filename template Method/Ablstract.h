#pragma once

#include <iostream>

class Ablstract
{

public:
	void Life()   //   �ȶ��� 
	{
		Study();
		Work();
		Love();
	}

protected:
	virtual  void Study() = 0;
	
	virtual void Work() = 0;
	
	virtual void Love() = 0;

};