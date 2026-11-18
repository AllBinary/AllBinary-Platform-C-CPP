#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTUREINPUT_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTUREINPUT_H
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
// package org.allbinary.input.motion.gesture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Input Input;
typedef struct InputFactory InputFactory;
#include "org/allbinary/game/input/Input.h"

typedef struct MotionGestureInput MotionGestureInput;
struct MotionGestureInput {
    Input base;
};


MotionGestureInput* MotionGestureInput_new(int32_t id, const char* name);

void MotionGestureInput_init(MotionGestureInput* this, int32_t id, const char* name);
#define MotionGestureInput_new2 MotionGestureInput_new
#define MotionGestureInput_init2 MotionGestureInput_init
#ifndef MotionGestureInput_getId
#define MotionGestureInput_getId Input_getId
#endif
#ifndef MotionGestureInput_setId
#define MotionGestureInput_setId Input_setId
#endif
#ifndef MotionGestureInput_getName
#define MotionGestureInput_getName Input_getName
#endif
#ifndef MotionGestureInput_setName
#define MotionGestureInput_setName Input_setName
#endif
#ifndef MotionGestureInput_toString
#define MotionGestureInput_toString Input_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureInput_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTUREINPUT_H
