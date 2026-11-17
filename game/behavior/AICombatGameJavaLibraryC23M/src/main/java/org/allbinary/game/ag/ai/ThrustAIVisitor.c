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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ThrustAIVisitor ThrustAIVisitor;
struct ThrustAIVisitor {
    Visitor base;
    LogUtil* logUtil;
    bool TRUE;
};


ThrustAIVisitor* ThrustAIVisitor_new(void);

void ThrustAIVisitor_init(ThrustAIVisitor* this);
Any* ThrustAIVisitor_visit(ThrustAIVisitor* this, Any* anyType);

static void ThrustAIVisitor_initFields(ThrustAIVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->TRUE = BooleanFactory_getInstance()->TRUE;
}


void ThrustAIVisitor_init(ThrustAIVisitor* this) {
    Visitor_init(&this->base);
    ThrustAIVisitor_initFields(this);
}

ThrustAIVisitor* ThrustAIVisitor_new(void) {
    ThrustAIVisitor* this = calloc(1, sizeof(ThrustAIVisitor));
    ThrustAIVisitor_init(this);
    return this;
}


Any* ThrustAIVisitor_visit(ThrustAIVisitor* this, Any* anyType) {
        JAVA_TRY {
            BasicAI* basicAI = ((BasicAI*) anyType);
            BasicAI_processKeyAI(basicAI, Canvas_UP);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->VISIT, e);
        } JAVA_END_TRY;
        return this->TRUE;
}

