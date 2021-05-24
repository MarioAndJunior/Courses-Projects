#pragma once

#include <iostream>
#include <thread>

void foo()
{
	printf("Hello, world from foo - threadId[%d]\n", std::this_thread::get_id());
}

class callable_class
{
public:
	void operator()()
	{
		printf("Hello from class with function call oprator - threadId[%d]\n", std::this_thread::get_id());
	}
};

void run()
{
	std::thread thread1(foo);

	callable_class obj;
	std::thread thread2(obj);

	std::thread thread3([]
	{
		printf("Hello from lambda - threadId[%d]\n", std::this_thread::get_id());
	});

	thread1.join();
	thread2.join();
	thread3.join();

	printf("Hello from main - threadId[%d]\n", std::this_thread::get_id());

	system("pause");
}