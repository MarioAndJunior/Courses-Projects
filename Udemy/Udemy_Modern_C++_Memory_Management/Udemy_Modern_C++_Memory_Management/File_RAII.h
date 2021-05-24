#pragma once

#include <iostream>
#include <fstream>

void old_way()
{
	FILE* fp = fopen("FileName.txt", "w");

	if (fp)
	{
		fclose(fp);
	}
}

void raii_way()
{
	std::ofstream f("FileName.txt", std::ios::out);

	f << "Hello World" << std::endl;
}