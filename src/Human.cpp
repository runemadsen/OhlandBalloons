#include "Human.h"

Human::Human()
{
	_name = "Human";
}

void Human::createAnimations()
{	
	vector <int> midiNotes;
	
	midiNotes.push_back(60);
	midiNotes.push_back(61);
	midiNotes.push_back(62);
	midiNotes.push_back(63);
	midiNotes.push_back(64);
	midiNotes.push_back(65);
	midiNotes.push_back(66);
	midiNotes.push_back(67);
	midiNotes.push_back(68);
	midiNotes.push_back(69);
	midiNotes.push_back(70);
	midiNotes.push_back(71);
	midiNotes.push_back(72);
	midiNotes.push_back(73);
	midiNotes.push_back(74);
	midiNotes.push_back(75);
	midiNotes.push_back(76);
	midiNotes.push_back(77);
	midiNotes.push_back(78);
	midiNotes.push_back(79);
	
	/*-------------------------------------------------------------
	 Blinking white lights
	 --------------------------------------------------------------*/
	
	vector <string> imgNames1;
	imgNames1.push_back("balloon3.png");
	
	AnimationBlinker * animation1 = new AnimationBlinker(imgNames1);
	animation1->setMidiNotes(midiNotes);
	//animation2->setContrainRatio(false);
	_animations.push_back(animation1);
	
	_loaded = true;	
}