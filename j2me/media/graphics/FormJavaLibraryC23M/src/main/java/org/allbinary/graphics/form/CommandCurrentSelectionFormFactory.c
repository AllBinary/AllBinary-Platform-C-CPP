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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct CommandCurrentSelectionFormFactory CommandCurrentSelectionFormFactory;
struct CommandCurrentSelectionFormFactory {
    char unused;
};


CommandCurrentSelectionFormFactory* CommandCurrentSelectionFormFactory_new(void);
ScrollSelectionForm* CommandCurrentSelectionFormFactory_getInstance(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CommandCurrentSelectionFormFactory_init(CommandCurrentSelectionFormFactory* this) {
}

CommandCurrentSelectionFormFactory* CommandCurrentSelectionFormFactory_new(void) {
    CommandCurrentSelectionFormFactory* this = calloc(1, sizeof(CommandCurrentSelectionFormFactory));
    CommandCurrentSelectionFormFactory_init(this);
    return this;
}


// throws Exception
ScrollSelectionForm* CommandCurrentSelectionFormFactory_getInstance(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        if (Features_isFeature(Features_getInstance(), TouchFeatureFactory_getInstance()->TOUCH_ENABLED)) {
            ScrollSelectionForm* scrollSelectionForm = CommandCurrentSelectionForm_new(title, items, border, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
            ScrollSelectionForm_init(scrollSelectionForm, rectangle, formType);
            return scrollSelectionForm;
        } else {
            return ScrollSelectionFormNoneFactory_getInstance();
        }
}

