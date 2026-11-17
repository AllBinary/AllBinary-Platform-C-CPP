/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.building

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h"
#include "org/allbinary/game/ag/layer/hud/basic/NumberStringHudFactory.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/logic/math/MathUtil.h"

typedef struct BuildingInfoHudPaintable BuildingInfoHudPaintable;
struct BuildingInfoHudPaintable {
    SelectionHudPaintable base;
    LogUtil* logUtil;
    const char* HEALTH;
    NumberStringHud* productivityHud;
    NumberStringHud* efficiencyHud;
    NumberStringHud* healthHud;
    NumberStringHud* maxHealthHud;
    PathFindingLayerInterface* rtsLayer;
    int32_t currentHealth;
};

static BuildingInfoHudPaintable* BuildingInfoHudPaintable_instance;

BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void);
BuildingInfoHudPaintable* BuildingInfoHudPaintable_getInstance(void);

void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this);
void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics);
void BuildingInfoHudPaintable_setBasicColorP(BuildingInfoHudPaintable* this, BasicColor* basicColor);
void BuildingInfoHudPaintable_paint(BuildingInfoHudPaintable* this, Graphics* graphics);
void BuildingInfoHudPaintable_updateSelectionInfo(BuildingInfoHudPaintable* this);
void BuildingInfoHudPaintable_setRtsLayer(BuildingInfoHudPaintable* this, PathFindingLayerInterface* rtsLayer);

// Static fields with runtime initializers: call this once at startup
void BuildingInfoHudPaintable_staticInit(void) {
    BuildingInfoHudPaintable_instance = BuildingInfoHudPaintable_new();
}

static void BuildingInfoHudPaintable_initFields(BuildingInfoHudPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    this->HEALTH = "Health:";
    
    
    
    
    this->rtsLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
    this->currentHealth = 0;
}


BuildingInfoHudPaintable* BuildingInfoHudPaintable_getInstance(void) {
        return BuildingInfoHudPaintable_instance;
}


void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this) {
    SelectionHudPaintable_init(&this->base);
    BuildingInfoHudPaintable_initFields(this);
        NumberStringHudFactory* numberStringHudFactory = NumberStringHudFactory_getInstance();
        NumberStringHud* productivityHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;
        NumberStringHud* efficiencyHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;
        NumberStringHud* healthHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;
        NumberStringHud* maxHealthHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;
        JAVA_TRY {
            int32_t index = 0;
            BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
            BasicColor* basicColor = BuildingInfoHudPaintable_getBasicColorP(this);
            int32_t textX = this->textX;
            int32_t y = this->y;
            int32_t firstIndex = index;
            #if 0 /* Java local class: move it to file scope */
typedef struct ProductivityNumberStringHud ProductivityNumberStringHud;
struct ProductivityNumberStringHud {
    NumberStringHud base;
};


ProductivityNumberStringHud* ProductivityNumberStringHud_new(void);
            
            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this);
            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics);
            

            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this) {
                    SelectionHudPaintable_init(&this->base, "Productivity:", 999, this->base.basicHudFactory->ABSOLUTE, this->base.basicHudFactory->HORIZONTAL, 0, this->base.basicColor);
            }

            BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void) {
                BuildingInfoHudPaintable* this = calloc(1, sizeof(BuildingInfoHudPaintable));
                BuildingInfoHudPaintable_init(this);
                return this;
            }
            

            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics) {
                    Font* font = Graphics_getFont(graphics);
                    this->updateMaxWidth = this->base.textX;
                    this->updateMaxHeight = this->base.y + ((this->base.firstIndex + 1) * Font_getHeight(font));
                    SelectionHudPaintable_updateMeasurement((&this->base), graphics);
            }
#endif
            productivityHud = ProductivityNumberStringHud_new();
            index++;
            int32_t secondIndex = index;
            #if 0 /* Java local class: move it to file scope */
typedef struct EfficiencyNumberStringHud EfficiencyNumberStringHud;
struct EfficiencyNumberStringHud {
    NumberStringHud base;
};


EfficiencyNumberStringHud* EfficiencyNumberStringHud_new(void);
            
            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this);
            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics);
            

            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this) {
                    SelectionHudPaintable_init(&this->base, "Efficiency:", 999, this->base.basicHudFactory->ABSOLUTE, this->base.basicHudFactory->HORIZONTAL, 0, this->base.basicColor);
            }

            BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void) {
                BuildingInfoHudPaintable* this = calloc(1, sizeof(BuildingInfoHudPaintable));
                BuildingInfoHudPaintable_init(this);
                return this;
            }
            

            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics) {
                    SelectionHudPaintable_updateMeasurement((&this->base), graphics);
                    Font* font = Graphics_getFont(graphics);
                    this->updateMaxWidth = this->base.textX;
                    this->updateMaxHeight = this->base.y + ((this->base.secondIndex + 1) * Font_getHeight(font));
            }
#endif
            efficiencyHud = EfficiencyNumberStringHud_new();
            index++;
            const char* HEALTH = this->HEALTH;
            int32_t thirdIndex = index;
            #if 0 /* Java local class: move it to file scope */
typedef struct HealthNumberStringHud HealthNumberStringHud;
struct HealthNumberStringHud {
    NumberStringHud base;
};


