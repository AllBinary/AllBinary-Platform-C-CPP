/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer.item

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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/game/layer/CostLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/rts/technology/event/TechEventListenerInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct RTSLayerCostAnimation RTSLayerCostAnimation;
struct RTSLayerCostAnimation {
    Animation base;
    TechEventListenerInterface TechEventListenerInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    PrimitiveLongUtil* primitiveLongUtil;
    const char* DOLLAR;
    Image* image;
    CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface;
    MyFontProcessor* myFontProcessor;
    uint16_t* costString;
    int32_t len;
    int32_t adjustedCostX;
    int32_t fontHeight;
};


RTSLayerCostAnimation* RTSLayerCostAnimation_new(Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);

void RTSLayerCostAnimation_init(RTSLayerCostAnimation* this, Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface);
void RTSLayerCostAnimation_updateMeasurement(RTSLayerCostAnimation* this, Graphics* graphics);
void RTSLayerCostAnimation_onEvent(RTSLayerCostAnimation* this, AllBinaryEventObject* event);
void RTSLayerCostAnimation_onTechEvent(RTSLayerCostAnimation* this, AllBinaryEventObject* event);
void RTSLayerCostAnimation_update(RTSLayerCostAnimation* this);
void RTSLayerCostAnimation_paintXY(RTSLayerCostAnimation* this, Graphics* graphics, int32_t x, int32_t y);

static void RTSLayerCostAnimation_initFields(RTSLayerCostAnimation* this) {
    this->logUtil = LogUtil_getInstance();
    this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(10000);
    this->DOLLAR = "$";
    
    
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->costString = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->len = 0;
    this->adjustedCostX = 0;
    this->fontHeight = 0;
}


void RTSLayerCostAnimation_init(RTSLayerCostAnimation* this, Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
    Animation_init(&this->base);
    RTSLayerCostAnimation_initFields(this);
        this->image = image;
        this->layerInterfaceFactoryInterface = layerInterfaceFactoryInterface;
        RTSLayerCostAnimation_update(this);
}

RTSLayerCostAnimation* RTSLayerCostAnimation_new(Image* image, CostLayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
    RTSLayerCostAnimation* this = calloc(1, sizeof(RTSLayerCostAnimation));
    RTSLayerCostAnimation_init(this, image, layerInterfaceFactoryInterface);
    return this;
}


void RTSLayerCostAnimation_updateMeasurement(RTSLayerCostAnimation* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->adjustedCostX = Font_stringWidth(font, this->DOLLAR);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void RTSLayerCostAnimation_onEvent(RTSLayerCostAnimation* this, AllBinaryEventObject* event) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void RTSLayerCostAnimation_onTechEvent(RTSLayerCostAnimation* this, AllBinaryEventObject* event) {
        JAVA_TRY {
            RTSLayerCostAnimation_update(this);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "onTechEvent", e);
        } JAVA_END_TRY;
}


// throws Exception
void RTSLayerCostAnimation_update(RTSLayerCostAnimation* this) {
        this->len = 0;
        this->costString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, CostLayerInterfaceFactoryInterface_getCost(this->layerInterfaceFactoryInterface));
        this->len = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
}


void RTSLayerCostAnimation_paintXY(RTSLayerCostAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Animation_paintXY((&this->base), graphics, x, y);
        int32_t adjustedCostY = Image_getHeight(this->image) - this->fontHeight;
        int32_t xa = x + 2;
        Graphics_drawString(graphics, this->DOLLAR, xa, y + adjustedCostY, 0);
        Graphics_drawChars(graphics, this->costString, 0, this->len, x + this->adjustedCostX, y + adjustedCostY, 0);
}

