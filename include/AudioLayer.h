//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  AudioLayer.h
//  Created by Tim Honeywell on 27 January 2013.
//

#pragma once

#include <iostream>
#include <QuickTime/Movies.h>

class AudioLayer {
public:
	AudioLayer();
	void setup();
	void service();
	void silence();
	
	void playSound(Movie mSound);
	void loopSound(Movie mSound);
	void stopSound(Movie mSound);
	void setSoundVolume(Movie mSound, int volume);
	
	Movie tempSTrack;
	
	Movie tickTock;
	Movie fire;
	Movie rainIndoors;
	Movie rainOutdoors;
	
	Movie Heartbeat01;
	Movie Heartbeat02;
	Movie Heartbeat03;
	Movie Heartbeat04;
	Movie Heartbeat05;
	Movie Heartbeat06;
	Movie Heartbeat07;
	Movie Heartbeat08;
	Movie Heartbeat09;
	Movie Heartbeat10;
	Movie Heartbeat11;
	Movie Heartbeat12;
	Movie Heartbeat13;
	
};