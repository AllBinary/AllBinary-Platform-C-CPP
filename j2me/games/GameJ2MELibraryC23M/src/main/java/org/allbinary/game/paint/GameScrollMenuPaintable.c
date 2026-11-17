/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
#include "org/allbinary/graphics/color/ColorChangeListener.h"
#include "org/allbinary/graphics/form/FormPaintable.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/paint/BasicGameDemoPaintable.h"

typedef struct GameScrollMenuPaintable GameScrollMenuPaintable;
struct GameScrollMenuPaintable {
    BasicGameDemoPaintable base;
    ColorChangeListener ColorChangeListener_interface;
};


GameScrollMenuPaintable* GameScrollMenuPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor);

void GameScrollMenuPaintable_init(GameScrollMenuPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor);
void GameScrollMenuPaintable_setState(GameScrollMenuPaintable* this, int32_t state);
void GameScrollMenuPaintable_onEvent(GameScrollMenuPaintable* this, AllBinaryEventObject* eventObject);
void GameScrollMenuPaintable_setColor(GameScrollMenuPaintable* this, BasicColor* basicColor);


void GameScrollMenuPaintable_init(GameScrollMenuPaintable* this, Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor) {
        BasicGameDemoPaintable_init(&this->base, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface);
        GameScrollMenuPaintable_setColor(this, basicColor);
        ColorChangeEventHandler_addListenerInterface(ColorChangeEventHandler_getInstance(), this);
}

GameScrollMenuPaintable* GameScrollMenuPaintable_new(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor) {
    GameScrollMenuPaintable* this = calloc(1, sizeof(GameScrollMenuPaintable));
    GameScrollMenuPaintable_init(this, mainDemoStatePaintable, ownershipPaintable, helpPaintableInterface, basicColor);
    return this;
}


void GameScrollMenuPaintable_setState(GameScrollMenuPaintable* this, int32_t state) {
        GameScrollMenuPaintable_setCurrentStatePaintable(this, GameScrollMenuPaintable_getMainDemoStatePaintable(this));
}


void GameScrollMenuPaintable_onEvent(GameScrollMenuPaintable* this, AllBinaryEventObject* eventObject) {
}


void GameScrollMenuPaintable_setColor(GameScrollMenuPaintable* this, BasicColor* basicColor) {
        MainGameDemoStatePaintable* mainGameDemoStatePaintable = ((MainGameDemoStatePaintable*) GameScrollMenuPaintable_getMainDemoStatePaintable(this));
        FormPaintable* formPaintable = ((FormPaintable*) MainGameDemoStatePaintable_getMenuPaintableInterface(mainGameDemoStatePaintable));
        ScrollSelectionForm* scrollSelectionForm = ((ScrollSelectionForm*) FormPaintable_getForm(formPaintable));
        JAVA_CALL(MainGameDemoStatePaintable_getOwnershipPaintableInterface(mainGameDemoStatePaintable), setBasicColorP, basicColor);
        ScrollSelectionForm_setButtonBasicColor(scrollSelectionForm, basicColor);
        ABTextItem* item = nullptr;
        ABStringComponent* stringComponent = nullptr;
        for (int32_t index = ScrollSelectionForm_size(scrollSelectionForm) - 1; index >= 0; index--) {
            item = ((ABTextItem*) ScrollSelectionForm_get(scrollSelectionForm, index));
            stringComponent = ABTextItem_getLabelStringComponent(item);
            if (stringComponent != nullptr) {
                ABStringComponent_setForegroundBasicColor(stringComponent, basicColor);
            }
        }
}

