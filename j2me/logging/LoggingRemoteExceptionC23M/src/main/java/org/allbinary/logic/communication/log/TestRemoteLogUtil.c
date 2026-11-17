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
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/Globals.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TestRemoteLogUtil TestRemoteLogUtil;
struct TestRemoteLogUtil {
    char unused;
};

const char* TestRemoteLogUtil_PATH = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

TestRemoteLogUtil* TestRemoteLogUtil_new(void);

void TestRemoteLogUtil_init(TestRemoteLogUtil* this);
void TestRemoteLogUtil_main(const char** args);


void TestRemoteLogUtil_init(TestRemoteLogUtil* this) {
        Globals_init(Globals_getInstance(), JAVA_CALL(java_class_of(this), getClassLoader), TestRemoteLogUtil_PATH);
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_put(logUtil, commonStrings->EXCEPTION, "Test", "TestClass", java_exception_new("Exception", "Pretend Exception"));
}

TestRemoteLogUtil* TestRemoteLogUtil_new(void) {
    TestRemoteLogUtil* this = calloc(1, sizeof(TestRemoteLogUtil));
    TestRemoteLogUtil_init(this);
    return this;
}


// throws Exception
void TestRemoteLogUtil_main(const char** args) {
        TestRemoteLogUtil_new();
}

