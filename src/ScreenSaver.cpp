#include "ScreenSaver.h"

ScreenSaver::ScreenSaver()
{
	_name = "Screensaver";
}

void ScreenSaver::createAnimations()
{
	vector <string> imgNames;
	imgNames.push_back("letters/o.png");
	imgNames.push_back("letters/h.png");
	imgNames.push_back("letters/l.png");
	imgNames.push_back("letters/a.png");
	imgNames.push_back("letters/n.png");
	imgNames.push_back("letters/d.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");
	imgNames.push_back("letters/empty.png");


	
	AnimationSweep * animation1 = new AnimationSweep(imgNames);
	
	_animations.push_back(animation1);
	
	_loaded = true;
}