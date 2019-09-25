// Observers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "WeatherrData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisicsDisplay.h"

int main()
{
	auto weather = new WeatherData;

	auto currentObserver = new CurrentConditionsDisplay(weather);

	auto dsfd = new StasisicsDisplay(weather);

	weather->setMeasurements(10, 5, 6);

	weather->setMeasurements(100, 65, 66);


}


