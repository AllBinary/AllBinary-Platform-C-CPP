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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "javax/xml/transform/stream/StreamResult.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct AbXslHelper AbXslHelper;
struct AbXslHelper {
    char unused;
};

static AbXslHelper* AbXslHelper_instance;

AbXslHelper* AbXslHelper_new(void);
AbXslHelper* AbXslHelper_getInstance(void);
const char* AbXslHelper_translate(AbXslHelper* this, AbFile* xslFile, AbFile* xmlFile);
const char* AbXslHelper_translate(AbXslHelper* this, AbPath* xslPath, AbPath* xmlPath);
const char* AbXslHelper_translate(AbXslHelper* this, const char* xsltFilePath, const char* xmlFilePath);

// Static fields with runtime initializers: call this once at startup
void AbXslHelper_staticInit(void) {
    AbXslHelper_instance = AbXslHelper_new();
}

void AbXslHelper_init(AbXslHelper* this) {
}

AbXslHelper* AbXslHelper_new(void) {
    AbXslHelper* this = calloc(1, sizeof(AbXslHelper));
    AbXslHelper_init(this);
    return this;
}


AbXslHelper* AbXslHelper_getInstance(void) {
        return AbXslHelper_instance;
}


// throws Exception
const char* AbXslHelper_translate(AbXslHelper* this, AbFile* xslFile, AbFile* xmlFile) {
        return AbXslHelper_translate(this, AbFile_getAbsolutePath(xslFile), AbFile_getAbsolutePath(xmlFile));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbXslHelper_translate(AbXslHelper* this, AbPath* xslPath, AbPath* xmlPath) {
        return AbXslHelper_translate(this, AbPath_getPath(xslPath), AbPath_getPath(xmlPath));
}


// throws Exception
// Java overloaded method: C needs a different name
const char* AbXslHelper_translate(AbXslHelper* this, const char* xsltFilePath, const char* xmlFilePath) {
        JAVA_TRY {
            ByteArrayOutputStream* outputStream = ByteArrayOutputStream_new();
            return JAVA_CALL(XslHelper_translate(XslHelper_getInstance(), StreamSource_new(xsltFilePath), StreamSource_new(xmlFilePath), StreamResult_new(outputStream)), toString);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_END_TRY;
}

