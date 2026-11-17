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
// package org.allbinary.logic.system.hardware.android

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/Closeable.h"
// #include "java/io/FileReader.h"
// #include "java/io/LineNumberReader.h"
#include "org/allbinary/logic/io/NullCloseable.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#include "org/allbinary/logic/system/hardware/components/android/UnknownHardware.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct AndroidHardware AndroidHardware;
struct AndroidHardware {
    HardwareInterface HardwareInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* componentInterfaceVector;
    const char* PROC_BUS_INPUT_DIRECTORY;
    const char* DEVICES;
    int32_t MINHARDWARE;
};


AndroidHardware* AndroidHardware_new(void);

void AndroidHardware_init(AndroidHardware* this);
static void AndroidHardware_init(AndroidHardware* this, const char* filePath);
static LineNumberReader* AndroidHardware_get(AndroidHardware* this, const char* filePath);
HardwareComponentInterface* AndroidHardware_getComponent(AndroidHardware* this, int32_t index);
const char* AndroidHardware_toString(AndroidHardware* this);
bool AndroidHardware_compareTo(AndroidHardware* this, HardwareInterface* hardwareInterface);
ABHashtable* AndroidHardware_difference(AndroidHardware* this, HardwareInterface* hardwareInterface);

static void AndroidHardware_initFields(AndroidHardware* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->componentInterfaceVector = BasicArrayListD_new();
    this->PROC_BUS_INPUT_DIRECTORY = "/proc/bus/input/";
    this->DEVICES = java_concat(this->PROC_BUS_INPUT_DIRECTORY, "devices/");
    this->MINHARDWARE = 3;
}


void AndroidHardware_init(AndroidHardware* this) {
    AndroidHardware_initFields(this);
        AndroidHardware_init(this, this->DEVICES);
        int32_t size = BasicArrayList_size(this->componentInterfaceVector);
        if (size < this->MINHARDWARE) {
            java_throw(java_exception_new("Exception", "Not Enough Data For A Valid License On Linux"));
        }
}

AndroidHardware* AndroidHardware_new(void) {
    AndroidHardware* this = calloc(1, sizeof(AndroidHardware));
    AndroidHardware_init(this);
    return this;
}


// throws Exception
static void AndroidHardware_init(AndroidHardware* this, const char* filePath) {
        Closeable* lineNumberReader = NullCloseable_NULL_CLOSEABLE;
        JAVA_TRY {
            lineNumberReader = AndroidHardware_get(this, filePath);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, java_concat("Hardware Data: ", AndroidHardware_toString(this)), this, this->commonStrings->INIT, e);
            java_throw(e);
        } JAVA_FINALLY {
            if (lineNumberReader != nullptr) {
                Closeable_close(lineNumberReader);
            }
        } JAVA_END_TRY;
}


// throws Exception
static LineNumberReader* AndroidHardware_get(AndroidHardware* this, const char* filePath) {
        this->componentInterfaceVector = BasicArrayListD_new();
        FileReader* pciFile = FileReader_new(filePath);
        LineNumberReader* lineNumberReader = LineNumberReader_new(pciFile);
        LogUtil_putF(this->logUtil, "File Found", this, this->commonStrings->CONSTRUCTOR);
        const char* nextLine = Closeable_readLine(lineNumberReader);
        while (nextLine != nullptr) {
            nextLine = Closeable_readLine(lineNumberReader);
            BasicArrayList_add(this->componentInterfaceVector, UnknownHardware_new(nextLine));
        }
        return lineNumberReader;
}


HardwareComponentInterface* AndroidHardware_getComponent(AndroidHardware* this, int32_t index) {
        return ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
}


const char* AndroidHardware_toString(AndroidHardware* this) {
        StringMaker* stringBuilder = StringMaker_new();
        int32_t size = BasicArrayList_size(this->componentInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            HardwareComponentInterface* componentInterface = ((HardwareComponentInterface*) BasicArrayList_get(this->componentInterfaceVector, index));
            StringMaker_append(stringBuilder, HardwareComponentInterface_toString(componentInterface));
            StringMaker_append(stringBuilder, CommonSeps_getInstance()->NEW_LINE);
        }
        return StringMaker_toString(stringBuilder);
}


bool AndroidHardware_compareTo(AndroidHardware* this, HardwareInterface* hardwareInterface) {
        return true;
}


ABHashtable* AndroidHardware_difference(AndroidHardware* this, HardwareInterface* hardwareInterface) {
        return StdUtil_getInstance()->NULL_TABLE;
}

