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
// #include "java/awt/image/BufferedImage.h"
// #include "java/io/File.h"
// #include "javax/imageio/ImageIO.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/SavedCaptureGenericProfileDataWorkerType.h"
#include "org/allbinary/input/media/image/capture/CaptureWorkerInterface.h"
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#include "org/allbinary/input/media/image/capture/CapturedImageWorkerResultsEvent.h"
#include "org/allbinary/input/media/image/capture/ProcessingFrameIndexFactory.h"
#include "org/allbinary/input/media/image/capture/ScreenScavangerRobot.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/number/LongUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"
#include "org/allbinary/media/image/cache/BufferedImageFrameCacheable.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct SavedCaptureImagesWorker SavedCaptureImagesWorker;
struct SavedCaptureImagesWorker {
    BasicEventHandler base;
    CaptureWorkerInterface CaptureWorkerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool running;
    ScreenScavangerRobot* screenScavangerRobot;
    SavedCaptureGenericProfileDataWorkerType* savedCaptureGenericProfileDataWorkerType;
};

static int64_t SavedCaptureImagesWorker_index;

SavedCaptureImagesWorker* SavedCaptureImagesWorker_new(SavedCaptureGenericProfileDataWorkerType* savedCaptureGenericProfileDataWorkerType);

void SavedCaptureImagesWorker_init(SavedCaptureImagesWorker* this, SavedCaptureGenericProfileDataWorkerType* savedCaptureGenericProfileDataWorkerType);
void SavedCaptureImagesWorker_setThread(SavedCaptureImagesWorker* this, Thread* thread);
bool SavedCaptureImagesWorker_isRunning(SavedCaptureImagesWorker* this);
void SavedCaptureImagesWorker_setRunning(SavedCaptureImagesWorker* this, bool running);
void SavedCaptureImagesWorker_run(SavedCaptureImagesWorker* this);

static void SavedCaptureImagesWorker_initFields(SavedCaptureImagesWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->running = false;
    
    
}


void SavedCaptureImagesWorker_init(SavedCaptureImagesWorker* this, SavedCaptureGenericProfileDataWorkerType* savedCaptureGenericProfileDataWorkerType) {
    BasicEventHandler_init(&this->base);
    SavedCaptureImagesWorker_initFields(this);
        this->savedCaptureGenericProfileDataWorkerType = savedCaptureGenericProfileDataWorkerType;
        this->screenScavangerRobot = ScreenScavangerRobot_new();
        SavedCaptureImagesWorker_index = ProcessingFrameIndexFactory_next();
}

SavedCaptureImagesWorker* SavedCaptureImagesWorker_new(SavedCaptureGenericProfileDataWorkerType* savedCaptureGenericProfileDataWorkerType) {
    SavedCaptureImagesWorker* this = calloc(1, sizeof(SavedCaptureImagesWorker));
    SavedCaptureImagesWorker_init(this, savedCaptureGenericProfileDataWorkerType);
    return this;
}


// throws Exception
void SavedCaptureImagesWorker_setThread(SavedCaptureImagesWorker* this, Thread* thread) {
}


// synchronized
bool SavedCaptureImagesWorker_isRunning(SavedCaptureImagesWorker* this) {
        return this->running;
}


// synchronized
void SavedCaptureImagesWorker_setRunning(SavedCaptureImagesWorker* this, bool running) {
        this->running = running;
}


void SavedCaptureImagesWorker_run(SavedCaptureImagesWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            SavedCaptureImagesWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            while (SavedCaptureImagesWorker_isRunning(this)) {
                TimeDelayHelper_setStartTimeTNT(timeHelper);
                int64_t frame = SavedCaptureImagesWorker_index;
                StringMaker* filePathStringBuffer = StringMaker_new();
                StringMaker_append(filePathStringBuffer, SavedCaptureGenericProfileDataWorkerType_getPath(this->savedCaptureGenericProfileDataWorkerType));
                StringMaker_append(filePathStringBuffer, LongUtil_fillIn(Long_toString(frame)));
                StringMaker_append(filePathStringBuffer, JAVA_CALL(MediaDataFactory_getInstance()->JPG, getExtension));
                const char* filePath = StringMaker_toString(filePathStringBuffer);
                LogUtil_putF(this->logUtil, java_concat("Loading Image File Path: ", filePath), this, this->commonStrings->RUN);
                File* file = File_new(filePath);
                if (File_isFile(file)) {
                    BufferedImage* bufferedImage = ImageIO_read(file);
                    SavedCaptureImagesWorker_index++;
                    CapturedBufferedImagesCacheSingleton_add(CapturedBufferedImagesCacheSingleton_getInstance(), BufferedImageFrameCacheable_new(bufferedImage, frame));
                    CapturedImageWorkerResultsEvent* capturedImageEvent = CapturedImageWorkerResultsEvent_new(this, frame, bufferedImage);
                    SavedCaptureImagesWorker_fireEvent(this, capturedImageEvent);
                } else {
                    LogUtil_putF(this->logUtil, java_concat("Could Not Load File: ", filePath), this, this->commonStrings->RUN);
                }
                LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
                SavedCaptureImagesWorker_setRunning(this, false);
            }
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

