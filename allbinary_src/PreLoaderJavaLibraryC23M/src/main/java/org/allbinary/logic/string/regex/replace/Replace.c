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
// package org.allbinary.logic.string.regex.replace

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/J2SEUtil.h"
#include "org/allbinary/globals/AppUrlGlobals.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"

typedef struct Replace Replace;
struct Replace {
    LogUtil* logUtil;
    J2SEUtil* j2seUtil;
    const char* REPLACERS_;
    const char* ALL;
    const char* FOUND_KEY;
    HashMap* hashMap;
};


Replace* Replace_new(const char* key, const char* value);

void Replace_init(Replace* this, const char* key, const char* value);

Replace* Replace_new2(const char** keys, const char** values);
void Replace_init2(Replace* this, const char** keys, const char** values);

Replace* Replace_new1(HashMap* hashMap);
void Replace_init1(Replace* this, HashMap* hashMap);
const char* Replace_all(Replace* this, const char* replace);
const char* Replace_upTo(Replace* this, const char* replace, int32_t total);
const char* Replace_line(Replace* this, const char* replace);
void Replace_main(const char** args);

static void Replace_initFields(Replace* this) {
    this->logUtil = LogUtil_getInstance();
    this->j2seUtil = J2SEUtil_getInstance();
    this->REPLACERS_ = "Replacers: ";
    this->ALL = "all";
    this->FOUND_KEY = "found key total: ";
    
}


void Replace_init(Replace* this, const char* key, const char* value) {
    Replace_initFields(this);
        this->hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(this->hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ key }) / sizeof(const char*), (const char*[]){ key })), ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ value }) / sizeof(const char*), (const char*[]){ value })));
}

Replace* Replace_new(const char* key, const char* value) {
    Replace* this = calloc(1, sizeof(Replace));
    Replace_init(this, key, value);
    return this;
}


void Replace_init2(Replace* this, const char** keys, const char** values) {
    Replace_initFields(this);
        this->hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(this->hashMap, keys, values);
}

Replace* Replace_new2(const char** keys, const char** values) {
    Replace* this = calloc(1, sizeof(Replace));
    Replace_init2(this, keys, values);
    return this;
}


void Replace_init1(Replace* this, HashMap* hashMap) {
    Replace_initFields(this);
        this->hashMap = hashMap;
}

Replace* Replace_new1(HashMap* hashMap) {
    Replace* this = calloc(1, sizeof(Replace));
    Replace_init1(this, hashMap);
    return this;
}


const char* Replace_all(Replace* this, const char* replace) {
        return Replace_upTo(this, replace, Integer_MIN_VALUE);
}


const char* Replace_upTo(Replace* this, const char* replace, int32_t total) {
        StringMaker* newStringBuffer = StringMaker_new();
        int32_t totalNumberOfReplaces = 0;
        const char** keys = nullptr;
        const char** values = nullptr;
        Any** keyArray = J2SEUtil_getHashMapAsArray(this->j2seUtil, this->hashMap);
        int32_t size = java_array_length(keyArray);
        for (int32_t index2 = 0; index2 < size; index2++) {
            keys = ((const char**) keyArray[index2]);
            values = ((const char**) HashMap_get(this->hashMap, keys));
            int64_t foundTotal = 0LL;
            int32_t index = 0;
            const char* nextKey = nullptr;
            int32_t end = 0;
            const char* nextSecondKey = nullptr;
            int32_t begin2 = 0;
            while (index < ((int32_t) strlen(replace))) {
                int32_t begin = java_string_indexOf(replace, keys[0], index);
                if (begin != -1) {
                    foundTotal++;
                    if (foundTotal % 100LL == 0LL) {
                        puts(java_string_of(java_concat(this->FOUND_KEY, java_string_of(foundTotal))));
                    }
                    nextKey = keys[0];
                    end = begin + ((int32_t) strlen(nextKey));
                    StringMaker_delete(newStringBuffer, 0, StringMaker_length(newStringBuffer));
                    StringMaker_append(newStringBuffer, java_substring(replace, 0, begin));
                    StringMaker_append(newStringBuffer, values[0]);
                    index = StringMaker_length(newStringBuffer);
                    StringMaker_append(newStringBuffer, java_substring(replace, end, ((int32_t) strlen(replace))));
                    replace = StringMaker_toString(newStringBuffer);
                    if (java_array_length(keys) > 1) {
                        nextSecondKey = keys[1];
                        begin2 = java_string_indexOf(replace, nextSecondKey, index);
                        if (begin2 != -1) {
                            int32_t end2 = begin2 + ((int32_t) strlen(nextSecondKey));
                            StringMaker_delete(newStringBuffer, 0, StringMaker_length(newStringBuffer));
                            StringMaker_append(newStringBuffer, java_substring(replace, 0, begin2));
                            StringMaker_append(newStringBuffer, values[1]);
                            index = StringMaker_length(newStringBuffer);
                            StringMaker_append(newStringBuffer, java_substring(replace, end2, ((int32_t) strlen(replace))));
                            replace = StringMaker_toString(newStringBuffer);
                        }
                    }
                    totalNumberOfReplaces++;
                    if (total != Integer_MIN_VALUE && totalNumberOfReplaces >= total) {
                        break;
                    }
                } else {
                    break;
                }
            }
        }
        if (totalNumberOfReplaces > 0) {
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->REPLACE)) {
                LogUtil_putF(this->logUtil, java_concat("Total Number Of Replaces: ", java_string_of(totalNumberOfReplaces)), this, this->ALL);
            }
        }
        return replace;
}


