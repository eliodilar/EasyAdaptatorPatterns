/*
 * Object2.hpp
 *
 *  Created on: 10 janv. 2019
 *      Author: chapoul
 */

#ifndef OBJECT2_HPP_
#define OBJECT2_HPP_


#include "Object1.hpp"

class Object2 : public Object1 {

	public:

		Object2(){};

		 ~Object2(){};

		void Connexion(){cout<<"i am connexion"<<endl;};

		void BadClassConnexion(){cout<<"i am the bad class"<<endl;};

};



#endif /* OBJECT2_HPP_ */
