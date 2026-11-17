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
// package org.allbinary.logic.control.workflow

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct WorkFlowData WorkFlowData;
struct WorkFlowData {
    const char* WORKFLOWS;
    const char* WORKFLOW;
    const char* NAME;
    const char* DATA;
};

static WorkFlowData* WorkFlowData_instance;

WorkFlowData* WorkFlowData_new(void);
WorkFlowData* WorkFlowData_getInstance(void);

void WorkFlowData_init(WorkFlowData* this);

// Static fields with runtime initializers: call this once at startup
void WorkFlowData_staticInit(void) {
    WorkFlowData_instance = WorkFlowData_new();
}

static void WorkFlowData_initFields(WorkFlowData* this) {
    this->WORKFLOWS = "WORKFLOWS";
    this->WORKFLOW = "WORKFLOW";
    this->NAME = "WORKFLOW_NAME";
    this->DATA = "WORKFLOW_DATA";
}


WorkFlowData* WorkFlowData_getInstance(void) {
        return WorkFlowData_instance;
}


void WorkFlowData_init(WorkFlowData* this) {
    WorkFlowData_initFields(this);
}

WorkFlowData* WorkFlowData_new(void) {
    WorkFlowData* this = calloc(1, sizeof(WorkFlowData));
    WorkFlowData_init(this);
    return this;
}

