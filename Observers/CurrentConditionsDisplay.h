#pragma once
//具体布告板  显示 当前温度***

#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherrData.h"
#include<iostream>


class CurrentConditionsDisplay : public Observer ,public DisplayEle
{

private:
	float temperature;
	float humidity;
	float pressure;
public:
	CurrentConditionsDisplay(WeatherData *temp)
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

	void Display() {
		std::cout << "Current condidions: " << temperature << "F degrees and "
			<< humidity << "% humidity" << std::endl;
	}
};