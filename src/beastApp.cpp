//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  beastApp.cpp
//  Created by Tim Honeywell on 26 January 2013.
//

#include <iostream>
#include <list>
#include "cinder/Font.h"
#include "cinder/Text.h"
#include "cinder/app/AppBasic.h"
#include "cinder/CinderMath.h"
#include "cinder/Rand.h"
#include "cinder/Vector.h"
#include "cinder/Color.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/gl.h"
#include "cinder/gl/Texture.h"
#include "Resources.h"
#include "Room.h"

using namespace ci;
using namespace ci::app;
using			std::list;

///////////////////////////////////////////////////////////////
/////			INITIALIZATION		/////
///////////////////////////////////////////////////////////////
class beast : public AppBasic {
  public:
	//APP
	virtual void prepareSettings(Settings *settings);
	virtual void setup();
	virtual void update();
	virtual void draw();
	
	//INTERFACE
	virtual void keyDown(KeyEvent event);
	virtual void mouseDown(MouseEvent event);
	virtual void mouseUp(MouseEvent event);
	virtual void mouseMove(MouseEvent event);
	virtual void mouseDrag(MouseEvent event);
	Vec2i mMouseLoc;
	Vec2i mMouseOffset;
	Vec2i mMouseDownPos;
	bool mMousePressed;

    //STATES
	bool play;
	bool credits;
	void drawTitle();
	void drawCredits();
	int creditscounter;
    
	//UTILITIES
	Room room;
	int mRoomID;
	void changeRoom(int roomNumber);
	int inventorySize;
	ci::Color mColor;
    int centerHeight;
    int centerWidth;
};

void beast::prepareSettings(Settings *settings){
    settings->setFrameRate(60.0f);
}

void beast::setup() {
	mRoomID = 0;
	inventorySize = 10;
	mColor = Color(0.0f, 0.0f, 0.0f);
	creditscounter=0;
    
	play = false;
	credits = false;
	
	room.setup();
    
	app::setFullScreen();
    centerWidth = getWindowWidth()/2;
    centerHeight = getWindowHeight()/2;
	mMouseLoc = Vec2i(centerWidth, centerHeight);
}

///////////////////////////////////////////////////////////////
/////			UPDATING		/////
///////////////////////////////////////////////////////////////
void beast::update() {
	room.update();
}

///////////////////////////////////////////////////////////////
/////			DRAWING			/////
///////////////////////////////////////////////////////////////
void beast::draw() {
    if (play) room.draw();
    else if (credits) drawCredits();
    else drawTitle();
}

void beast::drawTitle() {
	gl::Texture titleIMG = loadImage(loadResource("BeastTitle.png"));
	titleIMG.enableAndBind();
	gl::draw(titleIMG, getWindowBounds());
}

void beast::drawCredits() {
	creditscounter++;
	gl::clear();
	TextLayout screenText;
	screenText.setColor(Color(1,1,1));
	screenText.setBorder(20,10);
	if(creditscounter<180) {
		screenText.addCenteredLine("STORY");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("Bobby Canciello");
		screenText.addCenteredLine("Tim Honeywell");
		screenText.addCenteredLine("    ");
	} else if(creditscounter<360) {
		screenText.addCenteredLine("LEVELS");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Bobby Canciello");
		screenText.addCenteredLine("Tim Honeywell");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("    ");
	} else if(creditscounter<540) {
		screenText.addCenteredLine("CODE");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Tim Honeywell");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
	} else if(creditscounter<720) {
		screenText.addCenteredLine("ART");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Bobby Canciello");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
	} else if(creditscounter<900) {
		screenText.addCenteredLine("WRITING");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("Bobby Canciello");
		screenText.addCenteredLine("Tim Honeywell");
		screenText.addCenteredLine("Andy Lohmann");
	} else if(creditscounter<1080) {
		screenText.addCenteredLine("SOUND");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
	} else if(creditscounter<1260) {
		screenText.addCenteredLine("MUSIC");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("Sigur Rós");
		screenText.addCenteredLine("Martin Bayer");
		screenText.addCenteredLine("    ");
		screenText.addCenteredLine("    ");
	} else {
		creditscounter = 0;
		credits = false;
	}
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(centerWidth-80, centerHeight-80, centerWidth+80, centerHeight+80));
	gl::disableAlphaBlending();
}

///////////////////////////////////////////////////////////////
/////			INTERFACE			/////
///////////////////////////////////////////////////////////////
void beast::keyDown(KeyEvent event) {
	if(event.getChar() == '1') {
		play = false;
		credits = true;
	}
}

void beast::mouseDown(MouseEvent event) {
	mMousePressed = true;
}

void beast::mouseUp(MouseEvent event) {
	mMousePressed = false;
	if (!play && !credits) {
		play=true;
		room.changeRoom(1);
	} else if (play) {
		room.click(mMouseLoc);
	} else if (credits) {
		credits = false;
	}
}

void beast::mouseMove(MouseEvent event) {
	mMouseLoc = event.getPos();
}

void beast::mouseDrag(MouseEvent event) {
	mouseMove(event);
}

///////////////////////////////////////////////////////////////
/////			CONTROL LOGIC			/////
///////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////
/////			TAIL			/////
///////////////////////////////////////////////////////////////
CINDER_APP_BASIC(beast, RendererGl)
