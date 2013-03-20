//
//  Room.cpp
//  beast
//
//  Created by Tim Honeywell on 13/01/26.
//
//

#include "Room.h"
#include "cinder/Font.h"
#include "cinder/Text.h"
#include "cinder/Color.h"
#include "cinder/Rand.h"
#include "cinder/gl/gl.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"
#include "cinder/app/AppBasic.h"
#include "cinder/CinderMath.h"
#include "Resources.h"
#include "AudioLayer.h"

using namespace ci;
using namespace ci::app;

///////////////////////////////////////////////////////////////
/////			INITIALIZATION		/////
///////////////////////////////////////////////////////////////
Room::Room() {
	marker = 0;
}

void Room::setup() {
	mRoomID = 0;
	
	aLayer.initialize();
	
	framecounter = 0;
		
	background01 = loadImage(loadResource(RES_BG_01));
	background02 = loadImage(loadResource(RES_BG_02));
	background03 = loadImage(loadResource(RES_BG_03));
	background04 = loadImage(loadResource(RES_BG_04));
	background05 = loadImage(loadResource(RES_BG_05));
	background06 = loadImage(loadResource(RES_BG_06));
	background07 = loadImage(loadResource(RES_BG_07));
	background08 = loadImage(loadResource(RES_BG_08));
	background09 = loadImage(loadResource(RES_BG_09));
	background10 = loadImage(loadResource(RES_BG_10));
	background11 = loadImage(loadResource(RES_BG_11));
	background12 = loadImage(loadResource(RES_BG_12));
	background13 = loadImage(loadResource(RES_BG_13));
	background14 = loadImage(loadResource(RES_BG_14));
	candle01 = loadImage(loadResource(RES_IT_01));
	candle02 = loadImage(loadResource(RES_IT_02));
	candle03 = loadImage(loadResource(RES_IT_03));
	candle04 = loadImage(loadResource(RES_IT_04));
	window01 = loadImage(loadResource(RES_IT_09));
	window02 = loadImage(loadResource(RES_IT_08));
	window03 = loadImage(loadResource(RES_IT_11));
	window04 = loadImage(loadResource(RES_IT_10));
	fireplace01 = loadImage(loadResource(RES_IT_05));
	fireplace02 = loadImage(loadResource(RES_IT_06));
	mirror01 = loadImage(loadResource(RES_IT_07));
		
//	aLayer.playSound(aLayer.tempSTrack);
	
	matches = false;
	R01key = false;
	R01ClickWhich = 0;
	R01WindowClick = 0;
	R01TableLampClick = 0;
	R01P1Click = 0;
	R01P2Click = 0;
	R01DoorClick = 0;
	R01DoorLock = true;
	R01DoorPush = 0;
	
}

///////////////////////////////////////////////////////////////
/////			UPDATING		/////
///////////////////////////////////////////////////////////////
void Room::update() {
	framecounter++;
	aLayer.service();
}

