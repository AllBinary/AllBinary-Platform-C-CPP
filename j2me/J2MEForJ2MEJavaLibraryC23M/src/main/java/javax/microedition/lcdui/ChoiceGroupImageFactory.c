/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package javax.microedition.lcdui

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/MIDPUtil.h"

typedef struct ChoiceGroupImageFactory ChoiceGroupImageFactory;
struct ChoiceGroupImageFactory {
    int8_t* multiOff;
    int8_t* multiOn;
    int8_t* radioOff;
    int8_t* radioOn;
    MIDPUtil* midpUtil;
    Image* imgMultiOffO;
    Image* imgMultiOnO;
    Image* imgRadioOffO;
    Image* imgRadioOnO;
    Image* imgMultiOff;
    Image* imgMultiOn;
    Image* imgRadioOff;
    Image* imgRadioOn;
    Image** imageArray;
};

static ChoiceGroupImageFactory* ChoiceGroupImageFactory_instance;

ChoiceGroupImageFactory* ChoiceGroupImageFactory_new(void);
ChoiceGroupImageFactory* ChoiceGroupImageFactory_getInstance(void);
Image** ChoiceGroupImageFactory_getImageArray(ChoiceGroupImageFactory* this);
void ChoiceGroupImageFactory_init(ChoiceGroupImageFactory* this, Image** imageArray);

// Static fields with runtime initializers: call this once at startup
void ChoiceGroupImageFactory_staticInit(void) {
    ChoiceGroupImageFactory_instance = ChoiceGroupImageFactory_new();
}

