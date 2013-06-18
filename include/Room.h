//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  Room.h
//  Created by Tim Honeywell on 26 January 2013.
//

#pragma once

#include <iostream>
#include "cinder/Text.h"
#include "cinder/app/AppBasic.h"
#include "cinder/Vector.h"
#include "cinder/Color.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "cinder/audio/Callback.h"
#include "AudioLayer.h"
#include "PrintLayer.h"

using namespace ci;
using namespace ci::app;

class Room {
public:
	Room();
		
	void setup();
	void update();
	void click(Vec2i mMouseLoc);
	void draw();
	
	bool lightning;
	int marker;

	AudioLayer audioLayer;
	PrintLayer printLayer;

	void serviceClick(Vec2i mMouseLoc);
	
	int mRoomID;
		
	void changeRoom(int newRoom);
	
	int framecounter;	

	//////INVENTORY//////////
	bool matches;
	bool R01key;
	
	/////WHICH-CLICKED//////////
	int R01ClickWhich;

	//////ITEM-CLICK-STATUS////////
	int R01WindowClick;
	int R01TableLampClick;
	int R01BedClick;
	int R01WardrobeClick;
	int R01P1Click;
	int R01P2Click;
	int R01DoorClick;
	int R01DoorPush;
	bool R01DoorLock;
	
    //Room Update methods
	void updateRoom01(Vec2i mMouseLoc);
	void updateRoom02(Vec2i mMouseLoc);
	void updateRoom03(Vec2i mMouseLoc);
	void updateRoom04(Vec2i mMouseLoc);
	void updateRoom05(Vec2i mMouseLoc);
	void updateRoom06(Vec2i mMouseLoc);
	void updateRoom07(Vec2i mMouseLoc);
	void updateRoom08(Vec2i mMouseLoc);
	void updateRoom09(Vec2i mMouseLoc);
	void updateRoom10(Vec2i mMouseLoc);
	void updateRoom11(Vec2i mMouseLoc);
	void updateRoom12(Vec2i mMouseLoc);
	void updateRoom13(Vec2i mMouseLoc);
    
    //Room draw methods
	void drawRoom01();
	void drawRoom02();
	void drawRoom03();
	void drawRoom04();
	void drawRoom05();
	void drawRoom06();
	void drawRoom07();
	void drawRoom08();
	void drawRoom09();
	void drawRoom10();
	void drawRoom11();
	void drawRoom12();
	void drawRoom13();
	
	//Background Textures
	gl::Texture background01;
	gl::Texture background02;
	gl::Texture background03;
	gl::Texture background04;
	gl::Texture background05;
	gl::Texture background06;
	gl::Texture background07;
	gl::Texture background08;
	gl::Texture background09;
	gl::Texture background10;
	gl::Texture background11;
	gl::Texture background12;
	gl::Texture background13;
	gl::Texture background14;
	
	//Item Textures
	gl::Texture candle01;
	gl::Texture candle02;
	gl::Texture candle03;
	gl::Texture candle04;
	gl::Texture window01;
	gl::Texture window02;
	gl::Texture window03;
	gl::Texture window04;
	gl::Texture fireplace01;
	gl::Texture fireplace02;
	gl::Texture mirror01;
	
};