void Room::changeRoom(int newRoom) {
	mRoomID = newRoom;
	aLayer.silence();
	switch (mRoomID) {
			//master bedroom
		case 1:	aLayer.setSoundVolume(aLayer.rainIndoors, 255);
				aLayer.playSound(aLayer.rainIndoors);
				aLayer.setSoundVolume(aLayer.Heartbeat01, 255);
				aLayer.playSound(aLayer.Heartbeat01);
				break;
			//painting hallway
		case 2:	aLayer.setSoundVolume(aLayer.Heartbeat02, 255);
				aLayer.playSound(aLayer.Heartbeat02);
				break;
			// ghallway bottom
		case 3:	aLayer.setSoundVolume(aLayer.Heartbeat03, 255);
				aLayer.playSound(aLayer.Heartbeat03);
				break;
			// ghallway top
		case 4:	aLayer.setSoundVolume(aLayer.Heartbeat04, 255);
				aLayer.playSound(aLayer.Heartbeat04);
				aLayer.setSoundVolume(aLayer.tickTock, 180);
				aLayer.playSound(aLayer.tickTock);
				aLayer.setSoundVolume(aLayer.rainIndoors, 255);
				aLayer.playSound(aLayer.rainIndoors);
				break;
			// living
		case 5:	aLayer.setSoundVolume(aLayer.Heartbeat05, 255);
				aLayer.playSound(aLayer.Heartbeat05);
				break;
			// kitchen
		case 6:	aLayer.setSoundVolume(aLayer.Heartbeat06, 255);
				aLayer.playSound(aLayer.Heartbeat06);
									// boiling pot??
				break;
			// guest
		case 7:	aLayer.setSoundVolume(aLayer.Heartbeat07, 255);
				aLayer.playSound(aLayer.Heartbeat07);
				aLayer.setSoundVolume(aLayer.fire, 255);
				aLayer.playSound(aLayer.fire);
				break;
			// lib
		case 8:	aLayer.setSoundVolume(aLayer.Heartbeat08, 255);
				aLayer.playSound(aLayer.Heartbeat08);
				break;
			// candles
		case 9:	aLayer.setSoundVolume(aLayer.Heartbeat09, 255);
				aLayer.playSound(aLayer.Heartbeat09);
				aLayer.setSoundVolume(aLayer.rainIndoors, 255);
				aLayer.playSound(aLayer.rainIndoors);
				break;
			// balcony
		case 10:	aLayer.setSoundVolume(aLayer.Heartbeat10, 255);
				aLayer.playSound(aLayer.Heartbeat10);
				aLayer.setSoundVolume(aLayer.rainOutdoors, 255);
				aLayer.playSound(aLayer.rainOutdoors);
				break;
			// basement hallway
		case 11:	aLayer.setSoundVolume(aLayer.Heartbeat11, 255);
				aLayer.playSound(aLayer.Heartbeat11);
				break;
			// basement stairs top
		case 12:	aLayer.setSoundVolume(aLayer.Heartbeat12, 255);
				aLayer.playSound(aLayer.Heartbeat12);
				break;
			// basement stairs bottom
		case 13:	aLayer.setSoundVolume(aLayer.Heartbeat13, 255);
				aLayer.playSound(aLayer.Heartbeat13);
				break;
		default:	break;
	}
	framecounter = 0;
}

void Room::click(Vec2i mMouseLoc) {
	switch (mRoomID) {
		case 1:		updateRoom01(mMouseLoc);			break;
		case 2:		updateRoom02(mMouseLoc);			break;
		case 3:		updateRoom03(mMouseLoc);			break;
		case 4:		updateRoom04(mMouseLoc);			break;
		case 5:		updateRoom05(mMouseLoc);			break;
		case 6:		updateRoom06(mMouseLoc);			break;
		case 7:		updateRoom07(mMouseLoc);			break;
		case 8:		updateRoom08(mMouseLoc);			break;
		case 9:		updateRoom09(mMouseLoc);			break;
		case 10:	updateRoom10(mMouseLoc);			break;
		case 11:	updateRoom11(mMouseLoc);			break;
		case 12:	updateRoom12(mMouseLoc);			break;
		case 13:	updateRoom13(mMouseLoc);			break;
		default:	break;
	}
}

