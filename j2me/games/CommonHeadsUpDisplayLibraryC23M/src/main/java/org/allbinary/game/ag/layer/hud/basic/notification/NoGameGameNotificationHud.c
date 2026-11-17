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
// package org.allbinary.game.ag.layer.hud.basic.notification

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"

typedef struct NoGameGameNotificationHud NoGameGameNotificationHud;
struct NoGameGameNotificationHud {
    GameNotificationHud base;
};


NoGameGameNotificationHud* NoGameGameNotificationHud_new(void);

void NoGameGameNotificationHud_init(NoGameGameNotificationHud* this);


void NoGameGameNotificationHud_init(NoGameGameNotificationHud* this) {
        GameNotificationHud_init(&this->base, BasicHudFactory_getInstance()->TOPCENTER, BasicHudFactory_getInstance()->HORIZONTAL, 2, BasicColorFactory_getInstance()->RED);
        this->updateMaxWidth = 40;
        this->updateMaxHeight = 14;
}

NoGameGameNotificationHud* NoGameGameNotificationHud_new(void) {
    NoGameGameNotificationHud* this = calloc(1, sizeof(NoGameGameNotificationHud));
    NoGameGameNotificationHud_init(this);
    return this;
}

