#include "Array.h"

Array::Array()
{
}

Array::Array(int size)
{
	m_arr.size = size;
	m_arr.A = new int[m_arr.size];
	m_arr.length = 0;
}

Array::~Array()
{
	delete m_arr.A;
}