void Room::updateRoom01(Vec2i mMouseLoc) {
	///////MASTER BEDROOM
	aLayer.loopSound(aLayer.rainIndoors);
	// examine window
	if (mMouseLoc.x>55 && mMouseLoc.x<795 && mMouseLoc.y>335 && mMouseLoc.y<956) {
		R01ClickWhich = 1;
		R01WindowClick++;
	}
	// examine table
	else if (mMouseLoc.x>500 && mMouseLoc.x<720 && mMouseLoc.y>840 && mMouseLoc.y<1064) {
		R01ClickWhich = 2;
		if(R01TableLampClick==1) {
			matches = true;
			// trigger pickup sound
			R01TableLampClick++;
		} else R01TableLampClick++;
	}
	// examine bed
	else if (mMouseLoc.x>767 && mMouseLoc.x<1036 && mMouseLoc.y>866 && mMouseLoc.y<1107) {
		R01ClickWhich = 3;
		if(R01BedClick==1) {
			// display journal (entry 01)
			// trigger pick up paper sound
			R01BedClick++;
		} else R01BedClick++;
	}
	// examine wardrobe
	else if (mMouseLoc.x>1102 && mMouseLoc.x<1356 && mMouseLoc.y>772 && mMouseLoc.y<1054) {
		R01ClickWhich = 4;
		if(R01WardrobeClick==1) {
			// trigger pick up key sound
			R01key = true;
			R01WardrobeClick++;
		} else R01WardrobeClick++;
	}
	// examine plant
	else if (mMouseLoc.x>1387 && mMouseLoc.x<1516 && mMouseLoc.y>830 && mMouseLoc.y<1038) {
		R01ClickWhich = 5;
		R01P1Click++;
	}
	// examine door
	else if (mMouseLoc.x>1545 && mMouseLoc.x<1725 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
//		R01ClickWhich = 6;
//		if (R01DoorClick ==2) {
			
			// trigger unlock sound
			// trigger advance to next scene (painting hallway)
			changeRoom(2);				///////advance room
//			R01DoorClick++;
//		} else R01DoorClick++;
	}
	// examine plant
	else if (mMouseLoc.x>1772 && mMouseLoc.x<1884 && mMouseLoc.y>820 && mMouseLoc.y<1040) {
		R01ClickWhich = 7;
		R01P2Click++;
	} else {}
}
void Room::updateRoom02(Vec2i mMouseLoc) {
	//////1ST FLOOR HALLWAY
	
	// examine painting
	if (mMouseLoc.x>686 && mMouseLoc.x<1224 && mMouseLoc.y>564 && mMouseLoc.y<937) {
		pLayer.Painting1();
	}
	// turn candles on and off
	else if (mMouseLoc.x>1772 && mMouseLoc.x<1884 && mMouseLoc.y>820 && mMouseLoc.y<1040) {
	}
	// door back to master bedroom
	else if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(1);				///////advance room
	}
	// bash door to grand hallway
	// get journal entry (02) from under door
	else if (mMouseLoc.x>1585 && mMouseLoc.x<1725 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(3);				///////advance room
	}
}
void Room::updateRoom03(Vec2i mMouseLoc) {
	///////GRAND HALLWAY BOTTOM
	// examine plants
	// examine and take stairs to grand hallway top
	if (mMouseLoc.x>620 && mMouseLoc.x<1297 && mMouseLoc.y>560 && mMouseLoc.y<1106) {
		changeRoom(4);				///////advance room
	}
	// door back to painting hallway
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(2);				///////advance room
	}
	// take door to living room
	if (mMouseLoc.x>1584 && mMouseLoc.x<1784 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(5);				///////advance room
	}
}
void Room::updateRoom04(Vec2i mMouseLoc) {
	///////////GRAND HALLWAY TOP
	aLayer.loopSound(aLayer.tickTock);
	aLayer.loopSound(aLayer.rainIndoors);
	// examine painting
	// examine plants
	// examine desk (lamp)
	// examine window
	// examine doors (1 locked, guest bedroom) (door to library blocked by device)
	if (mMouseLoc.x>1583 && mMouseLoc.x<1723 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(7);				///////advance room
	}
	// use clock face to open door to library
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(8);				///////advance room
	}
	// stairs back down
	if (mMouseLoc.x>787 && mMouseLoc.x<1127 && mMouseLoc.y>1066 && mMouseLoc.y<1200) {
		changeRoom(3);				///////advance room
	}
}
void Room::updateRoom05(Vec2i mMouseLoc) {
	////////LIVING ROOM
	// examine couch to find key to open guest bedroom
	// examine entrance to kitchen and take it
	if (mMouseLoc.x>962 && mMouseLoc.x<1352 && mMouseLoc.y>697 && mMouseLoc.y<1015) {
		changeRoom(6);				///////advance room
	}
	// examine 2 paintings
	// examine 1 regular plant, 1 plant holds diary (03) & unique description
	// door back to grand hallway bottom
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(3);				///////advance room
	}
	// examine door to basement hallway (special lock description)
	if (mMouseLoc.x>1585 && mMouseLoc.x<1724 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(11);				///////advance room
	}
}
void Room::updateRoom06(Vec2i mMouseLoc) {
	//////// KITCHEN
	// door back to living room
	if (mMouseLoc.x>1774 && mMouseLoc.x<1920 && mMouseLoc.y>684 && mMouseLoc.y<1016) {
		changeRoom(5);				///////advance room
	}
	// examine clock
	// examine table (holding jug of water, takeable)
	// examine stove
	// examine cabinet
}
void Room::updateRoom07(Vec2i mMouseLoc) {
	aLayer.loopSound(aLayer.fire);
	////////GUEST BEDROOM
	// examine wardrobe
	// examine bed
	// cracling fireplace (extinguishable)
	// examine plants
	// examine desk
	// diary entry #4 (from wardrobe)
	// door back to grand hall top
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(4);				///////advance room
	}
}
void Room::updateRoom08(Vec2i mMouseLoc) {
	///////LIBRARY
	// examine plants
	// action candles
	// examine chandelier
	// door to hall of candles (bash)
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(9);				///////advance room
	}
	// door back to grand hall top
	if (mMouseLoc.x>1584 && mMouseLoc.x<1723 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(4);				///////advance room
	}
	// examine books (3)
	// diary #5
}
void Room::updateRoom09(Vec2i mMouseLoc) {
	/////////HallofCAndles
	aLayer.loopSound(aLayer.rainIndoors);
	// door back to library
	if (mMouseLoc.x>1584 && mMouseLoc.x<1723 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(8);				///////advance room
	}
	// actionable candles
	// door (mechanical block) to balcony
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(10);				///////advance room
	}
	// small window
}
void Room::updateRoom10(Vec2i mMouseLoc) {
	////////BALCONY
	aLayer.loopSound(aLayer.rainOutdoors);
	// flickering background trees
	// pots (diary 6)(key to basement)
	// ivy
	// door back to hall of candles
	if (mMouseLoc.x>1591 && mMouseLoc.x<1661 && mMouseLoc.y>776 && mMouseLoc.y<1072) {
		changeRoom(9);				///////advance room
	}
}
void Room::updateRoom11(Vec2i mMouseLoc) {
	///////////BASEMENT HALLWAY
	// door back to living room
	if (mMouseLoc.x>195 && mMouseLoc.x<333 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(5);				///////advance room
	}
	// examine painting
	// examine door to basement (bash)
	if (mMouseLoc.x>1584 && mMouseLoc.x<1723 && mMouseLoc.y>745 && mMouseLoc.y<1015) {
		changeRoom(12);				///////advance room
	}
	// examine desk (diary 7 + scribbled note)
	// examine paper scraps
}
void Room::updateRoom12(Vec2i mMouseLoc) {
	////////BASEMENTSTAIRSTOP
	// examine glow from downstairs
	if (mMouseLoc.x>1155 && mMouseLoc.x<1920 && mMouseLoc.y>607 && mMouseLoc.y<1200) {
		changeRoom(13);				///////advance room
	}
	// door back to hallway
	if (mMouseLoc.x>43 && mMouseLoc.x<183 && mMouseLoc.y>131 && mMouseLoc.y<405) {
		changeRoom(11);				///////advance room
	}
}
void Room::updateRoom13(Vec2i mMouseLoc) {
	///////BASEMENTBOTTOM
	// action Katherine
	// animated from there...
	// fade
	// george holds katherine
	// sirens
	// fade light, fade sirens, raise heartbeat
	// heartbeat stops
}

