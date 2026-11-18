// Generated Code Do Not Modify
#include "org/allbinary/media/audio/AllBinaryMediaManager.h"
#include "javax/microedition/media/Manager.h"
#include "javax/microedition/media/MediaException.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/MIDPUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/audio/AudioContentTypeDataFactory.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
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
#if __has_include("javax/microedition/media/ProgressCanvas.h")
#include "javax/microedition/media/ProgressCanvas.h"
#endif
#if __has_include("javax/microedition/media/ProgressCanvas.h")
#include "javax/microedition/media/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/ProgressCanvas.h")
#include "org/allbinary/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/ProgressCanvas.h")
#include "org/allbinary/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/audio/ProgressCanvas.h")
#include "org/allbinary/audio/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/data/resource/ProgressCanvas.h")
#include "org/allbinary/data/resource/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/ProgressCanvas.h")
#include "org/allbinary/logic/communication/log/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/string/ProgressCanvas.h")
#include "org/allbinary/string/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/data/resource/ResourceUtil.h")
#include "org/allbinary/data/resource/ResourceUtil.h"
#endif
#if __has_include("org/allbinary/MIDPUtil.h")
#include "org/allbinary/MIDPUtil.h"
#endif
#if __has_include("org/allbinary/audio/AudioContentTypeDataFactory.h")
#include "org/allbinary/audio/AudioContentTypeDataFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/GameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#endif


static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerNoMIPD2";









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


// throws Exception
Player* AllBinaryMediaManager_createPlayer(const char* resource) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            if (TsUtil_compareTo(TsUtil_getInstance(), resource, (Manager_staticInit(), Manager_TONE_DEVICE_LOCATOR)) == 0) {
                return Manager_createPlayer(resource);
            } else {
                InputStream* inputStream = ResourceUtil_getResourceAsStream(ResourceUtil_getInstance(), resource);
                return MIDPUtil_createPlayerFromInputStream(MIDPUtil_getInstance(), inputStream, AudioContentTypeData_getName(AudioContentTypeDataFactory_getInstance()->MIME_AUDIO_WAV));
            }
        } else {
            return (NoPlayer_staticInit(), NoPlayer_NO_PLAYER);
        }
}


// throws MediaException
// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            Manager_playTone(frequency, time, volume);
        }
}

