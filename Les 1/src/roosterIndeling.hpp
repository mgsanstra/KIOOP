//
//  roosterBlok.hpp
//  Les 1
//
//  Created by Michael Sanstra on 12/09/2017.
//
//

#pragma once

#include "ofMain.h"
#include "ofApp.h"

class roosterIndeling : public ofBaseApp{
	
public: // place public functions or variables declarations here
	
	// methods, equivalent to specific functions of your class objects
	void setup();
	void update();
	void draw();
	
	// variables
	float roosterWeek(); //Het vlak waarin het rooster staat van week x
	float roosterDag(); //Het vlak waarin de dagen staan
	float roosterBlok(); //Het vlak waarin de detail weergegeven worden
	
	// constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
}; // don't forget the semicolon!
