#include "AnimationVideoHeads.h"

/* Constructor
 ___________________________________________________________ */

AnimationVideoHeads::AnimationVideoHeads()
{
	// first balloon reacts to midi note 60, next 61, etc...
	_midiNotes.push_back(60);
	_midiNotes.push_back(61);
	_midiNotes.push_back(62);
	_midiNotes.push_back(63);
	_midiNotes.push_back(64);
	_midiNotes.push_back(65);
	_midiNotes.push_back(67);
	_midiNotes.push_back(69);
	_midiNotes.push_back(71);
	_midiNotes.push_back(72);
	_midiNotes.push_back(74);
	
	head.loadMovie("head.mov");
	head.play();
}

/* Update
 ___________________________________________________________ */

void AnimationVideoHeads::update()
{
	head.idleMovie();
}

/* Draw
 ___________________________________________________________ */

void AnimationVideoHeads::draw()
{
	ofSetColor(255, 255, 255);
	
	ofRectangle bounds;
	
	for(int i = 0; i < _points.size(); i++) 
	{
		bounds = _points[i]->getBoundsFromSize(head.getWidth(), head.getHeight());
		
		head.draw(bounds.x, bounds.y, bounds.width, bounds.height);
	}
}

/* Destroy
 ___________________________________________________________ */

void AnimationVideoHeads::destroy()
{
	head.closeMovie();
}

