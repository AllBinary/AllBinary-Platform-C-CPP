// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
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
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


static void* BasicTouchInputFactory_instance;







void BasicTouchInputFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicTouchInputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void BasicTouchInputFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTouchInputFactory", nullptr);
    java_register_method("BasicTouchInputFactory", "init", (void*) BasicTouchInputFactory_initMethod);
    java_register_method("BasicTouchInputFactory", "updateAll", (void*) BasicTouchInputFactory_updateAll);
    java_register_method("BasicTouchInputFactory", "updateAllFromList", (void*) BasicTouchInputFactory_updateAllFromList);
    java_register_method("BasicTouchInputFactory", "getList", (void*) BasicTouchInputFactory_getList);
}

static void BasicTouchInputFactory_initFields(BasicTouchInputFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->initialized = false;
    this->list = BasicArrayListD_new();
}


BasicTouchInputFactory* BasicTouchInputFactory_getInstance(void) {
        if ((BasicTouchInputFactory_staticInit(), BasicTouchInputFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            BasicTouchInputFactory_instance = BasicTouchInputFactory_new();
        }
        return ((BasicTouchInputFactory*) (BasicTouchInputFactory_staticInit(), BasicTouchInputFactory_instance));
}


void BasicTouchInputFactory_init(BasicTouchInputFactory* this) {
    BasicTouchInputFactory_register();
    BasicTouchInputFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY = TouchButtonInput_new(MAX - 41, "Button 7 - Testing Only May Cross Over Key Values");
        this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY = TouchButtonInput_new(MAX - 42, "Button 8 - Testing Only May Cross Over Key Values");
        this->SPECIAL_BUTTON_SIX = TouchButtonInput_new(MAX - 30, "Button 6");
        this->SPECIAL_BUTTON_FIVE = TouchButtonInput_new(MAX - 31, "Button 5");
        this->SPECIAL_BUTTON_FOUR = TouchButtonInput_new(MAX - 32, "Button 4");
        this->SPECIAL_BUTTON_THREE = TouchButtonInput_new(MAX - 33, "Button 3");
        this->SPECIAL_BUTTON_TWO = TouchButtonInput_new(MAX - 34, "Button 2");
        this->SPECIAL_BUTTON_ONE = TouchButtonInput_new(MAX - 35, "Button 1");
        this->UP = TouchButtonInput_new(MAX - 36, "Up Button");
        this->LEFT = TouchButtonInput_new(MAX - 37, "Left Button");
        this->RIGHT = TouchButtonInput_new(MAX - 38, "Right Button");
        this->DOWN = TouchButtonInput_new(MAX - 39, "Down Button");
        this->NONE = TouchButtonInput_new(MAX - 40, "No Button");
}

BasicTouchInputFactory* BasicTouchInputFactory_new(void) {
    BasicTouchInputFactory* this = java_object_alloc(sizeof(BasicTouchInputFactory), "BasicTouchInputFactory");
    BasicTouchInputFactory_init(this);
    return this;
}


// synchronized
void BasicTouchInputFactory_initMethod(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        if (!this->initialized) {
            this->initialized = true;
            BasicArrayList_add(this->list, this->UP);
            BasicArrayList_add(this->list, this->LEFT);
            BasicArrayList_add(this->list, this->RIGHT);
            BasicArrayList_add(this->list, this->DOWN);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_TWO);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_FOUR);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_THREE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_ONE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_FIVE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SIX);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SIX);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY);
            BasicTouchInputFactory_updateAllFromList(this, this->list, inputToGameKeyMapping);
        }
}


void BasicTouchInputFactory_updateAll(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        BasicTouchInputFactory_updateAllFromList(this, this->list, inputToGameKeyMapping);
}


void BasicTouchInputFactory_updateAllFromList(BasicTouchInputFactory* this, BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), BasicArrayList_size(list))), this, "updateAll");
        TouchButtonInput* touchButtonInput = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            touchButtonInput = ((TouchButtonInput*) list->objectArray[index]);
            TouchButtonInput_update(touchButtonInput, inputToGameKeyMapping);
        }
}


BasicArrayList* BasicTouchInputFactory_getList(BasicTouchInputFactory* this) {
        return this->list;
}

