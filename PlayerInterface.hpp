/*
 * PlayerInterface.hpp
 *
 *  Created on: 10 janv. 2019
 *      Author: chapoul
 */

#ifndef PLAYERINTERFACE_HPP_
#define PLAYERINTERFACE_HPP_

#include <iostream>
using namespace std;

class PlayerInterface {

	public:


		virtual ~PlayerInterface(){};

		virtual void Connexion()=0;



};




#endif /* PLAYERINTERFACE_HPP_ */
