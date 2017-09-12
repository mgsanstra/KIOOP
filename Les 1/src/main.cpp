#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context
//
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}

////////////
//Relaties//
////////////

//Er is een relatie tussen de Rooster indeling, en de rooster blokken
//Het rooster heeft een indeling van tijden, data en de tijdsblokken waarin de modules en docenten worden weergegeven. Eigenlijk het frame waarin het rooster weergegeven haat worden.

//het roosterBlok blok krijgt een aparte class omdat het andere data moet verwerken dan de rooster indeling, de meer gedetailleerde data zoals de docenten, modules en tijdframes.


//////////
//Gedrag//
//////////

//Wanneer je de filters gebruikt zal de indeling zich aanpassen aan de ingevoerde week(data)/tijden en de correcte blokken weergeven binnen iedere dag van de geselecteerde week.

