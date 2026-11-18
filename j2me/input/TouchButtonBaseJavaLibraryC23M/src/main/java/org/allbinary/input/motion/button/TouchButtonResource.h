#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCE_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCE_H
/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TouchButtonResource TouchButtonResource;
struct TouchButtonResource {
    const char* RESOURCE;
    const char* HINT;
};


TouchButtonResource* TouchButtonResource_new(const char* resource, const char* hint);

void TouchButtonResource_init(TouchButtonResource* this, const char* resource, const char* hint);
#define TouchButtonResource_new2 TouchButtonResource_new
#define TouchButtonResource_init2 TouchButtonResource_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TouchButtonResource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TouchButtonResource_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCE_H
