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
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
#include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
#include "org/allbinary/input/media/image/capture/ScreenCaptureImagesWorker.h"

typedef struct GenericProfileCaptureWorkerFactory GenericProfileCaptureWorkerFactory;
struct GenericProfileCaptureWorkerFactory {
    char unused;
};


GenericProfileCaptureWorkerFactory* GenericProfileCaptureWorkerFactory_new(void);

void GenericProfileCaptureWorkerFactory_init(GenericProfileCaptureWorkerFactory* this);
CaptureWorkerInterface* GenericProfileCaptureWorkerFactory_getInstance(GenericProfile* genericProfile);


void GenericProfileCaptureWorkerFactory_init(GenericProfileCaptureWorkerFactory* this) {
}

GenericProfileCaptureWorkerFactory* GenericProfileCaptureWorkerFactory_new(void) {
    GenericProfileCaptureWorkerFactory* this = calloc(1, sizeof(GenericProfileCaptureWorkerFactory));
    GenericProfileCaptureWorkerFactory_init(this);
    return this;
}


// throws Exception
CaptureWorkerInterface* GenericProfileCaptureWorkerFactory_getInstance(GenericProfile* genericProfile) {
        BasicArrayList* vector = GenericProfile_getGenericProfileDataWorkerTypeVector(genericProfile);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            GenericProfileDataWorkerType* genericProfileDataWorkerType = ((GenericProfileDataWorkerType*) BasicArrayList_get(vector, index));
            if (genericProfileDataWorkerType == GenericProfileDataWorkerType_SCREEN_CAPTURE) {
                return ScreenCaptureImagesWorker_new();
            } else if (genericProfileDataWorkerType == GenericProfileDataWorkerType_SAVED_CAPTURE) {
                return SavedCaptureImagesWorker_new(((SavedCaptureGenericProfileDataWorkerType*) genericProfileDataWorkerType));
            }
        }
        java_throw(java_exception_new("Exception", "No CaptureWorkerInterface specified in GenericProfile"));
}

