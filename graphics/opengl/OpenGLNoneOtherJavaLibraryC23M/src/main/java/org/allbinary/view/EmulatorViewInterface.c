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
// #include "javax/microedition/lcdui/Displayable.h"
// #include "javax/microedition/midlet/MIDlet.h"

typedef struct EmulatorViewInterface EmulatorViewInterface;
struct EmulatorViewInterface {
    void (*setMidlet)(void* this, MIDlet* midlet);
    void (*onEmulatorInitComplete)(void* this, Any* midletActivity);
    void (*onSetDisplayable)(void* this, Displayable* displayable);
};


