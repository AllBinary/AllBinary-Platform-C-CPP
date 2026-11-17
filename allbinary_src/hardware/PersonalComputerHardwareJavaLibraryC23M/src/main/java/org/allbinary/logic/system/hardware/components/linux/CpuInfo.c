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

typedef struct CpuInfo CpuInfo;
struct CpuInfo {
    const char* name;
};

CpuInfo* CpuInfo_PROCESSOR;
CpuInfo* CpuInfo_VENDORID;
CpuInfo* CpuInfo_CPUFAMILY;
CpuInfo* CpuInfo_MODEL;
CpuInfo* CpuInfo_MODELNAME;
CpuInfo* CpuInfo_STEPPING;
CpuInfo* CpuInfo_CPUMHZ;
CpuInfo* CpuInfo_CACHESIZE;
CpuInfo* CpuInfo_FDIVBUG;
CpuInfo* CpuInfo_HLTBUG;
CpuInfo* CpuInfo_F00FBUG;
CpuInfo* CpuInfo_COMABUG;
CpuInfo* CpuInfo_FPU;
CpuInfo* CpuInfo_FPUEXCEPTION;
CpuInfo* CpuInfo_CPUIDLEVEL;
CpuInfo* CpuInfo_WP;
CpuInfo* CpuInfo_FLAGS;
CpuInfo* CpuInfo_BOGOMIPS;

CpuInfo* CpuInfo_new(const char* name);

void CpuInfo_init(CpuInfo* this, const char* name);
const char* CpuInfo_toString(CpuInfo* this);

// Static fields with runtime initializers: call this once at startup
void CpuInfo_staticInit(void) {
    CpuInfo_PROCESSOR = CpuInfo_new("processor");
    CpuInfo_VENDORID = CpuInfo_new("vendor_id");
    CpuInfo_CPUFAMILY = CpuInfo_new("cpu family");
    CpuInfo_MODEL = CpuInfo_new("model");
    CpuInfo_MODELNAME = CpuInfo_new("model name");
    CpuInfo_STEPPING = CpuInfo_new("stepping");
    CpuInfo_CPUMHZ = CpuInfo_new("cpu MHz");
    CpuInfo_CACHESIZE = CpuInfo_new("cache size");
    CpuInfo_FDIVBUG = CpuInfo_new("fdiv_bug");
    CpuInfo_HLTBUG = CpuInfo_new("hlt_bug");
    CpuInfo_F00FBUG = CpuInfo_new("f00f_bug");
    CpuInfo_COMABUG = CpuInfo_new("coma_bug");
    CpuInfo_FPU = CpuInfo_new("fpu");
    CpuInfo_FPUEXCEPTION = CpuInfo_new("fpu_exception");
    CpuInfo_CPUIDLEVEL = CpuInfo_new("cache size");
    CpuInfo_WP = CpuInfo_new("yes");
    CpuInfo_FLAGS = CpuInfo_new("flags");
    CpuInfo_BOGOMIPS = CpuInfo_new("bogomips");
}

static void CpuInfo_initFields(CpuInfo* this) {
    
}


void CpuInfo_init(CpuInfo* this, const char* name) {
    CpuInfo_initFields(this);
        this->name = name;
}

CpuInfo* CpuInfo_new(const char* name) {
    CpuInfo* this = calloc(1, sizeof(CpuInfo));
    CpuInfo_init(this, name);
    return this;
}


const char* CpuInfo_toString(CpuInfo* this) {
        return this->name;
}

