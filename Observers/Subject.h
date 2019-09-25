#pragma once
#include"Observer.h"


class Observer;

class Subject
{

public:
	virtual void RegsisterObserver(Observer *temp) = 0;   //����

	virtual void RemoveObserver(Observer* temp) = 0;   //ɾ���۲���

	virtual void NotifyObservers(float t, float h, float p) = 0;

};