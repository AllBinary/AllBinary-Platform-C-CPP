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
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/globals/Globals.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"

//AndroidToJ2ME
typedef struct ProgressMidlet ProgressMidlet;
struct ProgressMidlet {
    AllBinaryMidlet base;
    AbeClientInformationInterface* abeClientInformation;
};


ProgressMidlet* ProgressMidlet_new(ClientInformationFactory* clientInformationFactory);

void ProgressMidlet_init(ProgressMidlet* this, ClientInformationFactory* clientInformationFactory);
void ProgressMidlet_preInit(ProgressMidlet* this);
void ProgressMidlet_exitProgress(ProgressMidlet* this, bool isProgress);

static void ProgressMidlet_initFields(ProgressMidlet* this) {
    
}


void ProgressMidlet_init(ProgressMidlet* this, ClientInformationFactory* clientInformationFactory) {
    AllBinaryMidlet_init(&this->base);
    ProgressMidlet_initFields(this);
        Globals_init(Globals_getInstance(), TsUtil_getClassClassLoader(TsUtil_getInstance(), this), StringUtil_getInstance()->EMPTY_STRING);
        ProgressMidlet_preInit(this);
        this->abeClientInformation = ClientInformationFactory_getInstance(clientInformationFactory);
}

ProgressMidlet* ProgressMidlet_new(ClientInformationFactory* clientInformationFactory) {
    ProgressMidlet* this = calloc(1, sizeof(ProgressMidlet));
    ProgressMidlet_init(this, clientInformationFactory);
    return this;
}


void ProgressMidlet_preInit(ProgressMidlet* this) {
}


void ProgressMidlet_exitProgress(ProgressMidlet* this, bool isProgress) {
        Processor* processor = MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory_getInstance(), this);
        JAVA_TRY {
            ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
            Runnable* runnable = ExitRunnable_new(this, processor, isProgress);
            ThreadPool_runTask(primaryThreadPool, runnable);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "exit", e);
            JAVA_TRY {
                Processor_process(processor);
            } JAVA_CATCH(Exception, e2) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "exit", e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

