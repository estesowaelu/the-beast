//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  PrintLayer.h
//  Created by Tim Honeywell on 27 January 2013.
//

#pragma once

#include <iostream>
#include "cinder/Text.h"

class PrintLayer {
public:
	PrintLayer();
    
    ci::Vec2i TL;
    ci::Vec2i BR;
    
    void setup();
    
    ci::TextLayout basicTemplate();
    void renderText(ci::TextLayout screenText);
		
	void Bed();
	void WardrobeAjar1();
	void WardrobeAjar2();
	void WardrobeAjar3();
	void WardrobeAjar4();
	void WardrobeClosed();
	void OpenBedroomWindow();
	void DeskMirror();
	void ClosedHallwayWindow();
	void TableWithLamp1();
	void TableWithLamp2();
	void TableWithLamp3();
	void LockedDoor1();
	void LockedDoor2();
	void LockedDoor3();
	void LockedDoor4();
	void LockedBasementHallwayDoor();
	void BasementDoor();
	void BlockedDoorNoLock();
	void StuckDoor();
	void Fireplace();
	void Painting1();
	void Painting2();
	void Chandelier();
	void GrandHallStairsBottom();
	void GrandHallStairsTop();
	void PottedPlant1();
	void PottedPlant2();
	void Bookcase1();
	void Bookcase2();
	void Bookcase3();
	void LongCouch();
	void KitchenEntranceway();
	void KitchenClock();
	void LivingRoomEntrance();
	void GrandfatherClockFar();
	void GrandfatherClockFace1();
	void GrandfatherClockFace2();
	void TreesOffBalcony();
	void Cabinets();
	void Stove();
	void KitchenTable();

};
