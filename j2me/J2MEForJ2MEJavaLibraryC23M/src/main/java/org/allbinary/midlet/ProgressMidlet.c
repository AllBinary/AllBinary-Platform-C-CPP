// Generated Code Do Not Modify
#include "org/allbinary/midlet/ProgressMidlet.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformationFactory.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/thread/ThreadPool.h"
#include "org/allbinary/midlet/AllBinaryMidlet.h"
#include "org/allbinary/midlet/MidletExitProcessorFactory.h"
#include "org/allbinary/midlet/ExitRunnable.h"






void ProgressMidlet_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ProgressMidlet_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProgressMidlet", "AllBinaryMidlet");
    java_register_method("ProgressMidlet", "preInit", (void*) ProgressMidlet_preInit);
    java_register_method("ProgressMidlet", "exitProgress", (void*) ProgressMidlet_exitProgress);
}

static void ProgressMidlet_initFields(ProgressMidlet* this) {
    
}


void ProgressMidlet_init(ProgressMidlet* this, ClientInformationFactory* clientInformationFactory) {
    ProgressMidlet_register();
    AllBinaryMidlet_init(&this->base);
    ProgressMidlet_initFields(this);
        ProgressMidlet_preInit(this);
        this->abeClientInformation = ClientInformationFactory_getInstance(clientInformationFactory);
}

ProgressMidlet* ProgressMidlet_new(ClientInformationFactory* clientInformationFactory) {
    ProgressMidlet* this = java_object_alloc(sizeof(ProgressMidlet), "ProgressMidlet");
    ProgressMidlet_init(this, clientInformationFactory);
    return this;
}


void ProgressMidlet_preInit(ProgressMidlet* this) {
}


void ProgressMidlet_exitProgress(ProgressMidlet* this, bool isProgress) {
        Processor* processor = MidletExitProcessorFactory_getExitInstance(MidletExitProcessorFactory_getInstance(), this);
        JAVA_TRY {
            ThreadPool* primaryThreadPool = PrimaryThreadPool_getInstance();
            Runnable* runnable = ExitRunnable_new(this, processor, isProgress);
            ThreadPool_runTask(primaryThreadPool, runnable);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "exit", e);
            JAVA_TRY {
                Processor_process(processor);
            } JAVA_CATCH(Exception, e2) {
                LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "exit", e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

