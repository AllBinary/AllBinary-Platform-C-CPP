/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.logic.visual.transform.info.objectConfig

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryInterface.h"

typedef struct TransformInfoObjectConfigAndManipulatorFactoryBase TransformInfoObjectConfigAndManipulatorFactoryBase;
struct TransformInfoObjectConfigAndManipulatorFactoryBase {
    TransformInfoObjectConfigAndManipulatorFactoryInterface TransformInfoObjectConfigAndManipulatorFactoryInterface_interface;
    CommonStrings* commonStrings;
};


TransformInfoObjectConfigAndManipulatorFactoryBase* TransformInfoObjectConfigAndManipulatorFactoryBase_new(void);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);

static void TransformInfoObjectConfigAndManipulatorFactoryBase_initFields(TransformInfoObjectConfigAndManipulatorFactoryBase* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void TransformInfoObjectConfigAndManipulatorFactoryBase_init(TransformInfoObjectConfigAndManipulatorFactoryBase* this) {
    TransformInfoObjectConfigAndManipulatorFactoryBase_initFields(this);
}

TransformInfoObjectConfigAndManipulatorFactoryBase* TransformInfoObjectConfigAndManipulatorFactoryBase_new(void) {
    TransformInfoObjectConfigAndManipulatorFactoryBase* this = calloc(1, sizeof(TransformInfoObjectConfigAndManipulatorFactoryBase));
    TransformInfoObjectConfigAndManipulatorFactoryBase_init(this);
    return this;
}


// throws Exception
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
// Java overloaded method: C needs a different name
TransformInfoObjectConfigInterface* TransformInfoObjectConfigAndManipulatorFactoryBase_getInstance(TransformInfoObjectConfigAndManipulatorFactoryBase* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) {
        java_throw(java_exception_new("RuntimeException", ""));
}

