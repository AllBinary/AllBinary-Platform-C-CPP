#ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLCONTROL_H
#define ORG_ALLBINARY_MEDIA_AUDIO_NULLCONTROL_H
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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Control Control;
#include "javax/microedition/media/Control.h"

typedef struct NullControl NullControl;
struct NullControl {
    Control Control_interface;
};


NullControl* NullControl_new(void);
void NullControl_init(NullControl* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullControl_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullControl_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_NULLCONTROL_H
