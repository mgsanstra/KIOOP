//
//  Broodmandje.hpp
//  Les 5
//
//  Created by Michael Sanstra on 04/10/2017.
//  Copyright © 2017 Michael Sanstra. All rights reserved.
//

#pragma once

#include "Broodje.hpp"

class Broodmandje {
	
public:
	Broodmandje();
	virtual ~Broodmandje();
	Broodmandje(const Broodmandje& anderMandje);
	Broodmandje& operator=(const Broodmandje&);
	
	
	
	void toon();
	
	void voegToe(std::string type);
	
private:
	Broodje* broodje = new Broodje();
	
};

