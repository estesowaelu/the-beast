//
//  The Beast
//	A game conceived for Global Game Jam 2013
//
//  PrintLayer.cpp
//  Created by Tim Honeywell on 27 January 2013.
//

#include "PrintLayer.h"
#include "cinder/Color.h"
#include "cinder/gl/gl.h"
#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"
#include "cinder/app/AppBasic.h"
#include "cinder/Font.h"
#include "cinder/Text.h"

using namespace ci;
using namespace ci::app;

PrintLayer::PrintLayer() {}

void PrintLayer::setup() {
    TL = Vec2i(getWindowWidth()*.05, getWindowHeight()*.05);
    BR = Vec2i(getWindowWidth()*.95, getWindowHeight()*.35);
}

TextLayout PrintLayer::basicTemplate() {
    TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
    return screenText;
}

void PrintLayer::renderText(TextLayout screenText) {
    gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(TL, BR));
	gl::disableAlphaBlending();
}

void PrintLayer::Bed() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The sheets are neatly folded, untouched. A single piece of slightly torn paper lies crumpled in the middle of it.");
//	screenText.addLine("Inspect?");
    renderText(screenText);
}
void PrintLayer::WardrobeAjar1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door to the wardrobe is slightly ajar.");
	screenText.addLine("Peer inside?");
    renderText(screenText);
}
void PrintLayer::WardrobeAjar2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("There appears to be a key lying near one of the shoes.");
	screenText.addLine("Take?");
    renderText(screenText);
}
void PrintLayer::WardrobeAjar3() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("You now have a solid brass key.");
    renderText(screenText);
}
void PrintLayer::WardrobeAjar4() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("There doesn't seem to be anything else of interest in there.");
    renderText(screenText);
}
void PrintLayer::WardrobeClosed() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("An ornate wooden wardrobe. Dents and nicks marr the right side of the door.");
    renderText(screenText);
}
void PrintLayer::OpenBedroomWindow() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The open window gives a clear view of the raging thunderstorm.");
	screenText.addLine("The floor around the window is soaked.");
    renderText(screenText);
}
void PrintLayer::DeskMirror() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A snarling beast stares and growls back at you.");
    renderText(screenText);
}
void PrintLayer::ClosedHallwayWindow() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("You can hear the ferocity of the rain as it pelts hard against the windowpane.");
	screenText.addLine("The storm lights up the night sky.");
    renderText(screenText);
}
void PrintLayer::TableWithLamp1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A warm lamp sits atop the table. It barely gives off enough light to illuminate the floor below you.");
    renderText(screenText);
}
void PrintLayer::TableWithLamp2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("There appears to be a used box of matches on the table.");
	screenText.addLine("Take?");
    renderText(screenText);
}
void PrintLayer::LockedDoor1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door is locked shut. It appears to be quite sturdy.");
	screenText.addLine("Push?");
    renderText(screenText);
}
void PrintLayer::LockedDoor2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door doesn't budge.");
	screenText.addLine("Use key?");
    renderText(screenText);
}
void PrintLayer::LockedDoor3() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door doesn't budge. It looks like it needs a key.");
    renderText(screenText);
}
void PrintLayer::LockedDoor4() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door opens easily.");
    renderText(screenText);
}
void PrintLayer::LockedBasementHallwayDoor() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The door is locked shut. It appears to be quite sturdy. The lock is extremely unique; only a certain type of key will fit.");
	screenText.addLine("Something is drawing you in this direction...");
	screenText.addLine("Push?");
    renderText(screenText);
}
void PrintLayer::BasementDoor() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::BlockedDoorNoLock() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::StuckDoor() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Fireplace() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Painting1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Painting2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Chandelier() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::GrandHallStairsBottom() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::GrandHallStairsTop() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::PottedPlant1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::PottedPlant2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Bookcase1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Bookcase2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::Bookcase3() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("");
	screenText.addLine("");
    renderText(screenText);
}
void PrintLayer::LongCouch() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A long (colored) sofa extends across the living room. There a few noticeable tears along the side. Something seems to be sticking out between the cushions.");
	screenText.addLine("Inspect?");
    renderText(screenText);
}
void PrintLayer::KitchenEntranceway() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A large wooden entrance way to the kitchen.");
	screenText.addLine("Enter?");
    renderText(screenText);
}
void PrintLayer::KitchenClock() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A round kitchen clock. The time appears stoped at 10:25");
    renderText(screenText);
}
void PrintLayer::LivingRoomEntrance() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A large wooden entrance way to the living room.");
	screenText.addLine("Enter?");
    renderText(screenText);
}
void PrintLayer::GrandfatherClockFar() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("An old, handcrafted grandfather clock stands guards at the top of the stairs, like an all-seeing sentinel.");
	screenText.addLine("Inspect?");
    renderText(screenText);
}
void PrintLayer::GrandfatherClockFace1() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("You stare at the clock face. You can hear the sounds of gears clanking and twirling away inside.");
	screenText.addLine("A small keyhole resides nearby.");
	screenText.addLine("Use key?");
    renderText(screenText);
}
void PrintLayer::GrandfatherClockFace2() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("You hear a clicking and sudden “thump” come from somewhere closeby.");
    renderText(screenText);
}
void PrintLayer::TreesOffBalcony() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The pine trees sway back and forth in the storm, the twisting wind between their branches letting out a terrible moan, seemingly reflecting their dread in the drowning darkness of the night.");
    renderText(screenText);
}
void PrintLayer::Cabinets() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("Detailed wooden cabinets line the kitchen. A single cabinet was left open. Assorted tea cups line the shelf.");
    renderText(screenText);
}
void PrintLayer::Stove() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("The flames on the stove still burn beneath a boiling pot of water. The water is shallow and nearly boiled away.");
    renderText(screenText);
}
void PrintLayer::KitchenTable() {
	TextLayout screenText = basicTemplate();
	screenText.addLine("A jug of sparkling water sits atop the kitchen table.");
	screenText.addLine("Take?");
    renderText(screenText);
}
