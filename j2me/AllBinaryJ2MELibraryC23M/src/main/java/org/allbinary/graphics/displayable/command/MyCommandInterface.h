#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDINTERFACE_H
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
// package org.allbinary.graphics.displayable.command

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;

typedef struct MyCommandInterface MyCommandInterface;
struct MyCommandInterface {
    void (*addCommand)(void* this, Command* command);
    void (*removeAllCommands)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyCommandInterface_staticInit(void);

static inline void MyCommandInterface_addCommand(void* this, Command* command) {
    ((__typeof__(((MyCommandInterface*) nullptr)->addCommand)) java_method_of(this, "addCommand"))(this, command);
}

static inline void MyCommandInterface_removeAllCommands(void* this) {
    ((__typeof__(((MyCommandInterface*) nullptr)->removeAllCommands)) java_method_of(this, "removeAllCommands"))(this);
}


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDINTERFACE_H
