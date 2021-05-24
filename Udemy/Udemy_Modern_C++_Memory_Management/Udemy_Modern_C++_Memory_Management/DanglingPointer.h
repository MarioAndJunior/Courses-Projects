#pragma once
#include<iostream>

class Foo {};

class Bar
{
private:
	Foo* foo;

public:
	Bar()
	{
		this->foo = new Foo();
		std::cout << "Creating bar at " << this << std::endl;
	}

	~Bar()
	{
		delete this->foo;
		std::cout << "Destructing Bar at " << this << std::endl;
	}
};