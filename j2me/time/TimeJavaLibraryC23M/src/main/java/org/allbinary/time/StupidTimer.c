// Generated Code Do Not Modify
#include "org/allbinary/time/StupidTimer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"



static bool StupidTimer_visitBool(StupidTimer* this, Visitor* visitorInterface);



void StupidTimer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StupidTimer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StupidTimer", nullptr);
    java_register_method("StupidTimer", "visitBool", (void*) StupidTimer_visitBool);
    java_register_method("StupidTimer", "visit", (void*) StupidTimer_visit);
    java_register_method("StupidTimer", "stopWaiting", (void*) StupidTimer_stopWaiting);
}

static void StupidTimer_initFields(StupidTimer* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->nullUtil = NullUtil_getInstance();
    this->threadObjectUtil = ThreadObjectUtil_getInstance();
}

void StupidTimer_init(StupidTimer* this) {
    StupidTimer_register();
    StupidTimer_initFields(this);
}

StupidTimer* StupidTimer_new(void) {
    StupidTimer* this = java_object_alloc(sizeof(StupidTimer), "StupidTimer");
    StupidTimer_init(this);
    return this;
}


static bool StupidTimer_visitBool(StupidTimer* this, Visitor* visitorInterface) {
        bool result = ((bool) Visitor_visit(visitorInterface, this->nullUtil->NULL_OBJECT));
        bool result2 = Boolean_booleanValue(result);
        return result2;
}


// throws Exception
void StupidTimer_visit(StupidTimer* this, Visitor* visitorInterface, TimeDelayHelper* timeDelayHelper) {
        bool tookTooLong = false;
        const char* WAITING_FOR = "Waiting for: ";
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), WAITING_FOR), StringUtil_toString(StringUtil_getInstance(), visitorInterface))), this, this->commonStrings->VISIT);
        int32_t index = 0;
        while (StupidTimer_visitBool(this, visitorInterface)) {
            if (index % 10 == 0) {
                PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), WAITING_FOR), index)), this, this->commonStrings->VISIT);
            }
            index++;
            java_monitor_enter(this);
            {
                ThreadObjectUtil_waitObjectFor(this->threadObjectUtil, this, 1800);
            }
            java_monitor_exit(this);
            if (TimeDelayHelper_isTimeTNT(timeDelayHelper)) {
                tookTooLong = true;
                break;
            }
        }
        if (tookTooLong) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->VISIT, java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Took Too Long: "), StringUtil_toString(StringUtil_getInstance(), visitorInterface)))));
        } else {
            PreLogUtil_put(java_string_of(timeDelayHelper), this, this->commonStrings->VISIT);
        }
}


// throws Exception
void StupidTimer_stopWaiting(StupidTimer* this) {
        java_monitor_enter(this);
        {
            ThreadObjectUtil_notifyObject(this->threadObjectUtil, this);
        }
        java_monitor_exit(this);
}

