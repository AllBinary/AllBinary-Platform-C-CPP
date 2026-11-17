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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct PlayerQueue PlayerQueue;
struct PlayerQueue {
    CommonStrings* commonStrings;
    BasicArrayList* list;
    int32_t max;
};

static const char* PlayerQueue_TOTAL = "Sounds In Queue: ";

PlayerQueue* PlayerQueue_new(int32_t max);

void PlayerQueue_init(PlayerQueue* this, int32_t max);
void PlayerQueue_add(PlayerQueue* this, Sound* sound);
bool PlayerQueue_process(PlayerQueue* this);
void PlayerQueue_clear(PlayerQueue* this);
const char* PlayerQueue_toString(PlayerQueue* this);

static void PlayerQueue_initFields(PlayerQueue* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->list = BasicArrayListD_new();
    
}


void PlayerQueue_init(PlayerQueue* this, int32_t max) {
    PlayerQueue_initFields(this);
        this->max = max;
}

PlayerQueue* PlayerQueue_new(int32_t max) {
    PlayerQueue* this = calloc(1, sizeof(PlayerQueue));
    PlayerQueue_init(this, max);
    return this;
}


void PlayerQueue_add(PlayerQueue* this, Sound* sound) {
        JAVA_TRY {
            if (!BasicArrayList_contains(this->list, sound)) {
                BasicArrayList_add(this->list, sound);
            }
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(this->commonStrings->EXCEPTION, this, this->commonStrings->ADD);
        } JAVA_END_TRY;
}


bool PlayerQueue_process(PlayerQueue* this) {
        Sound* sound = NoSound_getInstance();
        JAVA_TRY {
            bool played = false;
            if (BasicArrayList_size(this->list) > 0) {
                sound = ((Sound*) BasicArrayList_removeAt(this->list, 0));
                if (sound != nullptr) {
                    JAVA_CALL(Sound_getPlayerP(sound), start);
                }
                while (BasicArrayList_size(this->list) > this->max) {
                    BasicArrayList_removeAt(this->list, 0);
                }
                played = true;
            }
            return played;
        } JAVA_CATCH(Exception, e) {
            const char* resource = StringUtil_getInstance()->EMPTY_STRING;
            if (sound != nullptr) {
                resource = Sound_getResource(sound);
            }
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), append, resource), toString), this, this->commonStrings->PROCESS);
            return false;
        } JAVA_END_TRY;
}


void PlayerQueue_clear(PlayerQueue* this) {
        BasicArrayList_clear(this->list);
}


const char* PlayerQueue_toString(PlayerQueue* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PlayerQueue_TOTAL), appendint, BasicArrayList_size(this->list)), toString);
}

