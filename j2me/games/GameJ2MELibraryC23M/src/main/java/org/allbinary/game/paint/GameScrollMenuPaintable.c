// Generated Code Do Not Modify
#include "org/allbinary/game/paint/GameScrollMenuPaintable.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
#include "org/allbinary/game/paint/MainGameDemoStatePaintable.h"
#if __has_include("org/allbinary/graphics/color/ColorChangeEventHandler.h")
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif







void GameScrollMenuPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameScrollMenuPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameScrollMenuPaintable", "BasicGameDemoPaintable");
    java_register_method("GameScrollMenuPaintable", "setState", (void*) GameScrollMenuPaintable_setState);
    java_register_method("GameScrollMenuPaintable", "onEvent", (void*) GameScrollMenuPaintable_onEvent);
    java_register_method("GameScrollMenuPaintable", "setColor", (void*) GameScrollMenuPaintable_setColor);
}


void GameScrollMenuPaintable_init(GameScrollMenuPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor) {
    GameScrollMenuPaintable_register();
        BasicGameDemoPaintable_init(&this->base, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface);
        GameScrollMenuPaintable_setColor(this, basicColor);
        BasicEventHandler_addListenerInterface(ColorChangeEventHandler_getInstance(), this);
}

GameScrollMenuPaintable* GameScrollMenuPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor) {
    GameScrollMenuPaintable* this = java_object_alloc(sizeof(GameScrollMenuPaintable), "GameScrollMenuPaintable");
    GameScrollMenuPaintable_init(this, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface, basicColor);
    return this;
}


void GameScrollMenuPaintable_setState(GameScrollMenuPaintable* this, int32_t state) {
        BasicGameDemoPaintable_setCurrentStatePaintable(this, BasicGameDemoPaintable_getMainDemoStatePaintable(this));
}


void GameScrollMenuPaintable_onEvent(GameScrollMenuPaintable* this, AllBinaryEventObject* eventObject) {
}


void GameScrollMenuPaintable_setColor(GameScrollMenuPaintable* this, BasicColor* basicColor) {
        MainGameDemoStatePaintable* mainGameDemoStatePaintable = ((MainGameDemoStatePaintable*) BasicGameDemoPaintable_getMainDemoStatePaintable(this));
        FormPaintable* formPaintable = ((FormPaintable*) MainGameDemoStatePaintable_getMenuPaintableInterface(mainGameDemoStatePaintable));
        ScrollSelectionForm* scrollSelectionForm = ((ScrollSelectionForm*) FormPaintable_getForm(formPaintable));
        Paintable_setBasicColorP(MainGameDemoStatePaintable_getOwnershipPaintableInterface(mainGameDemoStatePaintable), basicColor);
        ScrollSelectionForm_setButtonBasicColor(scrollSelectionForm, basicColor);
        ABTextItem* item = nullptr;
        ABStringComponent* stringComponent = nullptr;
        for (int32_t index = ABCustomForm_size(scrollSelectionForm) - 1; index >= 0; index--) {
            item = ((ABTextItem*) ABCustomForm_get(scrollSelectionForm, index));
            stringComponent = ABTextItem_getLabelStringComponent(item);
            if (stringComponent != nullptr) {
                ABStringComponent_setForegroundBasicColor(stringComponent, basicColor);
            }
        }
}

