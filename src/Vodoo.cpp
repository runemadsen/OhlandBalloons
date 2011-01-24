#include "Vodoo.h"

Vodoo::Vodoo()
{
	_name = "Vodoo";
}

void Vodoo::createAnimations()
{	
	vector <int> midiNotes;
	
	midiNotes.push_back(40);
	midiNotes.push_back(41);
	midiNotes.push_back(42);
	midiNotes.push_back(43);
	midiNotes.push_back(44);
	midiNotes.push_back(45);
	midiNotes.push_back(46);
	midiNotes.push_back(47);
	midiNotes.push_back(48);
	midiNotes.push_back(49);
	midiNotes.push_back(50);
	
	/*-------------------------------------------------------------
	 Blinking white lights triggered by Hans
	 --------------------------------------------------------------*/
	
    vector <string> imgNames;
	imgNames.push_back("balloon3.png");
	AnimationBlinker * animation1 = new AnimationBlinker(imgNames);
	//animation4->setContrainRatio(false);
	animation1->setMidiNotes(midiNotes);
	_animations.push_back(animation1);
	
	_loaded = true;	
}