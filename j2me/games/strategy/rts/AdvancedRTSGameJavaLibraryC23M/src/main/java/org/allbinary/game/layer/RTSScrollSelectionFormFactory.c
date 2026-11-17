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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"

typedef struct RTSScrollSelectionFormFactory RTSScrollSelectionFormFactory;
struct RTSScrollSelectionFormFactory {
    char unused;
};


RTSScrollSelectionFormFactory* RTSScrollSelectionFormFactory_new(void);
ScrollSelectionForm* RTSScrollSelectionFormFactory_getInstance(const char* formLabel, ABCustomItem** items);

void RTSScrollSelectionFormFactory_init(RTSScrollSelectionFormFactory* this) {
}

RTSScrollSelectionFormFactory* RTSScrollSelectionFormFactory_new(void) {
    RTSScrollSelectionFormFactory* this = calloc(1, sizeof(RTSScrollSelectionFormFactory));
    RTSScrollSelectionFormFactory_init(this);
    return this;
}


// throws Exception
ScrollSelectionForm* RTSScrollSelectionFormFactory_getInstance(const char* formLabel, ABCustomItem** items) {
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        int32_t menuX = CommonButtons_getInstance()->STANDARD_BUTTON_SIZE + TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper);
        int32_t width = DisplayInfoSingleton_getLastWidth(displayInfo) - (menuX * 2);
        Rectangle* menuRectangle = Rectangle_new(PointFactory_createXY(PointFactory_getInstance(), menuX, 16), width, CommonButtons_getInstance()->STANDARD_BUTTON_SIZE);
        return MultipleScrollSelectionHorizontalForm_createForm(formLabel, items, menuRectangle, FormTypeFactory_getInstance()->HORIZONTAL_FORM, 0, basicColorFactory->BLACK, basicColorFactory->WHITE);
}

