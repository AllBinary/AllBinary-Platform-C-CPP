// Generated Code Do Not Modify
#include "org/allbinary/midlet/ExitRunnable.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"





void ExitRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ExitRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ExitRunnable", nullptr);
    java_register_method("ExitRunnable", "run", (void*) ExitRunnable_run);
}

static void ExitRunnable_initFields(ExitRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void ExitRunnable_init(ExitRunnable* this, AllBinaryMidlet* midlet, Processor* processor, bool isProgress) {
    ExitRunnable_register();
    ExitRunnable_initFields(this);
        this->midlet = midlet;
        this->isProgress = isProgress;
        this->processor = processor;
}

ExitRunnable* ExitRunnable_new(AllBinaryMidlet* midlet, Processor* processor, bool isProgress) {
    ExitRunnable* this = java_object_alloc(sizeof(ExitRunnable), "ExitRunnable");
    ExitRunnable_init(this, midlet, processor, isProgress);
    return this;
}


void ExitRunnable_run(ExitRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
            AllBinaryMidlet_destroyAppInRunnable(this->midlet, false, this->isProgress);
            AllBinaryMidlet_setDisplay(this->midlet, (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS));
            MIDlet_notifyDestroyed(this->midlet);
            LogUtil_putF(this->logUtil, this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
            Processor_process(this->processor);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
            JAVA_TRY {
                Processor_process(this->processor);
            } JAVA_CATCH(Exception, e2) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

