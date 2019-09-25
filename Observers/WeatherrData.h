#pragma once
#include "Subject.h"
#include "Observer.h"
#include <vector>

class WeatherData :public Subject
{
private:
	float temperature;
	float humidity;
	float pressure;

public:
	WeatherData()
	{
		temperature = 0;
		humidity = 0;
		pressure = 0;
	}


	float GetTemperator()
	{
		return temperature;
	}

	float Gethumidity()
	{
		return humidity;
	}

	float Getpressure()
	{
		return pressure;
	}

public:
	void RegsisterObserver(Observer* temp);

	void RemoveObserver(Observer* temp);

	void NotifyObservers(float t, float h, float p);

	void measurementsChanged(float t, float h, float p)
	{
		NotifyObservers(t,h,p);
	}

	void setMeasurements(float t, float h, float p) {
		temperature = t;
		humidity = h;
		pressure = p;
		measurementsChanged(t, h, p);
	}

	private:
		std::vector<Observer*> m_observers;
};

void WeatherData::RegsisterObserver(Observer* temp)
{
	m_observers.push_back(temp);
}

void WeatherData::RemoveObserver(Observer* temp)
{
	for (auto it =  m_observers.begin();it!=m_observers.end();++it)
	{
		if (*it == temp)
		{
			it= m_observers.erase(it);
		}
		if (it == m_observers.end())
		{
			break;
		}

	}

}

void WeatherData::NotifyObservers(float t, float h, float p)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		(*it)->update( t,  h,  p);
	}
}
