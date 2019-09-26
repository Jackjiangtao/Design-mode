// Decorator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Milk.h"
#include "Sugar.h"
#include "Coffee.h"
#include "Beverage.h"
#include "tea.h"

int main()
{
	Beverage* coffe = new Coffee;

	coffe = new Milk(coffe);

	coffe = new Sugar(coffe);

	std::cout<< coffe->GetDescription()<<" cost  "<< coffe->cost()<<std::endl;


	Beverage* tea = new Tea;

	tea = new Milk(tea);

	tea = new Sugar(tea);

	std::cout << tea->GetDescription() << " cost  " << tea->cost()<<std::endl;;



}
