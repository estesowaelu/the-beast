//
//  AudioLayer.h
//  beast
//
//  Created by Tim Honeywell on 13/01/27.
//
//

#pragma once

#include <iostream>
#include <QuickTime/Movies.h>

class AudioLayer {
public:
	AudioLayer();
	void initialize();
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