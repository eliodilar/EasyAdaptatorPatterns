/*
 * Object1.hpp
 *
 *  Created on: 13 déc. 2018
 *      Author: chapoul
 */

#ifndef OBJECT1_HPP_
#define OBJECT1_HPP_

#include "PlayerInterface.hpp"
#include "BadClass.hpp"

class Object1 : public PlayerInterface, private BadClass {

	public:

		virtual ~Object1(){};

			virtual void Connexion(){};

			virtual void BadClassConnexion(){};

};



#endif /* OBJECT1_HPP_ */
