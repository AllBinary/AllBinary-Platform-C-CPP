// Generated Code Do Not Modify
#include "org/allbinary/media/audio/Sounds.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/SoundStrings.h"
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/Sound.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif







void Sounds_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Sounds_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Sounds", nullptr);
    java_register_method("Sounds", "init", (void*) Sounds_initMethod);
    java_register_method("Sounds", "stopAll", (void*) Sounds_stopAll);
    java_register_method("Sounds", "closeAll", (void*) Sounds_closeAll);
}

static void Sounds_initFields(Sounds* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->soundStrings = SoundStrings_getInstance();
    
}


void Sounds_init(Sounds* this, SoundsFactoryInterface* soundsFactoryInterface) {
    Sounds_register();
    Sounds_initFields(this);
        this->soundsFactoryInterface = soundsFactoryInterface;
}

Sounds* Sounds_new(SoundsFactoryInterface* soundsFactoryInterface) {
    Sounds* this = java_object_alloc(sizeof(Sounds), "Sounds");
    Sounds_init(this, soundsFactoryInterface);
    return this;
}


// throws Exception
void Sounds_initMethod(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->INIT);
        CommonLabels* commonLabels = CommonLabels_getInstance();
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        SoundsFactoryInterface_initMethod(this->soundsFactoryInterface);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t indexInteger = 0;
        const char* indexString = nullptr;
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t i = 0; i < java_array_length(soundInterfaceArray); i++) {
            Sound* soundInterface = soundInterfaceArray[i];
            if (soundInterface != nullptr) {
                indexInteger = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, i);
                indexString = java_string_of(indexInteger);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, commonLabels->INDEX_LABEL);
                StringMaker_append(stringBuffer, indexString);
                StringMaker_append(stringBuffer, this->soundStrings->SOUND);
                StringMaker_append(stringBuffer, java_class_of(soundInterface));
                LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, this->commonStrings->INIT);
                Sound_initMethod(soundInterface);
                ProgressCanvas_addNormalPortion(progressCanvas, 100, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->soundStrings->INIT_SOUND), indexString)));
            }
        }
        SoundsFactoryInterface_setInitialized(this->soundsFactoryInterface, true);
        LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->INIT);
}


// throws Exception
void Sounds_stopAll(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->soundStrings->STOP_ALL);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Player* player = nullptr;
        for (int32_t index = 0; index < java_array_length(soundInterfaceArray); index++) {
            if (soundInterfaceArray[index] != nullptr) {
                player = Sound_getPlayerP(soundInterfaceArray[index]);
                if (player != nullptr) {
                    Player_stop(player);
                    ProgressCanvas_addPortion(progressCanvas, 100, this->soundStrings->STOPPING_SOUND, index);
                }
            }
        }
}


// throws Exception
void Sounds_closeAll(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->soundStrings->CLOSE_ALL);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Player* player = nullptr;
        for (int32_t index = 0; index < java_array_length(soundInterfaceArray); index++) {
            if (soundInterfaceArray[index] != nullptr) {
                player = Sound_getPlayerP(soundInterfaceArray[index]);
                if (player != nullptr) {
                    Player_close(player);
                    ProgressCanvas_addPortion(progressCanvas, 100, this->soundStrings->CLOSING_SOUND, index);
                }
            }
        }
}

