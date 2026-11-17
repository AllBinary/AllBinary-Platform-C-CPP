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
// package org.allbinary.input.media.image.capture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct CapturedImageWorkerResultsEvent CapturedImageWorkerResultsEvent;
struct CapturedImageWorkerResultsEvent {
    AllBinaryEventObject base;
    int64_t frame;
    BufferedImage* bufferedImage;
};


CapturedImageWorkerResultsEvent* CapturedImageWorkerResultsEvent_new(Any* anyType, int64_t frame, BufferedImage* bufferedImage);

void CapturedImageWorkerResultsEvent_init(CapturedImageWorkerResultsEvent* this, Any* anyType, int64_t frame, BufferedImage* bufferedImage);
BufferedImage* CapturedImageWorkerResultsEvent_getBufferedImage(CapturedImageWorkerResultsEvent* this);
static void CapturedImageWorkerResultsEvent_setBufferedImage(CapturedImageWorkerResultsEvent* this, BufferedImage* bufferedImage);
int64_t CapturedImageWorkerResultsEvent_getFrame(CapturedImageWorkerResultsEvent* this);

static void CapturedImageWorkerResultsEvent_initFields(CapturedImageWorkerResultsEvent* this) {
    
    this->bufferedImage = nullptr;
}


void CapturedImageWorkerResultsEvent_init(CapturedImageWorkerResultsEvent* this, Any* anyType, int64_t frame, BufferedImage* bufferedImage) {
        AllBinaryEventObject_init(&this->base, anyType);
        CapturedImageWorkerResultsEvent_initFields(this);
        this->frame = frame;
        CapturedImageWorkerResultsEvent_setBufferedImage(this, bufferedImage);
}

CapturedImageWorkerResultsEvent* CapturedImageWorkerResultsEvent_new(Any* anyType, int64_t frame, BufferedImage* bufferedImage) {
    CapturedImageWorkerResultsEvent* this = calloc(1, sizeof(CapturedImageWorkerResultsEvent));
    CapturedImageWorkerResultsEvent_init(this, anyType, frame, bufferedImage);
    return this;
}


BufferedImage* CapturedImageWorkerResultsEvent_getBufferedImage(CapturedImageWorkerResultsEvent* this) {
        return this->bufferedImage;
}


static void CapturedImageWorkerResultsEvent_setBufferedImage(CapturedImageWorkerResultsEvent* this, BufferedImage* bufferedImage) {
        this->bufferedImage = bufferedImage;
}


int64_t CapturedImageWorkerResultsEvent_getFrame(CapturedImageWorkerResultsEvent* this) {
        return this->frame;
}

