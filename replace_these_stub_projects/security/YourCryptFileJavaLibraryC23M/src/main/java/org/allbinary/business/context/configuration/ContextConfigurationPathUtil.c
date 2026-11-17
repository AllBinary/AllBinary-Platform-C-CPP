// Generated Code Do Not Modify
// package org.allbinary.business.context.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct ContextConfigurationPathUtil ContextConfigurationPathUtil;
struct ContextConfigurationPathUtil {
    char unused;
};


ContextConfigurationPathUtil* ContextConfigurationPathUtil_new(void);
AbFile* ContextConfigurationPathUtil_getAbFile(const char* contextName);
AbPath* ContextConfigurationPathUtil_getAbPath(const char* contextName);
static const char* ContextConfigurationPathUtil_getPath(void);
static const char* ContextConfigurationPathUtil_getFileName(const char* contextName);

void ContextConfigurationPathUtil_init(ContextConfigurationPathUtil* this) {
}

ContextConfigurationPathUtil* ContextConfigurationPathUtil_new(void) {
    ContextConfigurationPathUtil* this = calloc(1, sizeof(ContextConfigurationPathUtil));
    ContextConfigurationPathUtil_init(this);
    return this;
}


// throws Exception
AbFile* ContextConfigurationPathUtil_getAbFile(const char* contextName) {
        return nullptr;
}


// throws Exception
AbPath* ContextConfigurationPathUtil_getAbPath(const char* contextName) {
        return nullptr;
}


// throws Exception
static const char* ContextConfigurationPathUtil_getPath(void) {
        return nullptr;
}


static const char* ContextConfigurationPathUtil_getFileName(const char* contextName) {
        return nullptr;
}

