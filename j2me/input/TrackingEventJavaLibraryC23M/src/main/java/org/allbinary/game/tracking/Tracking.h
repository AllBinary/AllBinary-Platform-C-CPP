#ifndef ORG_ALLBINARY_GAME_TRACKING_TRACKING_H
#define ORG_ALLBINARY_GAME_TRACKING_TRACKING_H
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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;

typedef struct Tracking Tracking;
struct Tracking {
    char unused;
};


Tracking* Tracking_new(void);

void Tracking_init(Tracking* this);

void Tracking_paint(Tracking* this, Graphics* graphics);
#define Tracking_new0 Tracking_new
#define Tracking_init0 Tracking_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Tracking_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Tracking_register(void);


#endif // ORG_ALLBINARY_GAME_TRACKING_TRACKING_H