HealthNumberStringHud* HealthNumberStringHud_new(void);
            
            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this);
            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics);
            

            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this) {
                    SelectionHudPaintable_init(&this->base, this->HEALTH, 99999, this->base.basicHudFactory->ABSOLUTE, this->base.basicHudFactory->HORIZONTAL, 0, this->base.basicColor);
            }

            BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void) {
                BuildingInfoHudPaintable* this = calloc(1, sizeof(BuildingInfoHudPaintable));
                BuildingInfoHudPaintable_init(this);
                return this;
            }
            

            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics) {
                    Font* font = Graphics_getFont(graphics);
                    this->updateMaxWidth = this->base.textX;
                    this->updateMaxHeight = this->base.y + ((this->base.thirdIndex + 1) * Font_getHeight(font));
                    SelectionHudPaintable_updateMeasurement((&this->base), graphics);
            }
#endif
            int32_t totalLength = ((int32_t) strlen(HEALTH)) + 1;
            healthHud = HealthNumberStringHud_new();
            int32_t fourthIndex = index;
            #if 0 /* Java local class: move it to file scope */
typedef struct MaxHealthNumberStringHud MaxHealthNumberStringHud;
struct MaxHealthNumberStringHud {
    NumberStringHud base;
};


MaxHealthNumberStringHud* MaxHealthNumberStringHud_new(void);
            
            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this);
            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics);
            

            void BuildingInfoHudPaintable_init(BuildingInfoHudPaintable* this) {
                    SelectionHudPaintable_init(&this->base, "/ ", 99999, this->base.basicHudFactory->ABSOLUTE, this->base.basicHudFactory->HORIZONTAL, 0, this->base.basicColor);
            }

            BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void) {
                BuildingInfoHudPaintable* this = calloc(1, sizeof(BuildingInfoHudPaintable));
                BuildingInfoHudPaintable_init(this);
                return this;
            }
            

            void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics) {
                    SelectionHudPaintable_updateMeasurement((&this->base), graphics);
                    Font* font = Graphics_getFont(graphics);
                    this->updateMaxWidth = this->base.textX + (this->base.totalLength * Font_getHeight(font));
                    this->updateMaxHeight = this->base.y + ((this->base.fourthIndex + 1) * Font_getHeight(font));
            }
#endif
            maxHealthHud = MaxHealthNumberStringHud_new();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
        this->productivityHud = productivityHud;
        this->efficiencyHud = efficiencyHud;
        this->healthHud = healthHud;
        this->maxHealthHud = maxHealthHud;
}

BuildingInfoHudPaintable* BuildingInfoHudPaintable_new(void) {
    BuildingInfoHudPaintable* this = calloc(1, sizeof(BuildingInfoHudPaintable));
    BuildingInfoHudPaintable_init(this);
    return this;
}


void BuildingInfoHudPaintable_updateMeasurement(BuildingInfoHudPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        int32_t totalLength = ((int32_t) strlen(this->HEALTH)) + MathUtil_getTotalDigits(MathUtil_getInstance(), this->currentHealth);
        NumberStringHud_setX(this->maxHealthHud, this->textX + MyFontProcessor_defaultStringWidth(font, totalLength));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void BuildingInfoHudPaintable_setBasicColorP(BuildingInfoHudPaintable* this, BasicColor* basicColor) {
        SelectionHudPaintable_setBasicColorP((&this->base), basicColor);
        NumberStringHud_setBasicColorP(this->productivityHud, basicColor);
        NumberStringHud_setBasicColorP(this->efficiencyHud, basicColor);
        NumberStringHud_setBasicColorP(this->healthHud, basicColor);
        NumberStringHud_setBasicColorP(this->maxHealthHud, basicColor);
}


void BuildingInfoHudPaintable_paint(BuildingInfoHudPaintable* this, Graphics* graphics) {
        SelectionHudPaintable_paint((&this->base), graphics);
        JAVA_CALL(this->myFontProcessor, process, graphics);
        NumberStringHud_paint(this->productivityHud, graphics);
        NumberStringHud_paint(this->efficiencyHud, graphics);
        NumberStringHud_paint(this->healthHud, graphics);
        NumberStringHud_paint(this->maxHealthHud, graphics);
        JAVA_CALL(BuildingInfoHudPaintable_getAnimationInterface(this), paintXY, graphics, this->imageX, this->y);
}


void BuildingInfoHudPaintable_updateSelectionInfo(BuildingInfoHudPaintable* this) {
        BuildingLayer* buildingLayer = ((BuildingLayer*) this->rtsLayer);
        BuildingInfoHudPaintable_setName(this, BuildingLayer_getName(buildingLayer));
        BuildingInfoHudPaintable_setAnimationInterface(this, BuildingLayer_getVerticleBuildAnimationInterface(buildingLayer));
        NumberStringHud_set(this->productivityHud, BuildingLayer_getProductivity(buildingLayer));
        NumberStringHud_set(this->efficiencyHud, BuildingLayer_getEfficiency(buildingLayer) / 100);
        this->currentHealth = JAVA_CALL(BuildingLayer_getHealthInterface(buildingLayer), getHealth);
        NumberStringHud_set(this->healthHud, this->currentHealth);
        this->myFontProcessor = this->updateMyFontProcessor;
        NumberStringHud_set(this->maxHealthHud, JAVA_CALL(BuildingLayer_getHealthInterface(buildingLayer), getMaxHealth));
}


void BuildingInfoHudPaintable_setRtsLayer(BuildingInfoHudPaintable* this, PathFindingLayerInterface* rtsLayer) {
        this->rtsLayer = rtsLayer;
}

