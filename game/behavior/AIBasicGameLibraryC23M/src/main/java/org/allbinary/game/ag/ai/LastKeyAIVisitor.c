// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/LastKeyAIVisitor.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif





void LastKeyAIVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LastKeyAIVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LastKeyAIVisitor", "Visitor");
    java_register_method("LastKeyAIVisitor", "visit", (void*) LastKeyAIVisitor_visit);
}

static void LastKeyAIVisitor_initFields(LastKeyAIVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->TRUE = BooleanFactory_getInstance()->TRUE;
}


void LastKeyAIVisitor_init(LastKeyAIVisitor* this) {
    LastKeyAIVisitor_register();
    Visitor_init(&this->base);
    LastKeyAIVisitor_initFields(this);
}

LastKeyAIVisitor* LastKeyAIVisitor_new(void) {
    LastKeyAIVisitor* this = java_object_alloc(sizeof(LastKeyAIVisitor), "LastKeyAIVisitor");
    LastKeyAIVisitor_init(this);
    return this;
}


void* LastKeyAIVisitor_visit(LastKeyAIVisitor* this, void* anyType) {
        JAVA_TRY {
            BasicAI* basicAI = ((BasicAI*) anyType);
            int32_t key = BasicAI_getLastKey(basicAI);
            if (key != -1) {
                BasicAI_processKeyAI(basicAI, key);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->VISIT, e);
        } JAVA_END_TRY;
        return JAVA_BOX(this->TRUE);
}

