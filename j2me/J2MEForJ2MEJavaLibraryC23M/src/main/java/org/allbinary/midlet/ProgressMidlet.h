#ifndef ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H
#define ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H
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
typedef struct MidletExitProcessorFactory MidletExitProcessorFactory;
typedef struct ExitRunnable ExitRunnable;
typedef struct Processor Processor;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct ClientInformationFactory ClientInformationFactory;
typedef struct PrimaryThreadPool PrimaryThreadPool;
typedef struct ThreadPool ThreadPool;
#if __has_include("org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h")
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#endif
#include "java/lang/Runnable.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"

//J2MEForJ2ME
typedef struct ProgressMidlet ProgressMidlet;
struct ProgressMidlet {
    AllBinaryMidlet base;
    AbeClientInformationInterface* abeClientInformation;
};


ProgressMidlet* ProgressMidlet_new(ClientInformationFactory* clientInformationFactory);

void ProgressMidlet_init(ProgressMidlet* this, ClientInformationFactory* clientInformationFactory);

void ProgressMidlet_preInit(ProgressMidlet* this);

void ProgressMidlet_exitProgress(ProgressMidlet* this, bool isProgress);
#define ProgressMidlet_new1 ProgressMidlet_new
#define ProgressMidlet_init1 ProgressMidlet_init
#ifndef ProgressMidlet_getNullInstance
#define ProgressMidlet_getNullInstance AllBinaryMidlet_getNullInstance
#endif
#ifndef ProgressMidlet_setDisplay
#define ProgressMidlet_setDisplay AllBinaryMidlet_setDisplay
#endif
#ifndef ProgressMidlet_getDisplay
#define ProgressMidlet_getDisplay AllBinaryMidlet_getDisplay
#endif
#ifndef ProgressMidlet_getCurrentDisplayable
#define ProgressMidlet_getCurrentDisplayable AllBinaryMidlet_getCurrentDisplayable
#endif
#ifndef ProgressMidlet_setDestroyed
#define ProgressMidlet_setDestroyed AllBinaryMidlet_setDestroyed
#endif
#ifndef ProgressMidlet_isDestroyed
#define ProgressMidlet_isDestroyed AllBinaryMidlet_isDestroyed
#endif
#ifndef ProgressMidlet_startApp
#define ProgressMidlet_startApp AllBinaryMidlet_startApp
#endif
#ifndef ProgressMidlet_pauseApp
#define ProgressMidlet_pauseApp AllBinaryMidlet_pauseApp
#endif
#ifndef ProgressMidlet_destroyAppInRunnable
#define ProgressMidlet_destroyAppInRunnable AllBinaryMidlet_destroyAppInRunnable
#endif
#ifndef ProgressMidlet_destroyApp
#define ProgressMidlet_destroyApp AllBinaryMidlet_destroyApp
#endif
#ifndef ProgressMidlet_setStartStateHashtable
#define ProgressMidlet_setStartStateHashtable AllBinaryMidlet_setStartStateHashtable
#endif
#ifndef ProgressMidlet_getStartStateHashtable
#define ProgressMidlet_getStartStateHashtable AllBinaryMidlet_getStartStateHashtable
#endif
#ifndef ProgressMidlet_getCurrentStateHashtable
#define ProgressMidlet_getCurrentStateHashtable AllBinaryMidlet_getCurrentStateHashtable
#endif
#ifndef ProgressMidlet_commandAction
#define ProgressMidlet_commandAction AllBinaryMidlet_commandAction
#endif
#ifndef ProgressMidlet_startApp
#define ProgressMidlet_startApp MIDlet_startApp
#endif
#ifndef ProgressMidlet_pauseApp
#define ProgressMidlet_pauseApp MIDlet_pauseApp
#endif
#ifndef ProgressMidlet_destroyApp
#define ProgressMidlet_destroyApp MIDlet_destroyApp
#endif
#ifndef ProgressMidlet_checkPermission
#define ProgressMidlet_checkPermission MIDlet_checkPermission
#endif
#ifndef ProgressMidlet_getAppProperty
#define ProgressMidlet_getAppProperty MIDlet_getAppProperty
#endif
#ifndef ProgressMidlet_notifyDestroyed
#define ProgressMidlet_notifyDestroyed MIDlet_notifyDestroyed
#endif
#ifndef ProgressMidlet_notifyPaused
#define ProgressMidlet_notifyPaused MIDlet_notifyPaused
#endif
#ifndef ProgressMidlet_platformRequest
#define ProgressMidlet_platformRequest MIDlet_platformRequest
#endif
#ifndef ProgressMidlet_resumeRequest
#define ProgressMidlet_resumeRequest MIDlet_resumeRequest
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProgressMidlet_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ProgressMidlet_register(void);


#endif // ORG_ALLBINARY_MIDLET_PROGRESSMIDLET_H
