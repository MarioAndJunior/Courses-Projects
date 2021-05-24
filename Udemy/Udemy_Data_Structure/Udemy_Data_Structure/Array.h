#pragma once

struct ArrayADT
{
	int* A;
	int size;
	int length;
};

class Array
{
public:
	Array();
	Array(int size);
	virtual ~Array();

public:
	ArrayADT m_arr;
};

