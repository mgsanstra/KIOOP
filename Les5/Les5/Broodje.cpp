//
//  Broodje.cpp
//  Les 5
//
//  Created by Michael Sanstra on 04/10/2017.
//  Copyright © 2017 Michael Sanstra. All rights reserved.
//

#include "Broodje.hpp"
#include <string>
#include <iostream>


Broodje::Broodje(std::string type) {
	_type = type;
	
};


Broodje::Broodje(){
	std::cout << "Broodje: ctor" << std::endl;
}


Broodje::~Broodje() {
	
	std::cout << "Broodje: dtor" << std::endl;
	
}
