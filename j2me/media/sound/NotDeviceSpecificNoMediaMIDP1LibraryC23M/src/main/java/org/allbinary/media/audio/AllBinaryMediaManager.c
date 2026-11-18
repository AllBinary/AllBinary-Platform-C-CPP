// Generated Code Do Not Modify
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/Sounds.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/NoPlayer.h"
#if __has_include("org/allbinary/media/audio/ProgressCanvas.h")
#include "org/allbinary/media/audio/ProgressCanvas.h"
#endif
#if __has_include("javax/microedition/media/ProgressCanvas.h")
#include "javax/microedition/media/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/ProgressCanvas.h")
#include "org/allbinary/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ProgressCanvas.h")
#include "org/allbinary/logic/communication/log/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/string/ProgressCanvas.h")
#include "org/allbinary/logic/string/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/string/ProgressCanvas.h")
#include "org/allbinary/string/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerNoMediaMIDP1";












void AllBinaryMediaManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryMediaManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryMediaManager", nullptr);
}


void AllBinaryMediaManager_init(AllBinaryMediaManager* this) {
    AllBinaryMediaManager_register();
}

AllBinaryMediaManager* AllBinaryMediaManager_new(void) {
    AllBinaryMediaManager* this = java_object_alloc(sizeof(AllBinaryMediaManager), "AllBinaryMediaManager");
    AllBinaryMediaManager_init(this);
    return this;
}


bool AllBinaryMediaManager_isMuted(void) {
        return false;
}


void AllBinaryMediaManager_setMuted(bool aMuted) {
}


bool AllBinaryMediaManager_update(void) {
        return true;
}


// throws Exception
void AllBinaryMediaManager_initMethod(SoundsFactoryInterface* soundsFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, commonString->INIT);
        ProgressCanvas_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Media Manager");
        Sounds_initMethod(Sounds_new(soundsFactoryInterface));
}


// throws Exception
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface) {
        Sounds_stopAll(Sounds_new(soundsFactoryInterface));
        Sounds_closeAll(Sounds_new(soundsFactoryInterface));
        TsUtil_gc(TsUtil_getInstance());
}


Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "creatPlayer(InputStream)");
        return ((Player*) (NoPlayer_staticInit(), NoPlayer_NO_PLAYER));
}


Player* AllBinaryMediaManager_createPlayer(const char* locator) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "creatPlayer(locator)");
        return ((Player*) (NoPlayer_staticInit(), NoPlayer_NO_PLAYER));
}


// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
}


const char** AllBinaryMediaManager_getSupportedContentTypes(const char* protocol) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}


const char** AllBinaryMediaManager_getSupportedProtocols(const char* content_type) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}

