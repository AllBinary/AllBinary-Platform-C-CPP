#ifndef ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H
#define ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H
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
// package org.allbinary.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryMidlet AllBinaryMidlet;
typedef struct NullCanvas NullCanvas;
typedef struct Processor Processor;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/midlet/AllBinaryMidlet.h")
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#endif

typedef struct ExitRunnable ExitRunnable;
struct ExitRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    AllBinaryMidlet* midlet;
    Processor* processor;
    bool isProgress;
};


ExitRunnable* ExitRunnable_new(AllBinaryMidlet* midlet, Processor* processor, bool isProgress);

void ExitRunnable_init(ExitRunnable* this, AllBinaryMidlet* midlet, Processor* processor, bool isProgress);

void ExitRunnable_run(ExitRunnable* this);
#define ExitRunnable_new3 ExitRunnable_new
#define ExitRunnable_init3 ExitRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ExitRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ExitRunnable_register(void);


#endif // ORG_ALLBINARY_MIDLET_EXITRUNNABLE_H
