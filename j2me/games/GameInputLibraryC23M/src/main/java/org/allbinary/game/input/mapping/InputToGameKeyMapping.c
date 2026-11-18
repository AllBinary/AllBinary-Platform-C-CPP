// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/mapping/InputMapping.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
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
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
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
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif


static void* InputToGameKeyMapping_instance;



static void InputToGameKeyMapping_clear(InputToGameKeyMapping* this);



static void InputToGameKeyMapping_addAll(InputToGameKeyMapping* this, Input* input, BasicArrayList* list);



static void InputToGameKeyMapping_set(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);



static void InputToGameKeyMapping_initGameKey(InputToGameKeyMapping* this, Canvas* canvas, GameKey* gameKey);

static int32_t InputToGameKeyMapping_getSmallestCanvasGameKeyCode(InputToGameKeyMapping* this, Canvas* canvas);




void InputToGameKeyMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    InputToGameKeyMapping_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void InputToGameKeyMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputToGameKeyMapping", "InputMapping");
    java_register_method("InputToGameKeyMapping", "clear", (void*) InputToGameKeyMapping_clear);
    java_register_method("InputToGameKeyMapping", "removeAll", (void*) InputToGameKeyMapping_removeAll);
    java_register_method("InputToGameKeyMapping", "addMapping", (void*) InputToGameKeyMapping_addMapping);
    java_register_method("InputToGameKeyMapping", "addAll", (void*) InputToGameKeyMapping_addAll);
    java_register_method("InputToGameKeyMapping", "add", (void*) InputToGameKeyMapping_add);
    java_register_method("InputToGameKeyMapping", "remove", (void*) InputToGameKeyMapping_remove);
    java_register_method("InputToGameKeyMapping", "set", (void*) InputToGameKeyMapping_set);
    java_register_method("InputToGameKeyMapping", "getMaxMappable", (void*) InputToGameKeyMapping_getMaxMappable);
    java_register_method("InputToGameKeyMapping", "getReverseInstance", (void*) InputToGameKeyMapping_getReverseInstance);
    java_register_method("InputToGameKeyMapping", "initGameKey", (void*) InputToGameKeyMapping_initGameKey);
    java_register_method("InputToGameKeyMapping", "getSmallestCanvasGameKeyCode", (void*) InputToGameKeyMapping_getSmallestCanvasGameKeyCode);
    java_register_method("InputToGameKeyMapping", "init", (void*) InputToGameKeyMapping_initMethod);
    java_register_method("InputToGameKeyMapping", "getInstanceForCanvas", (void*) InputToGameKeyMapping_getInstanceForCanvas);
    java_register_method("InputToGameKeyMapping", "getInstance", (void*) InputToGameKeyMapping_getInstance);
}

static void InputToGameKeyMapping_initFields(InputToGameKeyMapping* this) {
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->mappedGameKeys = ((GameKey**) java_array_from(sizeof(GameKey*), sizeof((GameKey*[]){ this->gameKeyFactory->UP, this->gameKeyFactory->DOWN, this->gameKeyFactory->LEFT, this->gameKeyFactory->RIGHT }) / sizeof(GameKey*), (GameKey*[]){ this->gameKeyFactory->UP, this->gameKeyFactory->DOWN, this->gameKeyFactory->LEFT, this->gameKeyFactory->RIGHT }));
    this->platformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), InputFactory_getInstance()->MAX));
    this->negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), 0));
}


InputToGameKeyMapping* InputToGameKeyMapping_getNullInstance(void) {
        if ((InputToGameKeyMapping_staticInit(), InputToGameKeyMapping_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            InputToGameKeyMapping_instance = InputToGameKeyMapping_new();
        }
        return ((InputToGameKeyMapping*) (InputToGameKeyMapping_staticInit(), InputToGameKeyMapping_instance));
}


void InputToGameKeyMapping_init(InputToGameKeyMapping* this) {
    InputToGameKeyMapping_register();
    InputMapping_init(&this->base);
    InputToGameKeyMapping_initFields(this);
        LogUtil_putF(this->base.logUtil, this->base.commonStrings->START, this, this->base.commonStrings->CONSTRUCTOR);
        InputToGameKeyMapping_clear(this);
}

InputToGameKeyMapping* InputToGameKeyMapping_new(void) {
    InputToGameKeyMapping* this = java_object_alloc(sizeof(InputToGameKeyMapping), "InputToGameKeyMapping");
    InputToGameKeyMapping_init(this);
    return this;
}


static void InputToGameKeyMapping_clear(InputToGameKeyMapping* this) {
        for (int32_t index = java_array_length(this->platformToGameKeyMapping) - 1; index >= 0; index--) {
            this->platformToGameKeyMapping[index] = this->gameKeyFactory->NONE;
        }
}


void InputToGameKeyMapping_removeAll(InputToGameKeyMapping* this) {
        InputMapping_removeAll((&this->base));
        InputToGameKeyMapping_clear(this);
}


void InputToGameKeyMapping_addMapping(InputToGameKeyMapping* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        for (int32_t index = InputToGameKeyMapping_getMaxMappable(inputToGameKeyMapping) - 1; index >= 0; index--) {
            Input* input = InputToGameKeyMapping_getInstance(inputToGameKeyMapping, index);
            if (input != this->gameKeyFactory->NONE) {
                InputToGameKeyMapping_addAll(this, input, InputMapping_getMappedInput(inputToGameKeyMapping, input));
            }
        }
}


static void InputToGameKeyMapping_addAll(InputToGameKeyMapping* this, Input* input, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            Input* mappedToInput = ((Input*) list->objectArray[index]);
            InputToGameKeyMapping_add(this, input, mappedToInput);
        }
}


