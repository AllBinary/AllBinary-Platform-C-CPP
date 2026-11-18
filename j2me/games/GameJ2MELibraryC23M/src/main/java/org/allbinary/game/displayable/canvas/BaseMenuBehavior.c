// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BaseMenuBehavior.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


static BaseMenuBehavior* BaseMenuBehavior_instance;








void BaseMenuBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BaseMenuBehavior_instance = BaseMenuBehavior_new();
}

void BaseMenuBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseMenuBehavior", nullptr);
    java_register_method("BaseMenuBehavior", "onDisplayChangeEvent", (void*) BaseMenuBehavior_onDisplayChangeEvent);
    java_register_method("BaseMenuBehavior", "initSpecialPaint", (void*) BaseMenuBehavior_initSpecialPaint);
    java_register_method("BaseMenuBehavior", "initMenu", (void*) BaseMenuBehavior_initMenu);
    java_register_method("BaseMenuBehavior", "updateMenu", (void*) BaseMenuBehavior_updateMenu);
    java_register_method("BaseMenuBehavior", "popupMenu", (void*) BaseMenuBehavior_popupMenu);
    java_register_method("BaseMenuBehavior", "closeMenu", (void*) BaseMenuBehavior_closeMenu);
}

void BaseMenuBehavior_init(BaseMenuBehavior* this) {
    BaseMenuBehavior_register();
}

BaseMenuBehavior* BaseMenuBehavior_new(void) {
    BaseMenuBehavior* this = java_object_alloc(sizeof(BaseMenuBehavior), "BaseMenuBehavior");
    BaseMenuBehavior_init(this);
    return this;
}


BaseMenuBehavior* BaseMenuBehavior_getInstance(void) {
        return (BaseMenuBehavior_staticInit(), BaseMenuBehavior_instance);
}


// throws Exception
void BaseMenuBehavior_onDisplayChangeEvent(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas, DisplayChangeEvent* displayChangeEvent) {
}


void BaseMenuBehavior_initSpecialPaint(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        AllBinaryGameCanvas_setNonBotPaintableP(allBinaryGameCanvas, NullPaintable_getInstance());
}


// throws Exception
void BaseMenuBehavior_initMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void BaseMenuBehavior_updateMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


// throws Exception
void BaseMenuBehavior_popupMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}


void BaseMenuBehavior_closeMenu(BaseMenuBehavior* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
}

