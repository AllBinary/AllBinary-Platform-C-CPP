// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/InGameMenuBehavior.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameCanvasNonBotPaintable.h"


static InGameMenuBehavior* InGameMenuBehavior_instanceC;








void InGameMenuBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InGameMenuBehavior_instanceC = InGameMenuBehavior_new();
}

void InGameMenuBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InGameMenuBehavior", "BaseMenuBehavior");
    java_register_method("InGameMenuBehavior", "onDisplayChangeEvent", (void*) InGameMenuBehavior_onDisplayChangeEvent);
    java_register_method("InGameMenuBehavior", "initSpecialPaint", (void*) InGameMenuBehavior_initSpecialPaint);
    java_register_method("InGameMenuBehavior", "initMenu", (void*) InGameMenuBehavior_initMenu);
    java_register_method("InGameMenuBehavior", "updateMenu", (void*) InGameMenuBehavior_updateMenu);
    java_register_method("InGameMenuBehavior", "popupMenu", (void*) InGameMenuBehavior_popupMenu);
    java_register_method("InGameMenuBehavior", "closeMenu", (void*) InGameMenuBehavior_closeMenu);
}

void InGameMenuBehavior_init(InGameMenuBehavior* this) {
    InGameMenuBehavior_register();
    BaseMenuBehavior_init(&this->base);
}

InGameMenuBehavior* InGameMenuBehavior_new(void) {
    InGameMenuBehavior* this = java_object_alloc(sizeof(InGameMenuBehavior), "InGameMenuBehavior");
    InGameMenuBehavior_init(this);
    return this;
}


InGameMenuBehavior* InGameMenuBehavior_getInstance(void) {
        return (InGameMenuBehavior_staticInit(), InGameMenuBehavior_instanceC);
}


// throws Exception
void InGameMenuBehavior_onDisplayChangeEvent(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) {
        AllBinaryGameCanvas_updateMenuFromEvent(allBinaryGameCanvas, displayChangeEvent);
}


void InGameMenuBehavior_initSpecialPaint(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setNonBotPaintableP(allBinaryGameCanvas, GameCanvasNonBotPaintable_new(allBinaryGameCanvas));
}


// throws Exception
void InGameMenuBehavior_initMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_initMenu2(allBinaryGameCanvas);
}


// throws Exception
void InGameMenuBehavior_updateMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_initMenu2(allBinaryGameCanvas);
}


// throws Exception
void InGameMenuBehavior_popupMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_popupMenu2(allBinaryGameCanvas);
}


void InGameMenuBehavior_closeMenu(InGameMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_closeMenu2(allBinaryGameCanvas);
}

