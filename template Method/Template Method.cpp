// Design mode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "A life.h"
#include "B Life.h"

int main()
{
	auto ALife = new A;
	ALife->Life();

	auto BLife = new B;
	BLife->Life();

    
}

