#pragma once
#pragma once
//具体布告板  显示 当前温度***

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherrData.h"
#include<iostream>

#define  max(a,b) ((a)>(b) ? (a) :(b))
class StasisicsDisplay : public Observer, public DisplayEle
{
private:
	float temperature;
	float humidity;
	float pressure;
public:
	StasisicsDisplay(WeatherData* temp)
	{
		temperature = temp->GetTemperator();
		humidity = temp->Gethumidity();
		pressure = temp->Getpressure();
		temp->RegsisterObserver(this);
	}

public:
	void update(float t, float h, float p)
	{
		temperature = t;
		humidity = h;
		pressure = p;
		Display();
	}

	void Display()
	{

		 auto big =max(temperature, humidity);
		 big = max(big, pressure);
		 std::cout << "the big is  " << big << std::endl;
	}
};