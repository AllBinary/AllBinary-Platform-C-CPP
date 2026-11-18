// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/StartIntermissionProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/TimeDelayHelper.h")
#include "org/allbinary/game/displayable/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/canvas/TimeDelayHelper.h")
#include "org/allbinary/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/TimeDelayHelper.h")
#include "org/allbinary/logic/communication/log/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/string/TimeDelayHelper.h")
#include "org/allbinary/string/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/IntermissionInterface.h")
#include "org/allbinary/game/displayable/canvas/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/canvas/IntermissionInterface.h")
#include "org/allbinary/canvas/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/IntermissionInterface.h")
#include "org/allbinary/logic/communication/log/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/string/IntermissionInterface.h")
#include "org/allbinary/string/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/IntermissionInterface.h")
#include "org/allbinary/game/displayable/canvas/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/canvas/IntermissionInterface.h")
#include "org/allbinary/canvas/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/IntermissionInterface.h")
#include "org/allbinary/logic/communication/log/IntermissionInterface.h"
#endif
#if __has_include("org/allbinary/string/IntermissionInterface.h")
#include "org/allbinary/string/IntermissionInterface.h"
#endif





void StartIntermissionProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StartIntermissionProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StartIntermissionProcessor", "Processor");
    java_register_method("StartIntermissionProcessor", "process", (void*) StartIntermissionProcessor_process);
}

static void StartIntermissionProcessor_initFields(StartIntermissionProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->WAIT = 5000LL;
}


void StartIntermissionProcessor_init(StartIntermissionProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    StartIntermissionProcessor_register();
    Processor_init(&this->base);
    StartIntermissionProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

StartIntermissionProcessor* StartIntermissionProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    StartIntermissionProcessor* this = java_object_alloc(sizeof(StartIntermissionProcessor), "StartIntermissionProcessor");
    StartIntermissionProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void StartIntermissionProcessor_process(StartIntermissionProcessor* this) {
        if (TimeDelayHelper_isElapsedTNT(IntermissionInterface_getTimeDelayHelper(AllBinaryGameCanvas_getStartIntermissionInterface(this->gameCanvas)), this->WAIT)) {
            LogUtil_putF(this->logUtil, "Intermission End", this, this->commonStrings->PROCESS);
            IntermissionInterface_setEnabled(AllBinaryGameCanvas_getStartIntermissionInterface(this->gameCanvas), false);
        }
}

