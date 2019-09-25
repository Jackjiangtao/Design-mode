#pragma once
#include"Observer.h"


class Observer;

class Subject
{

public:
	virtual void RegsisterObserver(Observer *temp) = 0;   //增加

	virtual void RemoveObserver(Observer* temp) = 0;   //删除观察者

	virtual void NotifyObservers(float t, float h, float p) = 0;

};