/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct UnitWaypointStrings UnitWaypointStrings;
struct UnitWaypointStrings {
    const char* PATHING;
    const char* WANDERING;
    const char* THINKING;
    const char* THINKING_ABOUT_TARGET;
    const char* TARGET;
    const char* KILL;
    const char* STOP;
    const char* WAYPOINT_DESTROYED_SHORT;
    const char* WAYPOINT_DESTROYED;
    const char* ALL_VISITED_SHORT;
    const char* ALL_VISITED;
    const char* ALREADY_THERE_SHORT;
    const char* ALREADY_THERE;
    const char* NEXT_PATH_NODE;
    const char* _ALL_VISITED_SHORT;
    const char* _ALREADY_THERE_SHORT;
    const char* VISITED_MOST_OF_THE_PATH;
    const char* RETURNING_AS_WAYPOINT_PATH_LIST;
};

static UnitWaypointStrings* UnitWaypointStrings_instance;

UnitWaypointStrings* UnitWaypointStrings_new(void);
UnitWaypointStrings* UnitWaypointStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void UnitWaypointStrings_staticInit(void) {
    UnitWaypointStrings_instance = UnitWaypointStrings_new();
}

static void UnitWaypointStrings_initFields(UnitWaypointStrings* this) {
    this->PATHING = "Pathing";
    this->WANDERING = "Order?";
    this->THINKING = "Thinking";
    this->THINKING_ABOUT_TARGET = "Hmmm";
    this->TARGET = "Target";
    this->KILL = "Kill!";
    this->STOP = "Stop";
    this->WAYPOINT_DESTROYED_SHORT = "Uh Oh";
    this->WAYPOINT_DESTROYED = "Waypoint Destroyed";
    this->ALL_VISITED_SHORT = "Arrived";
    this->ALL_VISITED = "All Visited";
    this->ALREADY_THERE_SHORT = "Again?";
    this->ALREADY_THERE = "Already There";
    this->NEXT_PATH_NODE = java_concat(java_string_of(CommonLabels_getInstance()->NEXT), " Path Node");
    this->_ALL_VISITED_SHORT = " Arrived";
    this->_ALREADY_THERE_SHORT = " Again?";
    this->VISITED_MOST_OF_THE_PATH = " visited most of the path";
    this->RETURNING_AS_WAYPOINT_PATH_LIST = " returning as waypointPathsList was runningWaypointPathList";
}

void UnitWaypointStrings_init(UnitWaypointStrings* this) {
    UnitWaypointStrings_initFields(this);
}

UnitWaypointStrings* UnitWaypointStrings_new(void) {
    UnitWaypointStrings* this = calloc(1, sizeof(UnitWaypointStrings));
    UnitWaypointStrings_init(this);
    return this;
}


UnitWaypointStrings* UnitWaypointStrings_getInstance(void) {
        return UnitWaypointStrings_instance;
}