const char* Replace_line(Replace* this, const char* replace) {
        StringMaker* newStringBuffer = StringMaker_new();
        int32_t totalNumberOfReplaces = 0;
        const char* key = nullptr;
        const char* value = nullptr;
        Any** keyArray = J2SEUtil_getHashMapAsArray(this->j2seUtil, this->hashMap);
        int32_t size = java_array_length(keyArray);
        for (int32_t index2 = 0; index2 < size; index2++) {
            key = ((const char*) keyArray[index2]);
            value = ((const char*) HashMap_get(this->hashMap, key));
            int32_t index = 0;
            while (index < ((int32_t) strlen(replace))) {
                StringMaker_delete(newStringBuffer, 0, StringMaker_length(newStringBuffer));
                int32_t begin = java_string_indexOf(replace, key, index);
                if (begin != -1) {
                    puts(java_string_of(this->FOUND_KEY));
                    int32_t end = java_string_indexOf(replace, u'\n', begin + ((int32_t) strlen(key))) + 1;
                    if (end >= 0) {
                        StringMaker_append(newStringBuffer, java_substring(replace, 0, begin));
                        index = StringMaker_length(newStringBuffer);
                        StringMaker_append(newStringBuffer, java_substring(replace, end, ((int32_t) strlen(replace))));
                        replace = StringMaker_toString(newStringBuffer);
                        totalNumberOfReplaces++;
                    }
                } else {
                    break;
                }
            }
        }
        if (JAVA_CALL(LogConfigTypes_LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->REPLACE)) {
            LogUtil_putF(this->logUtil, java_concat("Total Number Of Replaces: ", java_string_of(totalNumberOfReplaces)), this, this->ALL);
        }
        return replace;
}


void Replace_main(const char** args) {
        JAVA_TRY {
            StringUtil* stringUtil = StringUtil_getInstance();
            AppUrlGlobals* appUrlGlobals = AppUrlGlobals_new();
            AppUrlGlobals_setWebappPath(appUrlGlobals, "G:/mnt/bc/mydev/work/allbinary_src/ToolsJavaLibrary/tools");
            JAVA_CALL(_URLGLOBALS, init, appUrlGlobals);
            const char* testString = "\"super gun\" big tank \"goodgunriflegun";
            Replace* replace = Replace_new("gun", "abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz");
            puts(java_string_of(java_concat("Old String: ", testString)));
            testString = java_string_all(replace, testString);
            puts(java_string_of(java_concat("New String: ", testString)));
            Replace* replaceCat = Replace_new("abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz", stringUtil->EMPTY_STRING);
            testString = Replace_all(replaceCat, testString);
            puts(java_string_of(java_concat("New String: ", testString)));
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

