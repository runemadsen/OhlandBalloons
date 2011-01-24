#include "SonOfAGun.h"

SonOfAGun::SonOfAGun()
{
	_name = "Son of a Gun";
}

void SonOfAGun::createAnimations()
{	
	vector <int> midiNotes;
	
	/*-------------------------------------------------------------
		Flashing "Ohland" letters 
	--------------------------------------------------------------*/
	
    midiNotes.push_back(60);
	midiNotes.push_back(61);
	midiNotes.push_back(62);
	midiNotes.push_back(63);
	midiNotes.push_back(64);
	midiNotes.push_back(65);
	midiNotes.push_back(67);
	midiNotes.push_back(69);
	midiNotes.push_back(71);
	midiNotes.push_back(72);
	midiNotes.push_back(74);
	
	vector <string> imgNames;

	imgNames.push_back("letters/o.png");
	imgNames.push_back("letters/h.png");
	imgNames.push_back("letters/l.png");
	imgNames.push_back("letters/a.png");
	imgNames.push_back("letters/n.png");
	imgNames.push_back("letters/d.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	AnimationBlinker * animation1 = new AnimationBlinker(imgNames);
	animation1->setMidiNotes(midiNotes);
	_animations.push_back(animation1);
	
	/*-------------------------------------------------------------
		Singing heads (doh / ohh)
	--------------------------------------------------------------*/
	
	AnimationSingingHeadsSingle * animation2 = new AnimationSingingHeadsSingle(34, 37, "doh.mov");
	animation2->setUseOffset(true);
	animation2->setMidiNote(60);
	_animations.push_back(animation2);
	
	AnimationSingingHeadsSingle * animation3 = new AnimationSingingHeadsSingle(37, 39, "ohh.mov");
	animation3->setUseOffset(true);
	animation3->setMidiNote(60);
	_animations.push_back(animation3);
	
	/*-------------------------------------------------------------
		Blinking white lights
	--------------------------------------------------------------*/
	
	midiNotes.clear();
	
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
	
	//imgNames.clear();
	vector <string> imgNames2;
	imgNames2.push_back("balloon3.png");
	AnimationBlinker * animation4 = new AnimationBlinker(imgNames2);
	//animation4->setContrainRatio(false);
	animation4->setMidiNotes(midiNotes);
	_animations.push_back(animation4);
	
	/*-------------------------------------------------------------
	 Falling stars
	 --------------------------------------------------------------*/
	
	AnimationStars * animation5 = new AnimationStars();
	animation5->setMidiNotes(midiNotes);
	_animations.push_back(animation5);
	
	_loaded = true;	
}