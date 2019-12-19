// SingleModel.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Log.h"



int main()
{
	auto single =LazySingle::Getinstance();
	auto singleLock = LazySingleLock::Getinstance();
	auto HungrySingle = HungrySingle::Getinstance();


}


