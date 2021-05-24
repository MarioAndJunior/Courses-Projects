//
//  main.cpp
//  FreeStoreVsHeap
//


#include <iostream>
#include <fstream>
#include<vector>
#include "JarJar.h"
#include "DanglingPointer.h"
#include "File_RAII.h"
#include "SolidObjects/Order.h"

int main(int argc, const char * argv[])
{
	/*
	// JarJar test
    // Using the stack
    {
        JarJar binks;
    } // end of scope

    // Using the free store
    JarJar* freeStoreJarJar = new JarJar();
    delete freeStoreJarJar;
    
    // Using the heap
    JarJar* heapJarJar = (JarJar*)malloc(sizeof(JarJar));
    free(heapJarJar);
	*/
    

	//Dangling pointer test
	/*
	Bar original;

	Bar copy = original;
	*/

	//RAII

	//raii_way();

	//SolidObjects

	/*Customer buyer("Mario");

	Order purchase_order(buyer);

	std::string summary = purchase_order.print_summary();

	std::cout << summary << std::endl*/;

	//Unique pointer
	//auto j = std::make_unique<JarJar>();
	//TODO: terminar esses carinhas Unique Shared e Weak

	////Vector
	//std::vector<int> v1;
	//
	//std::vector<int> v2(4);
	//
	//std::vector<int> v3{ 2, 3, 5, 7, 11 };

	//std::cout << "size is " << v3.size() << std::endl;
	//std::cout << "capacity is " << v3.capacity() << std::endl;

	//v3.push_back(13);

	//std::cout << "size is " << v3.size() << std::endl;
	//std::cout << "capacity is " << v3.capacity() << std::endl;

	//for (int i = 0; i < v3.size(); i++)
	//{
	//	v3.at(i) = v3.at(i) + 2;
	//	std::cout << v3.at(i) << std::endl;
	//}

	//for (int& value : v3)
	//{
	//	value = value + 2;
	//}

	//for (int value : v3)
	//{
	//	std::cout << value << std::endl;
	//}

    return 0;
}