void InputToGameKeyMapping_add(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        InputMapping_add((&this->base), input, mappedToInput);
        InputToGameKeyMapping_set(this, input, mappedToInput);
}


void InputToGameKeyMapping_remove(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), StringUtil_toString(StringUtil_getInstance(), input)), " == "), StringUtil_toString(StringUtil_getInstance(), mappedToInput))), this, "InputToGameKeyMapping::remove");
        InputMapping_remove((&this->base), input, mappedToInput);
        InputToGameKeyMapping_set(this, input, this->gameKeyFactory->NONE);
}


static void InputToGameKeyMapping_set(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        int32_t id = Input_getId(mappedToInput);
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            this->platformToGameKeyMapping[id] = ((GameKey*) input);
        }
}


int32_t InputToGameKeyMapping_getMaxMappable(InputToGameKeyMapping* this) {
        return java_array_length(this->platformToGameKeyMapping);
}


BasicArrayList* InputToGameKeyMapping_getReverseInstance(InputToGameKeyMapping* this, int32_t id) {
        BasicArrayList* list = BasicArrayListD_new();
        InputFactory* inputFactory = InputFactory_getInstance();
        for (int32_t index = 0; index < java_array_length(this->platformToGameKeyMapping); index++) {
            if (Input_getId(this->platformToGameKeyMapping[index]) == id) {
                Input* input = InputFactory_getInstanceById(inputFactory, index);
                if (input != nullptr) {
                    BasicArrayList_add(list, input);
                }
            }
        }
        return list;
}


// throws Exception
static void InputToGameKeyMapping_initGameKey(InputToGameKeyMapping* this, Canvas* canvas, GameKey* gameKey) {
        int32_t key = Canvas_getKeyCode(canvas, Input_getId(gameKey));
        if (key < 0 && -key < java_array_length(this->negativePlatformToGameKeyMapping)) {
            this->negativePlatformToGameKeyMapping[-key] = gameKey;
        } else if (key > 0) {
            if (this->platformToGameKeyMapping[key] == this->gameKeyFactory->NONE) {
                this->platformToGameKeyMapping[key] = gameKey;
            }
        } else {
            PreLogUtil_putOE(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_append(StringMaker_new(), java_string_of(gameKey)), CommonSeps_getInstance()->COLON_SEP), key)), this, this->base.commonStrings->INIT, java_exception_new("Exception", ""));
        }
}


// throws Exception
static int32_t InputToGameKeyMapping_getSmallestCanvasGameKeyCode(InputToGameKeyMapping* this, Canvas* canvas) {
        int32_t nextKey = 0;
        int32_t smallestKey = 0;
        for (int32_t index = java_array_length(this->mappedGameKeys); --index >= 0; ) {
            nextKey = Canvas_getKeyCode(canvas, Input_getId(this->mappedGameKeys[index]));
            if (nextKey < smallestKey) {
                smallestKey = nextKey;
            }
        }
        return smallestKey;
}


void InputToGameKeyMapping_initMethod(InputToGameKeyMapping* this, Canvas* canvas) {
        JAVA_TRY {
            GameKey** negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), 0));
            int32_t smallestKey = InputToGameKeyMapping_getSmallestCanvasGameKeyCode(this, canvas);
            if (smallestKey < 0) {
                smallestKey--;
                if (smallestKey < -256) {
                    smallestKey = -256;
                }
                negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), -smallestKey));
                for (int32_t index = java_array_length(negativePlatformToGameKeyMapping); --index >= 0; ) {
                    negativePlatformToGameKeyMapping[index] = this->gameKeyFactory->NONE;
                }
                this->negativePlatformToGameKeyMapping = negativePlatformToGameKeyMapping;
            }
            for (int32_t index = java_array_length(this->mappedGameKeys); --index >= 0; ) {
                InputToGameKeyMapping_initGameKey(this, canvas, this->mappedGameKeys[index]);
            }
        } JAVA_CATCH(Throwable, t) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, this->base.commonStrings->INIT, t);
        } JAVA_END_TRY;
}


GameKey* InputToGameKeyMapping_getInstanceForCanvas(InputToGameKeyMapping* this, Canvas* canvas, int32_t id) {
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            return this->platformToGameKeyMapping[id];
        } else if (id < 0 && -id < java_array_length(this->negativePlatformToGameKeyMapping)) {
            return this->negativePlatformToGameKeyMapping[-id];
        } else {
            return this->gameKeyFactory->NONE;
        }
}


GameKey* InputToGameKeyMapping_getInstance(InputToGameKeyMapping* this, int32_t id) {
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            return this->platformToGameKeyMapping[id];
        } else if (id < 0 && -id < java_array_length(this->negativePlatformToGameKeyMapping)) {
            return this->negativePlatformToGameKeyMapping[-id];
        } else {
            return this->gameKeyFactory->NONE;
        }
}

