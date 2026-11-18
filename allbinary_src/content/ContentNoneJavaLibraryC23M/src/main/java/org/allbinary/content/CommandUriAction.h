#ifndef ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
#define ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
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
// package org.allbinary.content

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Command Command;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct CommandUriAction CommandUriAction;
struct CommandUriAction {
    LogUtil* logUtil;
};


CommandUriAction* CommandUriAction_new(void);
void CommandUriAction_init(CommandUriAction* this);

CommandUriAction* CommandUriAction_getInstance(void);

void CommandUriAction_add(CommandUriAction* this, Command* command, const char* url);

void CommandUriAction_process(CommandUriAction* this, Command* command);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandUriAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandUriAction_register(void);


#endif // ORG_ALLBINARY_CONTENT_COMMANDURIACTION_H
