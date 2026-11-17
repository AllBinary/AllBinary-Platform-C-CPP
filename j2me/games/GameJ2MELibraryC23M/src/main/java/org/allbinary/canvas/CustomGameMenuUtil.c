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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/AppletUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"

typedef struct CustomGameMenuUtil CustomGameMenuUtil;
struct CustomGameMenuUtil {
    char unused;
};


CustomGameMenuUtil* CustomGameMenuUtil_new(void);
void CustomGameMenuUtil_add(MyCanvas* canvas);

void CustomGameMenuUtil_init(CustomGameMenuUtil* this) {
}

CustomGameMenuUtil* CustomGameMenuUtil_new(void) {
    CustomGameMenuUtil* this = calloc(1, sizeof(CustomGameMenuUtil));
    CustomGameMenuUtil_init(this);
    return this;
}


void CustomGameMenuUtil_add(MyCanvas* canvas) {
        GameCommandsFactory* gameCommandsFactory = GameCommandsFactory_getInstance();
        if (AppletUtil_isAppletLoader(canvas)) {
        } else if (J2MEUtil_isHTML()) {
        } else {
            MyCanvas_addCommand(canvas, gameCommandsFactory->EXIT_COMMAND);
        }
}

