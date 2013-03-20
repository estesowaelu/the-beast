//
//  PrintLayer.cpp
//  beast
//
//  Created by Tim Honeywell on 13/01/27.
//
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

PrintLayer::PrintLayer() {
}

void PrintLayer::Bed() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The sheets are neatly folded, untouched. A single piece of slightly torn paper lies crumpled in the middle of it.");
//	screenText.addLine("Inspect?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::WardrobeAjar1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door to the wardrobe is slightly ajar.");
	screenText.addLine("Peer inside?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::WardrobeAjar2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("There appears to be a key lying near one of the shoes.");
	screenText.addLine("Take?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::WardrobeAjar3() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("You now have a solid brass key.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::WardrobeAjar4() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("There doesn't seem to be anything else of interest in there.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::WardrobeClosed() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("An ornate wooden wardrobe. Dents and nicks marr the right side of the door.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::OpenBedroomWindow() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The open window gives a clear view of the raging thunderstorm.");
	screenText.addLine("The floor around the window is soaked.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::DeskMirror() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A snarling beast stares and growls back at you.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::ClosedHallwayWindow() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("You can hear the ferocity of the rain as it pelts hard against the windowpane.");
	screenText.addLine("The storm lights up the night sky.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::TableWithLamp1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A warm lamp sits atop the table. It barely gives off enough light to illuminate the floor below you.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::TableWithLamp2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("There appears to be a used box of matches on the table.");
	screenText.addLine("Take?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LockedDoor1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door is locked shut. It appears to be quite sturdy.");
	screenText.addLine("Push?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LockedDoor2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door doesn't budge.");
	screenText.addLine("Use key?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LockedDoor3() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door doesn't budge. It looks like it needs a key.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LockedDoor4() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door opens easily.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LockedBasementHallwayDoor() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The door is locked shut. It appears to be quite sturdy. The lock is extremely unique; only a certain type of key will fit.");
	screenText.addLine("Something is drawing you in this direction...");
	screenText.addLine("Push?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::BasementDoor() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::BlockedDoorNoLock() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::StuckDoor() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Fireplace() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Painting1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Painting2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Chandelier() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::GrandHallStairsBottom() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::GrandHallStairsTop() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::PottedPlant1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::PottedPlant2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Bookcase1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Bookcase2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Bookcase3() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("");
	screenText.addLine("");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LongCouch() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A long (colored) sofa extends across the living room. There a few noticeable tears along the side. Something seems to be sticking out between the cushions.");
	screenText.addLine("Inspect?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::KitchenEntranceway() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A large wooden entrance way to the kitchen.");
	screenText.addLine("Enter?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::KitchenClock() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A round kitchen clock. The time appears stoped at 10:25");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::LivingRoomEntrance() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A large wooden entrance way to the living room.");
	screenText.addLine("Enter?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::GrandfatherClockFar() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("An old, handcrafted grandfather clock stands guards at the top of the stairs, like an all-seeing sentinel.");
	screenText.addLine("Inspect?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::GrandfatherClockFace1() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("You stare at the clock face. You can hear the sounds of gears clanking and twirling away inside.");
	screenText.addLine("A small keyhole resides nearby.");
	screenText.addLine("Use key?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::GrandfatherClockFace2() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("You hear a clicking and sudden “thump” come from somewhere closeby.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::TreesOffBalcony() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The pine trees sway back and forth in the storm, the twisting wind between their branches letting out a terrible moan, seemingly reflecting their dread in the drowning darkness of the night.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Cabinets() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("Detailed wooden cabinets line the kitchen. A single cabinet was left open. Assorted tea cups line the shelf.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::Stove() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("The flames on the stove still burn beneath a boiling pot of water. The water is shallow and nearly boiled away.");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
void PrintLayer::KitchenTable() {
	TextLayout screenText;
	screenText.clear(ColorA(0,0,0,0));
	screenText.setColor(ColorA(1,1,1,1));
	screenText.setBorder(10, 10);
	screenText.addLine("A jug of sparkling water sits atop the kitchen table.");
	screenText.addLine("Take?");
	gl::enableAlphaBlending();
	gl::Texture textLayer(screenText.render());
	textLayer.enableAndBind();
	gl::draw(textLayer, Rectf(0, 125, 1920, 225));
	gl::disableAlphaBlending();
}
