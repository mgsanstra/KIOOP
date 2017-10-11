//
//  main.cpp
//  Les 5
//
//  Created by Michael Sanstra on 04/10/2017.
//  Copyright © 2017 Michael Sanstra. All rights reserved.
//

#include <iostream>
#include "Broodmandje.hpp"


int main() {
	Broodmandje mandje1 = Broodmandje();
	mandje1.toon();
	
	std::cout << "------ Mandje1" << std::endl;
	mandje1.voegToe("Ciabatta");
	mandje1.toon();
	
	Broodmandje mandje2 = Broodmandje();
	mandje2 = mandje1;
	
	std::cout << "------ Mandje2" << std::endl;
	mandje2.toon();
	
	mandje1.voegToe("Croissant");
	std::cout << "------ Mandje1" << std::endl;
	mandje1.toon();

	std::cout << "------ Mandje2" << std::endl;
	mandje2.toon();
	
	int c;
	std::cin >> c;
	
	return 0;
}

