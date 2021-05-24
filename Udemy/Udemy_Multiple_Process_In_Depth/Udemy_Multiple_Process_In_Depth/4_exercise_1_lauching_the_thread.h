#pragma once

#include <iostream>
#include <thread>

void test()
{
	printf("Hello from test\n");
}

void functionA()
{
	std::thread threadC(test);
	threadC.join();
}

void functionB()
{

}

void run()
{
	std::thread threadA(functionA);
	threadA.join();

	std::thread threadB(functionB);
	threadB.join();
}