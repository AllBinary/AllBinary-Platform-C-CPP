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
// package org.allbinary.input.automation.module.generic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CaptureWorkerUtil CaptureWorkerUtil;
struct CaptureWorkerUtil {
    LogUtil* logUtil;
};


CaptureWorkerUtil* CaptureWorkerUtil_new(void);

void CaptureWorkerUtil_init(CaptureWorkerUtil* this);
void CaptureWorkerUtil_processProfileActionConditions(BasicArrayList* vector, int64_t frame);

static void CaptureWorkerUtil_initFields(CaptureWorkerUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


void CaptureWorkerUtil_init(CaptureWorkerUtil* this) {
    CaptureWorkerUtil_initFields(this);
}

CaptureWorkerUtil* CaptureWorkerUtil_new(void) {
    CaptureWorkerUtil* this = calloc(1, sizeof(CaptureWorkerUtil));
    CaptureWorkerUtil_init(this);
    return this;
}


// throws Exception
void CaptureWorkerUtil_processProfileActionConditions(BasicArrayList* vector, int64_t frame) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonStrings->START, "CaptureWorkerUtil", "processProfileActionConditions");
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            ProfileActionScriptConditionInterface* profileActionConditionInterface = ((ProfileActionScriptConditionInterface*) BasicArrayList_get(vector, index));
            if (ProfileActionScriptConditionInterface_shouldProcess(profileActionConditionInterface, frame)) {
                ProfileActionScriptConditionInterface_process(profileActionConditionInterface, frame);
            } else {
            }
        }
}