///////////////////////////////////////////////////////////////
/////			DRAWING			/////
///////////////////////////////////////////////////////////////
void Room::draw() {
	switch (mRoomID) {
		case 1:		drawRoom01();			break;
		case 2:		drawRoom02();			break;
		case 3:		drawRoom03();			break;
		case 4:		drawRoom04();			break;
		case 5:		drawRoom05();			break;
		case 6:		drawRoom06();			break;
		case 7:		drawRoom07();			break;
		case 8:		drawRoom08();			break;
		case 9:		drawRoom09();			break;
		case 10:	drawRoom10();			break;
		case 11:	drawRoom11();			break;
		case 12:	drawRoom12();			break;
		case 13:	drawRoom13();			break;
		default:	break;
	}
}
void Room::drawRoom01() {
	// Master Bedroom
	gl::clear();
	gl::enableAlphaBlending();
	background01.enableAndBind();
	gl::draw(background01, getWindowBounds());
	if (framecounter%1000 == 0) {
		marker = framecounter;
		window01.enableAndBind();
		gl::draw(window01, Rectf(55, 795, 335, 956));
	} else if (framecounter-marker < 10) {
		window02.enableAndBind();
		gl::draw(window02, Rectf(55, 795, 335, 956));
	} else if (framecounter-marker < 15) {
		window01.enableAndBind();
		gl::draw(window01, Rectf(55, 795, 335, 956));
	} else if (framecounter-marker < 30) {
		window02.enableAndBind();
		gl::draw(window02, Rectf(55, 795, 335, 956));
	} else {
		window01.enableAndBind();
		gl::draw(window01, Rectf(55, 795, 335, 956));
	}
	gl::disableAlphaBlending();
	switch(R01ClickWhich) {
		case 1:
			pLayer.OpenBedroomWindow(); ///
			break;
		case 2:
			pLayer.TableWithLamp2();
			break;
		case 3:
			if(R01BedClick==0) pLayer.Bed();
			else if(R01BedClick==1) pLayer.Bed(); //display note
			break;
		case 4:
			if(R01WardrobeClick==0)	pLayer.WardrobeAjar1();
			else if(R01WardrobeClick==1) pLayer.WardrobeAjar2();
			else if(R01WardrobeClick==2) pLayer.WardrobeAjar3();
			else pLayer.WardrobeAjar4();
			break;
		case 5:
			pLayer.PottedPlant1(); ///
			break;
		case 6:
			if(R01DoorLock) {
				if (R01DoorPush==0) pLayer.LockedDoor1();
				else {
					if (R01key) {
						pLayer.LockedDoor2();
						R01DoorLock = false;
					}
					else pLayer.LockedDoor3();
				}
			} else pLayer.LockedDoor4();
			break;
		case 7:
			pLayer.PottedPlant1(); ///
			break;
	}
}
void Room::drawRoom02() {
	// 1st Floor Hallway (Painting)
	gl::enableAlphaBlending();
	background02.enableAndBind();
	gl::draw(background02, getWindowBounds());
	int r = framecounter%60;
	if (r == 0) {
		int t = Rand::randInt(0,3);
		switch (t) {
			case 1:	candle01.enableAndBind();
				gl::draw(candle01, Rectf(400, 750, 490, 869));
				gl::draw(candle01, Rectf(1430, 750, 1520, 869));
				break;
			case 2: candle02.enableAndBind();
				gl::draw(candle02, Rectf(400, 750, 490, 869));
				gl::draw(candle02, Rectf(1430, 750, 1520, 869));
				break;
		}
	} else {
		candle03.enableAndBind();
		gl::draw(candle03, Rectf(400, 750, 490, 869));
		gl::draw(candle03, Rectf(1430, 750, 1520, 869));
	}
	gl::disableAlphaBlending();
}
void Room::drawRoom03() {
	// Grand Hallway bottom floor
	gl::enableAlphaBlending();
	background03.enableAndBind();
	gl::draw(background03, getWindowBounds());
	gl::disableAlphaBlending();
	
}
void Room::drawRoom04() {
	// Grand Hallway top floor
	// add star shap window with flash
	gl::clear();
	gl::enableAlphaBlending();
	background04.enableAndBind();
	gl::draw(background04, getWindowBounds());
	if (framecounter%1000 == 0) {
		marker = framecounter;
		window03.enableAndBind();
		gl::draw(window03, Rectf(835, 475, 1085, 714));
	} else if (framecounter-marker < 10) {
		window04.enableAndBind();
		gl::draw(window04, Rectf(835, 475, 1085, 714));
	} else if (framecounter-marker < 15) {
		window03.enableAndBind();
		gl::draw(window03, Rectf(835, 475, 1085, 714));
	} else if (framecounter-marker < 30) {
		window04.enableAndBind();
		gl::draw(window04, Rectf(835, 475, 1085, 714));
	} else {
		window03.enableAndBind();
		gl::draw(window03, Rectf(835, 475, 1085, 714));
	}
	gl::disableAlphaBlending();

}
void Room::drawRoom05() {
	// Living Room
	gl::enableAlphaBlending();
	background05.enableAndBind();
	gl::draw(background05, getWindowBounds());
	gl::disableAlphaBlending();
	
}
void Room::drawRoom06() {
	// Kitchen
	gl::enableAlphaBlending();
	background06.enableAndBind();
	gl::draw(background06, getWindowBounds());
	gl::disableAlphaBlending();
	

}
void Room::drawRoom07() {
	// Guest Bedroom
	// fireplace
	gl::enableAlphaBlending();
	background07.enableAndBind();
	gl::draw(background07, getWindowBounds());
	fireplace01.enableAndBind();
	gl::draw(fireplace01, Rectf(1275, 715, 1547, 1031));
	gl::disableAlphaBlending();
	

}
void Room::drawRoom08() {
	// Library
	// puzzle patterns
	gl::enableAlphaBlending();
	background08.enableAndBind();
	gl::draw(background08, getWindowBounds());
	gl::disableAlphaBlending();
	

}
void Room::drawRoom09() {
	// Hall of Candles
	// candles
	// flashing window
	gl::enableAlphaBlending();
	background09.enableAndBind();
	gl::draw(background09, getWindowBounds());
	gl::disableAlphaBlending();
	

}
void Room::drawRoom10() {
	// Balcony
	// background flash
	gl::enableAlphaBlending();
	background10.enableAndBind();
	gl::draw(background10, getWindowBounds());
	gl::disableAlphaBlending();
	
	if (framecounter%300 == 0) {
		marker = framecounter;
		background10.enableAndBind();
		gl::draw(background10, getWindowBounds());
	} else if (framecounter-marker < 10) {
		background14.enableAndBind();
		gl::draw(background14, getWindowBounds());
	} else if (framecounter-marker < 15) {
		background10.enableAndBind();
		gl::draw(background10, getWindowBounds());
	} else if (framecounter-marker < 30) {
		background14.enableAndBind();
		gl::draw(background14, getWindowBounds());
	} else {
		background10.enableAndBind();
		gl::draw(background10, getWindowBounds());
	}
}
void Room::drawRoom11() {
	// Basement Hallway
	// mirror
	gl::enableAlphaBlending();
	background11.enableAndBind();
	gl::draw(background11, getWindowBounds());
	gl::disableAlphaBlending();
	

}
void Room::drawRoom12() {
	// Basement_Top
	gl::enableAlphaBlending();
	background12.enableAndBind();
	gl::draw(background12, getWindowBounds());
	gl::disableAlphaBlending();
	

}
void Room::drawRoom13() {
	// Basement_Bottom
	// characters?
	gl::enableAlphaBlending();
	background13.enableAndBind();
	gl::draw(background13, getWindowBounds());
	gl::disableAlphaBlending();
	

}
