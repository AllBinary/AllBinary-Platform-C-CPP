// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ThrustAIVisitor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif





void ThrustAIVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ThrustAIVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThrustAIVisitor", "Visitor");
    java_register_method("ThrustAIVisitor", "visit", (void*) ThrustAIVisitor_visit);
}

static void ThrustAIVisitor_initFields(ThrustAIVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->TRUE = BooleanFactory_getInstance()->TRUE;
}


void ThrustAIVisitor_init(ThrustAIVisitor* this) {
    ThrustAIVisitor_register();
    Visitor_init(&this->base);
    ThrustAIVisitor_initFields(this);
}

ThrustAIVisitor* ThrustAIVisitor_new(void) {
    ThrustAIVisitor* this = java_object_alloc(sizeof(ThrustAIVisitor), "ThrustAIVisitor");
    ThrustAIVisitor_init(this);
    return this;
}


void* ThrustAIVisitor_visit(ThrustAIVisitor* this, void* anyType) {
        JAVA_TRY {
            BasicAI* basicAI = ((BasicAI*) anyType);
            BasicAI_processKeyAI(basicAI, (Canvas_staticInit(), Canvas_UP));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->VISIT, e);
        } JAVA_END_TRY;
        return JAVA_BOX(this->TRUE);
}

