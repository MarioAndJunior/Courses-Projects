//============================================================================
// Name        : Teste01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
using namespace std;

void digaOla() {
	this_thread::sleep_for(chrono::seconds(3));
	cout << "Olá Mundo!" << endl;
}

void digaAteLogo() {
	cout << "Até logo." << endl;
}

int main() {

	thread t1(digaOla);
	thread t2(digaAteLogo);

	t1.detach();
	t2.detach();

	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;
	cout << "FIM" << endl;

	this_thread::sleep_for(chrono::seconds(5));

	return 0;
}
