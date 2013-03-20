//  beastApp.cpp
//	for Global Game Jam 2013
//  Created by Tim Honeywell on 13/01/26.
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

#define WIDTH 1920
#define HEIGHT 1200

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
	
	void drawTitle();
	void drawCredits();
	int creditscounter;

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
	
	bool play;
	bool credits;
	
	//UTILITIES
	Room room;
	int mRoomID;
	void changeRoom(int roomNumber);
	int inventorySize;
	
	//Display
	ci::Color mColor;
};

void beast::prepareSettings(Settings *settings){
    settings->setWindowSize(WIDTH, HEIGHT);
    settings->setFrameRate(60.0f);
}

void beast::setup() {
	mRoomID = 0;
	inventorySize = 10;
	mColor = Color(0.0f, 0.0f, 0.0f);
	creditscounter=0;

	play = false;
	credits = false;
	
	mMouseLoc = Vec2i(getWindowWidth()/2, getWindowHeight()/2);
	
	room.setup();
	app::setFullScreen();
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
	if (!play && !credits)		drawTitle();
	else if (!play && credits)	drawCredits();
	else						room.draw();
	app::console() << "Play: " << play << " Credits: " << credits << std::endl;
}

void beast::drawTitle() {
	gl::Texture titleIMG = loadImage(loadResource("BeastTitle.png"));
	titleIMG.enableAndBind();
	gl::draw(titleIMG, getWindowBounds());
	
/*	gl::clear();
	TextLayout screenText;
	screenText.setColor(Color(1,1,1));
	screenText.setBorder(20, 10);
	screenText.addLine("THE BEAST");
	screenText.addLine("click anywhere to continue");
	
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0,1100, 300,1200));
	gl::disableAlphaBlending();
*/
}

void beast::drawCredits() {
	creditscounter++;
	gl::clear();
	TextLayout screenText;
	screenText.setColor(Color(1,1,1));
	screenText.setBorder(20,10);
	////
	if(creditscounter<180) {
		screenText.addCenteredLine("STORY");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("Bobby Canciello");
	} else if(creditscounter<360) {
		screenText.addCenteredLine("LEVELS");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Bobby Canciello");
		screenText.addCenteredLine("Marc Repert");
	} else if(creditscounter<540) {
		screenText.addCenteredLine("CODE");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Tim Honeywell");
	} else if(creditscounter<720) {
		screenText.addCenteredLine("ART");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Bobby Canciello");
	} else if(creditscounter<900) {
		screenText.addCenteredLine("WRITING");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Marc Repert");
		screenText.addCenteredLine("Andy Lohmann");
		screenText.addCenteredLine("Bobby Canciello");
	} else if(creditscounter<1080) {
		screenText.addCenteredLine("SOUND");
		screenText.addCenteredLine("");
		screenText.addCenteredLine("Marc Repert");
	} else if(creditscounter<1260) {
//		screenText.addCenteredLine("MUSIC");
//		screenText.addCenteredLine("");
//		screenText.addCenteredLine("Martin Bayer");
	} else {
		creditscounter = 0;
		credits = false;
	}
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(800,450, 1160,750));
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
	} else if (!play && credits) {
		credits = false;
	} else if (play && !credits) {
		room.click(mMouseLoc);
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
