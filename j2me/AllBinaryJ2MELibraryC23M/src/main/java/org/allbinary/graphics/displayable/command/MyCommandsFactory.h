#ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
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
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif

typedef struct MyCommandsFactory MyCommandsFactory;
struct MyCommandsFactory {
    Command* NO_COMMAND;
    Command* GAUGE_CHANGE;
    Command* SET_DISPLAYABLE;
    Command* PAUSE_COMMAND;
    Command* RESUME_COMMAND;
};


MyCommandsFactory* MyCommandsFactory_new(void);

MyCommandsFactory* MyCommandsFactory_getInstance(void);

void MyCommandsFactory_init(MyCommandsFactory* this);
#define MyCommandsFactory_new0 MyCommandsFactory_new
#define MyCommandsFactory_init0 MyCommandsFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MyCommandsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MyCommandsFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_COMMAND_MYCOMMANDSFACTORY_H
