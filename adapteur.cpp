//============================================================================
// Name        : adapteur.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Object2.hpp"

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Object2 * NexObject = new Object2;

	NexObject->Connexion();

	NexObject->BadClassConnexion();

	cout << "!!!end proc!!!" << endl; // prints !!!Hello World!!!

	return 0;
}
