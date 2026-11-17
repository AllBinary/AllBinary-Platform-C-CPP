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
// package org.allbinary.logic.communication.http.file.upload.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/media/MediaData.h"
#include "org/allbinary/logic/visual/media/MediaIOUtil.h"
#include "org/allbinary/logic/visual/media/MediaTypeData.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct UploadMediaSingleton UploadMediaSingleton;
struct UploadMediaSingleton {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    HashMap* readerFileTypesHashMap;
    HashMap* writerFileTypesHashMap;
};

static UploadMediaSingleton* UploadMediaSingleton_uploadMedia = nullptr;

UploadMediaSingleton* UploadMediaSingleton_new(void);

void UploadMediaSingleton_init(UploadMediaSingleton* this);
UploadMediaSingleton* UploadMediaSingleton_getInstance(void);
bool UploadMediaSingleton_isReaderSupported(UploadMediaSingleton* this, const char* mediaFileType);
bool UploadMediaSingleton_isWriterSupported(UploadMediaSingleton* this, const char* mediaFileType);
bool UploadMediaSingleton_isSupported(UploadMediaSingleton* this, const char* mediaFileType);
bool UploadMediaSingleton_isMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType);
bool UploadMediaSingleton_isReaderMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType);
bool UploadMediaSingleton_isWriterMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType);
static bool UploadMediaSingleton_isMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType, HashMap* hashMap);

static void UploadMediaSingleton_initFields(UploadMediaSingleton* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void UploadMediaSingleton_init(UploadMediaSingleton* this) {
    UploadMediaSingleton_initFields(this);
        this->readerFileTypesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        this->writerFileTypesHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap* hashMap = MediaData_toHashMap();
        Set* set = HashMap_keySet(hashMap);
        Any** mediaDataNameArray = Set_toArray(set);
        int32_t size = java_array_length(mediaDataNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* mediaDataName = ((const char*) mediaDataNameArray[index]);
            MediaData* mediaData = ((MediaData*) HashMap_get(hashMap, mediaDataName));
            HashMap_put(this->readerFileTypesHashMap, MediaData_getName(mediaData), MediaData_getType(mediaData));
        }
        MediaIOUtil* mediaIOUtil = MediaIOUtil_getInstance();
        const char* RESIZABLE_MEDIA = MediaTypeData_getInstance()->RESIZABLE_MEDIA;
        const char** readerFileTypes = MediaIOUtil_getReaderFormatNames(mediaIOUtil);
        for (int32_t index = 0; index < java_array_length(readerFileTypes); index++) {
            HashMap_put(this->readerFileTypesHashMap, readerFileTypes[index], RESIZABLE_MEDIA);
        }
        const char** writerFileTypes = MediaIOUtil_getWriterFormatNames(mediaIOUtil);
        for (int32_t index = 0; index < java_array_length(writerFileTypes); index++) {
            HashMap_put(this->writerFileTypesHashMap, writerFileTypes[index], RESIZABLE_MEDIA);
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->HTTPREQUEST)) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Supported Media Readers: ");
            StringMaker_append(stringBuffer, HashMap_toString(this->readerFileTypesHashMap));
            StringMaker_append(stringBuffer, " Writers: ");
            StringMaker_append(stringBuffer, HashMap_toString(this->writerFileTypesHashMap));
            LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->CONSTRUCTOR);
        }
}

UploadMediaSingleton* UploadMediaSingleton_new(void) {
    UploadMediaSingleton* this = calloc(1, sizeof(UploadMediaSingleton));
    UploadMediaSingleton_init(this);
    return this;
}


// synchronized
UploadMediaSingleton* UploadMediaSingleton_getInstance(void) {
        if (UploadMediaSingleton_uploadMedia == nullptr) {
            UploadMediaSingleton_uploadMedia = UploadMediaSingleton_new();
        }
        return UploadMediaSingleton_uploadMedia;
}


bool UploadMediaSingleton_isReaderSupported(UploadMediaSingleton* this, const char* mediaFileType) {
        return HashMap_containsKey(this->readerFileTypesHashMap, mediaFileType);
}


bool UploadMediaSingleton_isWriterSupported(UploadMediaSingleton* this, const char* mediaFileType) {
        return HashMap_containsKey(this->readerFileTypesHashMap, mediaFileType);
}


bool UploadMediaSingleton_isSupported(UploadMediaSingleton* this, const char* mediaFileType) {
        return UploadMediaSingleton_isReaderSupported(this, mediaFileType) && UploadMediaSingleton_isWriterSupported(this, mediaFileType);
}


bool UploadMediaSingleton_isMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType) {
        return UploadMediaSingleton_isReaderMedia(this, mediaFileType, aMediaType) && UploadMediaSingleton_isWriterMedia(this, mediaFileType, aMediaType);
}


bool UploadMediaSingleton_isReaderMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType) {
        return UploadMediaSingleton_isMedia(this, mediaFileType, aMediaType, this->readerFileTypesHashMap);
}


bool UploadMediaSingleton_isWriterMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType) {
        return UploadMediaSingleton_isMedia(this, mediaFileType, aMediaType, this->writerFileTypesHashMap);
}


// Java overloaded method: C needs a different name
static bool UploadMediaSingleton_isMedia(UploadMediaSingleton* this, const char* mediaFileType, const char* aMediaType, HashMap* hashMap) {
        if (HashMap_containsKey(hashMap, mediaFileType)) {
            const char* mediaType = ((const char*) HashMap_get(hashMap, mediaFileType));
            if (strcmp(mediaType, aMediaType) == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
}

