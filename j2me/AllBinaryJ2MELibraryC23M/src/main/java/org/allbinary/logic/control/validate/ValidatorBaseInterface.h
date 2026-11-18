#ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASEINTERFACE_H
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
// package org.allbinary.logic.control.validate

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#include "java/lang/Boolean.h"

typedef struct ValidatorBaseInterface ValidatorBaseInterface;
struct ValidatorBaseInterface {
    bool (*isValid)(void* this);
    const char* (*validationInfo)(void* this);
    ABHashtable* (*toHashtable)(void* this);
    BasicArrayList* (*toList)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ValidatorBaseInterface_staticInit(void);

static inline bool ValidatorBaseInterface_isValid(void* this) {
    return ((__typeof__(((ValidatorBaseInterface*) nullptr)->isValid)) java_method_of(this, "isValid"))(this);
}

static inline const char* ValidatorBaseInterface_validationInfo(void* this) {
    return ((__typeof__(((ValidatorBaseInterface*) nullptr)->validationInfo)) java_method_of(this, "validationInfo"))(this);
}

static inline ABHashtable* ValidatorBaseInterface_toHashtable(void* this) {
    return ((__typeof__(((ValidatorBaseInterface*) nullptr)->toHashtable)) java_method_of(this, "toHashtable"))(this);
}

static inline BasicArrayList* ValidatorBaseInterface_toList(void* this) {
    return ((__typeof__(((ValidatorBaseInterface*) nullptr)->toList)) java_method_of(this, "toList"))(this);
}

#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASEINTERFACE_H
