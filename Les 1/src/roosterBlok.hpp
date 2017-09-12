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

class roosterBlok : public ofBaseApp{
	
public: // place public functions or variables declarations here
	
	// methods, equivalent to specific functions of your class objects
	void setup();
	void update();
	void draw();
	
	// variables
	float roosterTijd(); //Weergeeft de tijdspan waarin het blok zich in bevind
	float roosterModule(); //Weergeeft de module code
	float roosterDocent(); //Weergeeft de docent
	float roosterLocatie(); //Weergeeft de locatie (IBB175 bijv.)
	float roosterKlassen(); //Weergeeft voor welke klassen
	
	// constructor - used to initialize an object, if no properties are passed the program sets them to the default value
private: // place private functions or variables declarations here
}; // don't forget the semicolon!
