// Generated Code Do Not Modify
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#include "org/allbinary/game/midlet/DemoGameMidletEventListener.h"
#include "org/allbinary/midlet/MidletCompositeInterface.h"
#include "org/allbinary/view/EmulatorViewInterface.h"

typedef struct AllBinaryMidletViewInterface AllBinaryMidletViewInterface;
struct AllBinaryMidletViewInterface {
    void (*onResume)(void* this);
    void (*onPause)(void* this);
    void (*onDestroy)(void* this);
};