static void ChoiceGroupImageFactory_initFields(ChoiceGroupImageFactory* this) {
    this->multiOff = ((int8_t*) java_array_from(sizeof(int8_t), sizeof((int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 10, 0, 0, 0, 11, 2, 3, 0, 0, 0, 59, 0, ((int8_t) (-12)), ((int8_t) (-117)), 0, 0, 0, 6, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-57)), 75, ((int8_t) (-33)), ((int8_t) (-8)), 0, 0, 0, 30, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 96, 96, 96, 12, 101, ((int8_t) (-8)), ((int8_t) (-51)), ((int8_t) (-32)), ((int8_t) (-64)), 32, ((int8_t) (-64)), ((int8_t) (-60)), ((int8_t) (-64)), ((int8_t) (-64)), ((int8_t) (-128)), 11, 51, ((int8_t) (-122)), 50, ((int8_t) (-4)), 6, 0, 63, 116, 3, 1, 53, ((int8_t) (-108)), 39, ((int8_t) (-26)), 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }) / sizeof(int8_t), (int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 10, 0, 0, 0, 11, 2, 3, 0, 0, 0, 59, 0, ((int8_t) (-12)), ((int8_t) (-117)), 0, 0, 0, 6, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-57)), 75, ((int8_t) (-33)), ((int8_t) (-8)), 0, 0, 0, 30, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 96, 96, 96, 12, 101, ((int8_t) (-8)), ((int8_t) (-51)), ((int8_t) (-32)), ((int8_t) (-64)), 32, ((int8_t) (-64)), ((int8_t) (-60)), ((int8_t) (-64)), ((int8_t) (-64)), ((int8_t) (-128)), 11, 51, ((int8_t) (-122)), 50, ((int8_t) (-4)), 6, 0, 63, 116, 3, 1, 53, ((int8_t) (-108)), 39, ((int8_t) (-26)), 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }));
    this->multiOn = ((int8_t*) java_array_from(sizeof(int8_t), sizeof((int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 10, 0, 0, 0, 11, 2, 3, 0, 0, 0, 59, 0, ((int8_t) (-12)), ((int8_t) (-117)), 0, 0, 0, 12, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, 2, 2, 2, 106, ((int8_t) (-103)), 14, ((int8_t) (-47)), 0, 0, 0, 53, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 96, 124, ((int8_t) (-64)), ((int8_t) (-16)), ((int8_t) (-1)), ((int8_t) (-77)), 3, ((int8_t) (-45)), 65, ((int8_t) (-111)), 15, 76, 12, 108, 12, 76, 12, ((int8_t) (-4)), 12, 76, 12, 18, 12, 76, ((int8_t) (-68)), 127, 24, ((int8_t) (-104)), 126, 45, 96, 96, ((int8_t) (-7)), ((int8_t) (-11)), ((int8_t) (-109)), ((int8_t) (-127)), ((int8_t) (-23)), ((int8_t) (-65)), 3, 3, ((int8_t) (-29)), 127, ((int8_t) (-122)), ((int8_t) (-113)), 0, 5, 37, 12, ((int8_t) (-34)), 1, ((int8_t) (-99)), ((int8_t) (-83)), 100, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }) / sizeof(int8_t), (int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 10, 0, 0, 0, 11, 2, 3, 0, 0, 0, 59, 0, ((int8_t) (-12)), ((int8_t) (-117)), 0, 0, 0, 12, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, 2, 2, 2, 106, ((int8_t) (-103)), 14, ((int8_t) (-47)), 0, 0, 0, 53, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 96, 124, ((int8_t) (-64)), ((int8_t) (-16)), ((int8_t) (-1)), ((int8_t) (-77)), 3, ((int8_t) (-45)), 65, ((int8_t) (-111)), 15, 76, 12, 108, 12, 76, 12, ((int8_t) (-4)), 12, 76, 12, 18, 12, 76, ((int8_t) (-68)), 127, 24, ((int8_t) (-104)), 126, 45, 96, 96, ((int8_t) (-7)), ((int8_t) (-11)), ((int8_t) (-109)), ((int8_t) (-127)), ((int8_t) (-23)), ((int8_t) (-65)), 3, 3, ((int8_t) (-29)), 127, ((int8_t) (-122)), ((int8_t) (-113)), 0, 5, 37, 12, ((int8_t) (-34)), 1, ((int8_t) (-99)), ((int8_t) (-83)), 100, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }));
    this->radioOff = ((int8_t*) java_array_from(sizeof(int8_t), sizeof((int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 11, 0, 0, 0, 11, 2, 3, 0, 0, 0, ((int8_t) (-44)), ((int8_t) (-62)), ((int8_t) (-97)), ((int8_t) (-75)), 0, 0, 0, 9, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, ((int8_t) (-44)), 13, ((int8_t) (-1)), ((int8_t) (-24)), 0, 0, 0, 42, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 90, ((int8_t) (-59)), ((int8_t) (-64)), 32, ((int8_t) (-63)), 48, ((int8_t) (-127)), 65, ((int8_t) (-127)), 65, ((int8_t) (-127)), 41, ((int8_t) (-127)), ((int8_t) (-31)), 5, 19, 3, 3, 3, 50, 102, 80, 96, 80, 96, ((int8_t) (-6)), ((int8_t) (-63)), 80, ((int8_t) (-64)), ((int8_t) (-64)), ((int8_t) (-76)), ((int8_t) (-118)), 1, 0, 113, 24, 5, 61, 73, ((int8_t) (-68)), ((int8_t) (-100)), 98, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }) / sizeof(int8_t), (int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 11, 0, 0, 0, 11, 2, 3, 0, 0, 0, ((int8_t) (-44)), ((int8_t) (-62)), ((int8_t) (-97)), ((int8_t) (-75)), 0, 0, 0, 9, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, ((int8_t) (-44)), 13, ((int8_t) (-1)), ((int8_t) (-24)), 0, 0, 0, 42, 73, 68, 65, 84, 120, ((int8_t) (-38)), 99, 96, 90, ((int8_t) (-59)), ((int8_t) (-64)), 32, ((int8_t) (-63)), 48, ((int8_t) (-127)), 65, ((int8_t) (-127)), 65, ((int8_t) (-127)), 41, ((int8_t) (-127)), ((int8_t) (-31)), 5, 19, 3, 3, 3, 50, 102, 80, 96, 80, 96, ((int8_t) (-6)), ((int8_t) (-63)), 80, ((int8_t) (-64)), ((int8_t) (-64)), ((int8_t) (-76)), ((int8_t) (-118)), 1, 0, 113, 24, 5, 61, 73, ((int8_t) (-68)), ((int8_t) (-100)), 98, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }));
    this->radioOn = ((int8_t*) java_array_from(sizeof(int8_t), sizeof((int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 11, 0, 0, 0, 11, 2, 3, 0, 0, 0, ((int8_t) (-44)), ((int8_t) (-62)), ((int8_t) (-97)), ((int8_t) (-75)), 0, 0, 0, 12, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, 2, 2, 2, 106, ((int8_t) (-103)), 14, ((int8_t) (-47)), 0, 0, 0, 50, 73, 68, 65, 84, 120, ((int8_t) (-38)), 5, ((int8_t) (-63)), 65, 13, 0, 32, 12, 4, ((int8_t) (-63)), ((int8_t) (-19)), ((int8_t) (-11)), ((int8_t) (-117)), 1, 18, 68, ((int8_t) (-100)), 10, 52, 19, 94, 72, 64, 17, 101, ((int8_t) (-122)), 44, ((int8_t) (-44)), ((int8_t) (-29)), 98, ((int8_t) (-52)), 89, 77, ((int8_t) (-102)), 40, 2, 85, ((int8_t) (-95)), ((int8_t) (-73)), ((int8_t) (-63)), ((int8_t) (-104)), ((int8_t) (-63)), 37, ((int8_t) (-117)), 15, ((int8_t) (-40)), 119, 10, 41, 78, 26, ((int8_t) (-79)), 59, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }) / sizeof(int8_t), (int8_t[]){ ((int8_t) (-119)), 80, 78, 71, 13, 10, 26, 10, 0, 0, 0, 13, 73, 72, 68, 82, 0, 0, 0, 11, 0, 0, 0, 11, 2, 3, 0, 0, 0, ((int8_t) (-44)), ((int8_t) (-62)), ((int8_t) (-97)), ((int8_t) (-75)), 0, 0, 0, 12, 80, 76, 84, 69, ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-1)), ((int8_t) (-69)), ((int8_t) (-69)), ((int8_t) (-69)), 106, 106, 106, 2, 2, 2, 106, ((int8_t) (-103)), 14, ((int8_t) (-47)), 0, 0, 0, 50, 73, 68, 65, 84, 120, ((int8_t) (-38)), 5, ((int8_t) (-63)), 65, 13, 0, 32, 12, 4, ((int8_t) (-63)), ((int8_t) (-19)), ((int8_t) (-11)), ((int8_t) (-117)), 1, 18, 68, ((int8_t) (-100)), 10, 52, 19, 94, 72, 64, 17, 101, ((int8_t) (-122)), 44, ((int8_t) (-44)), ((int8_t) (-29)), 98, ((int8_t) (-52)), 89, 77, ((int8_t) (-102)), 40, 2, 85, ((int8_t) (-95)), ((int8_t) (-73)), ((int8_t) (-63)), ((int8_t) (-104)), ((int8_t) (-63)), 37, ((int8_t) (-117)), 15, ((int8_t) (-40)), 119, 10, 41, 78, 26, ((int8_t) (-79)), 59, 0, 0, 0, 0, 73, 69, 78, 68, ((int8_t) (-82)), 66, 96, ((int8_t) (-126)) }));
    this->midpUtil = MIDPUtil_getInstance();
    this->imgMultiOffO = MIDPUtil_createImageFromByteArray(this->midpUtil, this->multiOff, 0, java_array_length(this->multiOff));
    this->imgMultiOnO = MIDPUtil_createImageFromByteArray(this->midpUtil, this->multiOn, 0, java_array_length(this->multiOn));
    this->imgRadioOffO = MIDPUtil_createImageFromByteArray(this->midpUtil, this->radioOff, 0, java_array_length(this->radioOff));
    this->imgRadioOnO = MIDPUtil_createImageFromByteArray(this->midpUtil, this->radioOn, 0, java_array_length(this->radioOn));
    this->imgMultiOff = this->imgMultiOffO;
    this->imgMultiOn = this->imgMultiOnO;
    this->imgRadioOff = this->imgRadioOffO;
    this->imgRadioOn = this->imgRadioOnO;
    this->imageArray = ((Image**) java_array_from(sizeof(Image*), sizeof((Image*[]){ this->imgMultiOff, this->imgMultiOn, this->imgRadioOff, this->imgRadioOn }) / sizeof(Image*), (Image*[]){ this->imgMultiOff, this->imgMultiOn, this->imgRadioOff, this->imgRadioOn }));
}

void ChoiceGroupImageFactory_init(ChoiceGroupImageFactory* this) {
    ChoiceGroupImageFactory_initFields(this);
}

ChoiceGroupImageFactory* ChoiceGroupImageFactory_new(void) {
    ChoiceGroupImageFactory* this = calloc(1, sizeof(ChoiceGroupImageFactory));
    ChoiceGroupImageFactory_init(this);
    return this;
}


ChoiceGroupImageFactory* ChoiceGroupImageFactory_getInstance(void) {
        return ChoiceGroupImageFactory_instance;
}


Image** ChoiceGroupImageFactory_getImageArray(ChoiceGroupImageFactory* this) {
        return this->imageArray;
}


void ChoiceGroupImageFactory_init(ChoiceGroupImageFactory* this, Image** imageArray) {
        this->imgMultiOff = imageArray[0];
        this->imageArray[0] = this->imgMultiOff;
        this->imgMultiOn = imageArray[1];
        this->imageArray[1] = this->imgMultiOn;
        this->imgRadioOff = imageArray[2];
        this->imageArray[2] = this->imgRadioOff;
        this->imgRadioOn = imageArray[3];
        this->imageArray[3] = this->imgRadioOn;
}

