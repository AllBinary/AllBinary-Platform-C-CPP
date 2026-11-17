/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.automation.actions.script

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct JTreeInterfaceFactory JTreeInterfaceFactory;
struct JTreeInterfaceFactory {
    JTreeInterface* jTreeInterface;
};

static JTreeInterfaceFactory* JTreeInterfaceFactory_instance;

JTreeInterfaceFactory* JTreeInterfaceFactory_new(void);
JTreeInterfaceFactory* JTreeInterfaceFactory_getInstance(void);
void JTreeInterfaceFactory_set(JTreeInterfaceFactory* this, JTreeInterface* jTreeInterface);
JTreeInterface* JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory* this);

// Static fields with runtime initializers: call this once at startup
void JTreeInterfaceFactory_staticInit(void) {
    JTreeInterfaceFactory_instance = JTreeInterfaceFactory_new();
}

static void JTreeInterfaceFactory_initFields(JTreeInterfaceFactory* this) {
    this->jTreeInterface = nullptr;
}

void JTreeInterfaceFactory_init(JTreeInterfaceFactory* this) {
    JTreeInterfaceFactory_initFields(this);
}

JTreeInterfaceFactory* JTreeInterfaceFactory_new(void) {
    JTreeInterfaceFactory* this = calloc(1, sizeof(JTreeInterfaceFactory));
    JTreeInterfaceFactory_init(this);
    return this;
}


JTreeInterfaceFactory* JTreeInterfaceFactory_getInstance(void) {
        return JTreeInterfaceFactory_instance;
}


void JTreeInterfaceFactory_set(JTreeInterfaceFactory* this, JTreeInterface* jTreeInterface) {
        this->jTreeInterface = jTreeInterface;
}


JTreeInterface* JTreeInterfaceFactory_getJTreeInterface(JTreeInterfaceFactory* this) {
        return this->jTreeInterface;
}

