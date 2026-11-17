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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/ImageItem.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/form/ScreenInfo.h"
#include "org/allbinary/logic/VectorUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CommandTextItemArrayFactory CommandTextItemArrayFactory;
struct CommandTextItemArrayFactory {
    BasicArrayList* list;
    Visitor* visitorInterface;
};


CommandTextItemArrayFactory* CommandTextItemArrayFactory_new(Visitor* visitorInterface);

void CommandTextItemArrayFactory_init(CommandTextItemArrayFactory* this, Visitor* visitorInterface);
ABCustomItem** CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory* this, Any* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

static void CommandTextItemArrayFactory_initFields(CommandTextItemArrayFactory* this) {
    this->list = BasicArrayListD_new();
    
}


void CommandTextItemArrayFactory_init(CommandTextItemArrayFactory* this, Visitor* visitorInterface) {
    CommandTextItemArrayFactory_initFields(this);
        this->visitorInterface = visitorInterface;
}

CommandTextItemArrayFactory* CommandTextItemArrayFactory_new(Visitor* visitorInterface) {
    CommandTextItemArrayFactory* this = calloc(1, sizeof(CommandTextItemArrayFactory));
    CommandTextItemArrayFactory_init(this, visitorInterface);
    return this;
}


ABCustomItem** CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory* this, Any* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        VectorUtil* vectorUtil = VectorUtil_getInstance();
        int32_t size = VectorUtil_getSize(vectorUtil, vector);
        BasicArrayList_clear(this->list);
        CommandTextItem* textItem = nullptr;
        int32_t priorityLimit = 7;
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        bool isLargeEnoughDisplayForBigMenu = (DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) >= ScreenInfo_getInstance()->MEDIUM_WIDTH) || (!DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastWidth(displayInfo) >= ScreenInfo_getInstance()->MEDIUM_WIDTH);
        if (!isLargeEnoughDisplayForBigMenu && size > 3) {
            priorityLimit = 3;
        }
        Command* command = nullptr;
        for (int32_t index = 0; index < size; index++) {
            command = ((Command*) VectorUtil_elementAt(vectorUtil, vector, index));
            if (Command_getPriority(command) < priorityLimit) {
                bool aBoolean = ((bool) Visitor_visit(this->visitorInterface, command));
                if (Boolean_booleanValue(aBoolean)) {
                    textItem = CommandTextItem_new(command, ImageItem_LAYOUT_DEFAULT, StringUtil_getInstance()->EMPTY_STRING, backgroundBasicColor, foregroundBasicColor);
                    BasicArrayList_add(this->list, textItem);
                }
            }
        }
        ABCustomItem** textItemArray = ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), BasicArrayList_size(this->list)));
        int32_t size2 = java_array_length(textItemArray);
        for (int32_t index = 0; index < size2; index++) {
            textItemArray[index] = ((ABCustomItem*) this->list->objectArray[index]);
        }
        return textItemArray;
}

