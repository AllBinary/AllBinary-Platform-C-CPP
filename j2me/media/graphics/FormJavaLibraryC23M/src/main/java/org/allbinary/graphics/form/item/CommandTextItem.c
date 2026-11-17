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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABTextItem.h"

typedef struct CommandTextItem CommandTextItem;
struct CommandTextItem {
    ABTextItem base;
    Command* command;
};


CommandTextItem* CommandTextItem_new(Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CommandTextItem_init(CommandTextItem* this, Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
bool CommandTextItem_isFocusable(CommandTextItem* this);
Command* CommandTextItem_getCommand(CommandTextItem* this);

static void CommandTextItem_initFields(CommandTextItem* this) {
    
}


void CommandTextItem_init(CommandTextItem* this, Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABTextItem_init(&this->base, Command_getLabel(command), layout, altText, backgroundBasicColor, foregroundBasicColor);
        CommandTextItem_initFields(this);
        this->command = command;
}

CommandTextItem* CommandTextItem_new(Command* command, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandTextItem* this = calloc(1, sizeof(CommandTextItem));
    CommandTextItem_init(this, command, layout, altText, backgroundBasicColor, foregroundBasicColor);
    return this;
}


bool CommandTextItem_isFocusable(CommandTextItem* this) {
        return true;
}


Command* CommandTextItem_getCommand(CommandTextItem* this) {
        return this->command;
}

