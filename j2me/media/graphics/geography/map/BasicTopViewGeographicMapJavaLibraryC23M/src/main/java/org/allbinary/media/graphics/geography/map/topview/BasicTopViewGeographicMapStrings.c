/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media.graphics.geography.map.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicTopViewGeographicMapStrings BasicTopViewGeographicMapStrings;
struct BasicTopViewGeographicMapStrings {
    const char* DEFAULT;
    const char* OTHER;
    const char* WALL;
    const char* OFF_MAP;
    const char* FLOOR;
    const char* DOOR;
    const char* STAIRS_UP;
    const char* STAIRS_DOWN;
};

static BasicTopViewGeographicMapStrings* BasicTopViewGeographicMapStrings_instance;

BasicTopViewGeographicMapStrings* BasicTopViewGeographicMapStrings_new(void);
BasicTopViewGeographicMapStrings* BasicTopViewGeographicMapStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BasicTopViewGeographicMapStrings_staticInit(void) {
    BasicTopViewGeographicMapStrings_instance = BasicTopViewGeographicMapStrings_new();
}

static void BasicTopViewGeographicMapStrings_initFields(BasicTopViewGeographicMapStrings* this) {
    this->DEFAULT = "Default";
    this->OTHER = "Other";
    this->WALL = "Wall";
    this->OFF_MAP = "OffMap";
    this->FLOOR = "Floor";
    this->DOOR = "Door";
    this->STAIRS_UP = "StairsUp";
    this->STAIRS_DOWN = "StairsDown";
}

void BasicTopViewGeographicMapStrings_init(BasicTopViewGeographicMapStrings* this) {
    BasicTopViewGeographicMapStrings_initFields(this);
}

BasicTopViewGeographicMapStrings* BasicTopViewGeographicMapStrings_new(void) {
    BasicTopViewGeographicMapStrings* this = calloc(1, sizeof(BasicTopViewGeographicMapStrings));
    BasicTopViewGeographicMapStrings_init(this);
    return this;
}


BasicTopViewGeographicMapStrings* BasicTopViewGeographicMapStrings_getInstance(void) {
        return BasicTopViewGeographicMapStrings_instance;
}

