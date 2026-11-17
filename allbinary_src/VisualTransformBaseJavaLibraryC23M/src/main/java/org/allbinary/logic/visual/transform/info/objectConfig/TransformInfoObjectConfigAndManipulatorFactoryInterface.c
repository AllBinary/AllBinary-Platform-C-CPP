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
#include "org/w3c/dom/Document.h"

typedef struct TransformInfoObjectConfigAndManipulatorFactoryInterface TransformInfoObjectConfigAndManipulatorFactoryInterface;
struct TransformInfoObjectConfigAndManipulatorFactoryInterface {
    TransformInfoObjectConfigInterface* (*getInstance)(void* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath);
    TransformInfoObjectConfigInterface* (*getInstance)(void* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);
    TransformInfoObjectConfigInterface* (*getInstance)(void* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document);
};


