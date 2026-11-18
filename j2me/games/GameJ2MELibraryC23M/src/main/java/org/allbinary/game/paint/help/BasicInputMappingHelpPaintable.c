// Generated Code Do Not Modify
#include "org/allbinary/game/paint/help/BasicInputMappingHelpPaintable.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/color/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/graphics/color/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/color/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/string/InputToGameKeyMapping.h")
#include "org/allbinary/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/util/InputToGameKeyMapping.h")
#include "org/allbinary/util/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif





static const char* BasicInputMappingHelpPaintable_get(BasicInputMappingHelpPaintable* this, BasicArrayList* keyList);

void BasicInputMappingHelpPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicInputMappingHelpPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicInputMappingHelpPaintable", "HelpPaintable");
    java_register_method("BasicInputMappingHelpPaintable", "update", (void*) BasicInputMappingHelpPaintable_update);
    java_register_method("BasicInputMappingHelpPaintable", "get", (void*) BasicInputMappingHelpPaintable_get);
}

static void BasicInputMappingHelpPaintable_initFields(BasicInputMappingHelpPaintable* this) {
    
    this->NONE = GameKeyFactory_getInstance()->NONE;
}


void BasicInputMappingHelpPaintable_init(BasicInputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* basicColor) {
    BasicInputMappingHelpPaintable_register();
        HelpPaintable_init(&this->base, "Help Screen", BasicColorFactory_getInstance()->BLACK, basicColor);
        BasicInputMappingHelpPaintable_initFields(this);
        this->gameInputMappingArray = gameInputMappingArray;
        BasicInputMappingHelpPaintable_update(this, this->NONE, this->NONE);
}

BasicInputMappingHelpPaintable* BasicInputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* basicColor) {
    BasicInputMappingHelpPaintable* this = java_object_alloc(sizeof(BasicInputMappingHelpPaintable), "BasicInputMappingHelpPaintable");
    BasicInputMappingHelpPaintable_init(this, gameInputMappingArray, basicColor);
    return this;
}


void BasicInputMappingHelpPaintable_update(BasicInputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput) {
        PersistentInputMapping* gameKeyMapping = PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance());
        const char* EQUAL = " = ";
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = java_array_length(this->gameInputMappingArray);
        const char** keyInfo = ((const char**) java_array_new(sizeof(const char*), size));
        GameInputMapping* gameInputMapping = nullptr;
        GameKey* gameKey = nullptr;
        BasicArrayList* list = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameInputMapping = this->gameInputMappingArray[index];
            gameKey = GameInputMapping_getGameKey(gameInputMapping);
            list = InputMapping_getMappedInput(PersistentInputMapping_getInputMapping(gameKeyMapping), gameKey);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            keyInfo[index] = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, GameInputMapping_getName(gameInputMapping)), EQUAL), BasicInputMappingHelpPaintable_get(this, list)));
        }
        HelpPaintable_setInputInfoP((&this->base), keyInfo);
}


static const char* BasicInputMappingHelpPaintable_get(BasicInputMappingHelpPaintable* this, BasicArrayList* keyList) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        const char* AND = "and ";
        Input* key = nullptr;
        int32_t size = BasicArrayList_size(keyList);
        for (int32_t index = 0; index < size; index++) {
            key = ((Input*) keyList->objectArray[index]);
            StringMaker_append(stringBuffer, Input_getName(key));
            if (index + 1 < BasicArrayList_size(keyList)) {
                if (BasicArrayList_size(keyList) == 2) {
                    StringMaker_append(StringMaker_append(stringBuffer, commonSeps->SPACE), AND);
                } else {
                    if (index + 2 == BasicArrayList_size(keyList)) {
                        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
                        StringMaker_append(stringBuffer, AND);
                    } else {
                        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
                    }
                }
            }
        }
        return java_string_of(stringBuffer);
}

