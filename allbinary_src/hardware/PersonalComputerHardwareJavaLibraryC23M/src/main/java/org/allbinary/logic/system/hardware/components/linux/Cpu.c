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
// package org.allbinary.logic.system.hardware.components.linux

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/FileReader.h"
// #include "java/io/LineNumberReader.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/io/file/directory/SubDirectory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h"
#include "org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct Cpu Cpu;
struct Cpu {
    CpuInterface CpuInterface_interface;
    HardwareComponentInterface HardwareComponentInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* CPUFILE;
    HashMap* cpuHashMap;
};


Cpu* Cpu_new(const char* filePath);

void Cpu_init(Cpu* this, const char* filePath);

Cpu* Cpu_new0();
void Cpu_init0(Cpu* this);
static void Cpu_init(Cpu* this, const char* filePath);
static void Cpu_init(Cpu* this, LineNumberReader* lineNumberReader, const char* filePath);
const char* Cpu_getProcessor(Cpu* this);
const char* Cpu_getVendorId(Cpu* this);
const char* Cpu_getCpuFamily(Cpu* this);
const char* Cpu_getModel(Cpu* this);
const char* Cpu_getModelName(Cpu* this);
const char* Cpu_getStepping(Cpu* this);
const char* Cpu_getCpuSpeed(Cpu* this);
const char* Cpu_getCacheSize(Cpu* this);
bool Cpu_compareTo(Cpu* this, CpuInterface* cpuInterface);
bool Cpu_compareTo(Cpu* this, HardwareComponentInterface* componentInterface);
const char* Cpu_toString(Cpu* this);

static void Cpu_initFields(Cpu* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->CPUFILE = "/proc/cpuinfo";
    this->cpuHashMap = nullptr;
}


void Cpu_init(Cpu* this, const char* filePath) {
    Cpu_initFields(this);
        Cpu_init(this, filePath);
}

Cpu* Cpu_new(const char* filePath) {
    Cpu* this = calloc(1, sizeof(Cpu));
    Cpu_init(this, filePath);
    return this;
}


void Cpu_init0(Cpu* this) {
    Cpu_initFields(this);
        Cpu_init(this, this->CPUFILE);
}

Cpu* Cpu_new0(void) {
    Cpu* this = calloc(1, sizeof(Cpu));
    Cpu_init0(this);
    return this;
}


// throws Exception
static void Cpu_init(Cpu* this, const char* filePath) {
        LineNumberReader* lineNumberReader = nullptr;
        JAVA_TRY {
            Cpu_init(this, lineNumberReader, filePath);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                LogUtil_put(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Cpu Data: "), append, Cpu_toString(this)), toString), this, this->commonStrings->CONSTRUCTOR, e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
// Java overloaded method: C needs a different name
static void Cpu_init(Cpu* this, LineNumberReader* lineNumberReader, const char* filePath) {
        JAVA_TRY {
            FileReader* fileReader = FileReader_new(filePath);
            lineNumberReader = LineNumberReader_new(fileReader);
            this->cpuHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            if (lineNumberReader == nullptr) {
                BasicArrayList* fileVector = SubDirectory_search(SubDirectory_getInstance(), filePath, AbFile_createAbFile(FilePathData_getInstance()->PATH_START));
                if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->OS)) {
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Cpu File BasicArrayList Size: "), appendint, BasicArrayList_size(fileVector)), toString), this, this->commonStrings->CONSTRUCTOR);
                }
                if (!BasicArrayList_isEmpty(fileVector)) {
                    AbFile* file = ((AbFile*) BasicArrayList_get(fileVector, 0));
                    lineNumberReader = LineNumberReader_new(FileReader_new(AbFile_getPath(file)));
                }
            }
            if (lineNumberReader != nullptr) {
                const char* nextLine = LineNumberReader_readLine(lineNumberReader);
                while (nextLine != nullptr) {
                    int32_t index = java_string_indexOf(nextLine, u':');
                    if (index >= 0) {
                        const char* key = java_substring(nextLine, 0, index);
                        int32_t valueIndex = index + 1;
                        const char* value = java_substring(nextLine, valueIndex, ((int32_t) strlen(nextLine)));
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_PROCESSOR, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_PROCESSOR, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_VENDORID, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_VENDORID, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_CPUFAMILY, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_CPUFAMILY, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_MODEL, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_MODEL, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_MODELNAME, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_MODELNAME, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_STEPPING, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_STEPPING, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_CPUMHZ, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_CPUMHZ, value);
                        }
                        if (java_string_indexOf(key, JAVA_CALL(CpuInfo_CACHESIZE, toString)) >= 0) {
                            HashMap_put(this->cpuHashMap, CpuInfo_CACHESIZE, value);
                        }
                    }
                    nextLine = LineNumberReader_readLine(lineNumberReader);
                }
            }
        } JAVA_FINALLY {
            if (lineNumberReader != nullptr) {
                LineNumberReader_close(lineNumberReader);
            }
        } JAVA_END_TRY;
}


const char* Cpu_getProcessor(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_PROCESSOR));
}


const char* Cpu_getVendorId(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_VENDORID));
}


const char* Cpu_getCpuFamily(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_CPUFAMILY));
}


const char* Cpu_getModel(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_MODEL));
}


const char* Cpu_getModelName(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_MODELNAME));
}


const char* Cpu_getStepping(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_STEPPING));
}


const char* Cpu_getCpuSpeed(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_CPUMHZ));
}


const char* Cpu_getCacheSize(Cpu* this) {
        return ((const char*) HashMap_get(this->cpuHashMap, CpuInfo_CACHESIZE));
}


bool Cpu_compareTo(Cpu* this, CpuInterface* cpuInterface) {
        return true;
}


// Java overloaded method: C needs a different name
bool Cpu_compareTo(Cpu* this, HardwareComponentInterface* componentInterface) {
        return true;
}


const char* Cpu_toString(Cpu* this) {
        CommonLabels* commonLabels = CommonLabels_getInstance();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringMaker = StringMaker_new();
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_PROCESSOR, toString)), append, commonLabels->COLON_SEP), append, Cpu_getProcessor(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_VENDORID, toString)), append, commonLabels->COLON_SEP), append, Cpu_getVendorId(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_CPUFAMILY, toString)), append, commonLabels->COLON_SEP), append, Cpu_getCpuFamily(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_MODEL, toString)), append, commonLabels->COLON_SEP), append, Cpu_getModel(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_MODELNAME, toString)), append, commonLabels->COLON_SEP), append, Cpu_getModelName(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_STEPPING, toString)), append, commonLabels->COLON_SEP), append, Cpu_getStepping(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_CPUMHZ, toString)), append, commonLabels->COLON_SEP), append, Cpu_getCpuSpeed(this));
        StringMaker_append(stringMaker, commonSeps->NEW_LINE);
        JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, JAVA_CALL(CpuInfo_CACHESIZE, toString)), append, commonLabels->COLON_SEP), append, Cpu_getCacheSize(this));
        return StringMaker_toString(stringMaker);
}

