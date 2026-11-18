#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H
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
typedef struct ABTextItem ABTextItem;
typedef struct Command Command;
typedef struct BasicColor BasicColor;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
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
#define CommandTextItem_new5 CommandTextItem_new
#define CommandTextItem_init5 CommandTextItem_init
#ifndef CommandTextItem_keyPressed
#define CommandTextItem_keyPressed ABTextItem_keyPressed
#endif
#ifndef CommandTextItem_paintUnselected
#define CommandTextItem_paintUnselected ABTextItem_paintUnselected
#endif
#ifndef CommandTextItem_getLabelStringComponent
#define CommandTextItem_getLabelStringComponent ABTextItem_getLabelStringComponent
#endif
#ifndef CommandTextItem_getMinimumWidth
#define CommandTextItem_getMinimumWidth ABTextItem_getMinimumWidth
#endif
#ifndef CommandTextItem_getMinimumHeight
#define CommandTextItem_getMinimumHeight ABTextItem_getMinimumHeight
#endif
#ifndef CommandTextItem_getLabel
#define CommandTextItem_getLabel ABTextItem_getLabel
#endif
#ifndef CommandTextItem_paintXY
#define CommandTextItem_paintXY ABTextItem_paintXY
#endif
#ifndef CommandTextItem_updateMeasurement
#define CommandTextItem_updateMeasurement CustomCustomItem_updateMeasurement
#endif
#ifndef CommandTextItem_getNullInstance
#define CommandTextItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef CommandTextItem_setOwner
#define CommandTextItem_setOwner ABCustomItem_setOwner
#endif
#ifndef CommandTextItem_paintXY
#define CommandTextItem_paintXY ABCustomItem_paintXY
#endif
#ifndef CommandTextItem_paintUnselected
#define CommandTextItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef CommandTextItem_getLabel
#define CommandTextItem_getLabel ABCustomItem_getLabel
#endif
#ifndef CommandTextItem_setLabel
#define CommandTextItem_setLabel ABCustomItem_setLabel
#endif
#ifndef CommandTextItem_getHeight
#define CommandTextItem_getHeight ABCustomItem_getHeight
#endif
#ifndef CommandTextItem_setHeight
#define CommandTextItem_setHeight ABCustomItem_setHeight
#endif
#ifndef CommandTextItem_getValue
#define CommandTextItem_getValue ABCustomItem_getValue
#endif
#ifndef CommandTextItem_setValue
#define CommandTextItem_setValue ABCustomItem_setValue
#endif
#ifndef CommandTextItem_getMinimumWidth
#define CommandTextItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef CommandTextItem_getMinimumHeight
#define CommandTextItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef CommandTextItem_preMeasurement
#define CommandTextItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandTextItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandTextItem_register(void);

#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H
