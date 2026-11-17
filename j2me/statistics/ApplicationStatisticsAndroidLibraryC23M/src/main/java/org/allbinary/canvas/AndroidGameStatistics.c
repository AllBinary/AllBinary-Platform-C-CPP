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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/View.h"
#include "org/allbinary/android/view/BaseViewWrapper.h"
#include "org/allbinary/android/view/ViewWrapper.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"

typedef struct AndroidGameStatistics AndroidGameStatistics;
struct AndroidGameStatistics {
    BaseGameStatistics base;
    BaseViewWrapper* view;
    int64_t totalOnDraws;
    const char** ANDROID_STRING_ARRAY;
    const char* TOTAL_ONDRAWS;
    const char* ONDRAWS_RATE;
};


AndroidGameStatistics* AndroidGameStatistics_new(void);

void AndroidGameStatistics_init(AndroidGameStatistics* this);
void AndroidGameStatistics_initView(AndroidGameStatistics* this, View* view);
void AndroidGameStatistics_process(AndroidGameStatistics* this);
void AndroidGameStatistics_nextOnDraw(AndroidGameStatistics* this);
const char** AndroidGameStatistics_toStringArray(AndroidGameStatistics* this);
const char* AndroidGameStatistics_toString(AndroidGameStatistics* this);

static void AndroidGameStatistics_initFields(AndroidGameStatistics* this) {
    this->view = BaseViewWrapper_NULL_VIEW_WRAPPER;
    this->totalOnDraws = 0;
    this->ANDROID_STRING_ARRAY = ((const char**) java_array_new(sizeof(const char*), 14));
    this->TOTAL_ONDRAWS = " Total onDraws: ";
    this->ONDRAWS_RATE = " onDraws(/10) Sec: ";
}


void AndroidGameStatistics_init(AndroidGameStatistics* this) {
    BaseGameStatistics_init(&this->base);
    AndroidGameStatistics_initFields(this);
        StringUtil* stringUtil = StringUtil_getInstance();
        for (int32_t index = 0; index < java_array_length(this->ANDROID_STRING_ARRAY); index++) {
            this->ANDROID_STRING_ARRAY[index] = stringUtil->EMPTY_STRING;
        }
}

AndroidGameStatistics* AndroidGameStatistics_new(void) {
    AndroidGameStatistics* this = calloc(1, sizeof(AndroidGameStatistics));
    AndroidGameStatistics_init(this);
    return this;
}


void AndroidGameStatistics_initView(AndroidGameStatistics* this, View* view) {
        BaseGameStatistics_init((&this->base));
        this->view = ViewWrapper_new(view);
        this->totalOnDraws = 0LL;
}


void AndroidGameStatistics_process(AndroidGameStatistics* this) {
        BaseViewWrapper_postInvalidate(this->view);
}


void AndroidGameStatistics_nextOnDraw(AndroidGameStatistics* this) {
        this->totalOnDraws++;
}


const char** AndroidGameStatistics_toStringArray(AndroidGameStatistics* this) {
        const char** stringArray = BaseGameStatistics_toStringArray((&this->base));
        for (int32_t index = 0; index < java_array_length(stringArray); index++) {
            this->ANDROID_STRING_ARRAY[index] = stringArray[index];
        }
        int64_t totalTime = JAVA_CALL(AndroidGameStatistics_getTimeDelayHelper(this), getElapsed, this->gameTickTimeDelayHelper->startTime);
        totalTime = (totalTime / 10000LL);
        this->ANDROID_STRING_ARRAY[10] = this->TOTAL_ONDRAWS;
        this->ANDROID_STRING_ARRAY[11] = java_string_of(this->totalOnDraws);
        this->ANDROID_STRING_ARRAY[12] = this->ONDRAWS_RATE;
        this->ANDROID_STRING_ARRAY[13] = java_string_of(this->totalOnDraws / totalTime);
        return this->ANDROID_STRING_ARRAY;
}


const char* AndroidGameStatistics_toString(AndroidGameStatistics* this) {
        int64_t totalTime = JAVA_CALL(AndroidGameStatistics_getTimeDelayHelper(this), getElapsed, this->gameTickTimeDelayHelper->startTime);
        totalTime = (totalTime / 1000LL);
        if (totalTime > 0LL) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, BaseGameStatistics_toStringAt((&this->base), totalTime));
            if (this->totalOnDraws > 0LL) {
                StringMaker_append(stringBuffer, this->TOTAL_ONDRAWS);
                StringMaker_append(stringBuffer, java_string_of(this->totalOnDraws));
                StringMaker_append(stringBuffer, this->ONDRAWS_RATE);
                const char* drawsOverTime = java_string_of(this->totalOnDraws / totalTime);
                StringMaker_append(stringBuffer, drawsOverTime);
            }
            return StringMaker_toString(stringBuffer);
        } else {
            return this->NOT;
        }
}

