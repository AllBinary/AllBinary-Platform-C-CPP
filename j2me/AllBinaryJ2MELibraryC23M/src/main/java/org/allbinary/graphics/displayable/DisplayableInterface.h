#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;
typedef struct CommandListener CommandListener;

typedef struct DisplayableInterface DisplayableInterface;
struct DisplayableInterface {
    void (*addCommand)(void* this, Command* cmd);
    int32_t (*getHeight)(void* this);
    int32_t (*getWidth)(void* this);
    void (*removeCommand)(void* this, Command* cmd);
    void (*setCommandListener)(void* this, CommandListener* l);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DisplayableInterface_staticInit(void);

static inline void DisplayableInterface_addCommand(void* this, Command* cmd) {
    ((__typeof__(((DisplayableInterface*) nullptr)->addCommand)) java_method_of(this, "addCommand"))(this, cmd);
}

static inline int32_t DisplayableInterface_getHeight(void* this) {
    return ((__typeof__(((DisplayableInterface*) nullptr)->getHeight)) java_method_of(this, "getHeight"))(this);
}

static inline int32_t DisplayableInterface_getWidth(void* this) {
    return ((__typeof__(((DisplayableInterface*) nullptr)->getWidth)) java_method_of(this, "getWidth"))(this);
}

static inline void DisplayableInterface_removeCommand(void* this, Command* cmd) {
    ((__typeof__(((DisplayableInterface*) nullptr)->removeCommand)) java_method_of(this, "removeCommand"))(this, cmd);
}

static inline void DisplayableInterface_setCommandListener(void* this, CommandListener* l) {
    ((__typeof__(((DisplayableInterface*) nullptr)->setCommandListener)) java_method_of(this, "setCommandListener"))(this, l);
}


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H
