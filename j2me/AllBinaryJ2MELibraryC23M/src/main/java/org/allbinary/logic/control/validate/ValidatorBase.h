#ifndef ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H
#define ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H
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
typedef struct ValidatorBaseInterface ValidatorBaseInterface;
typedef struct StdUtil StdUtil;
typedef struct BooleanFactory BooleanFactory;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
typedef struct ABHashtable ABHashtable;
#include "java/lang/Boolean.h"
#include "org/allbinary/logic/control/validate/ValidatorBaseInterface.h"

typedef struct ValidatorBase ValidatorBase;
struct ValidatorBase {
    ValidatorBaseInterface ValidatorBaseInterface_interface;
};


ValidatorBase* ValidatorBase_new(void);

ValidatorBase* ValidatorBase_getInstance(void);

void ValidatorBase_init(ValidatorBase* this);

bool ValidatorBase_isValid(ValidatorBase* this);

const char* ValidatorBase_validationInfo(ValidatorBase* this);

ABHashtable* ValidatorBase_toHashtable(ValidatorBase* this);

BasicArrayList* ValidatorBase_toList(ValidatorBase* this);
#define ValidatorBase_new0 ValidatorBase_new
#define ValidatorBase_init0 ValidatorBase_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ValidatorBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ValidatorBase_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_CONTROL_VALIDATE_VALIDATORBASE_H
