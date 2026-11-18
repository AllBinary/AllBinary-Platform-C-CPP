// Generated Code Do Not Modify
#include "org/allbinary/game/paint/help/InputMappingHelpPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"
#include "org/allbinary/game/paint/help/UpdateMyFontProperties.h"
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorUtil.h")
#include "org/allbinary/graphics/color/BasicColorUtil.h"
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
#if __has_include("org/allbinary/game/input/PlatformInputMappingFactory.h")
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/paint/help/InputToGameKeyMapping.h")
#include "org/allbinary/game/paint/help/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
#endif
#if __has_include("javax/microedition/lcdui/InputToGameKeyMapping.h")
#include "javax/microedition/lcdui/InputToGameKeyMapping.h"
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
#if __has_include("org/allbinary/graphics/color/InputToGameKeyMapping.h")
#include "org/allbinary/graphics/color/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/InputToGameKeyMapping.h")
#include "org/allbinary/logic/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/InputToGameKeyMapping.h")
#include "org/allbinary/logic/communication/log/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/string/InputToGameKeyMapping.h")
#include "org/allbinary/logic/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/string/InputToGameKeyMapping.h")
#include "org/allbinary/string/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/string/InputToGameKeyMapping.h")
#include "org/allbinary/string/InputToGameKeyMapping.h"
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
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif


static const char* InputMappingHelpPaintable_AND = " and ";
static const char* InputMappingHelpPaintable_SEP = ", ";
static const char* InputMappingHelpPaintable_MORE_THAN_TWO_IN_LIST_AND = ", and ";




static const char* InputMappingHelpPaintable_get(InputMappingHelpPaintable* this, BasicArrayList* keyList);


void InputMappingHelpPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputMappingHelpPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputMappingHelpPaintable", "HelpPaintable");
    java_register_method("InputMappingHelpPaintable", "updateMeasurement", (void*) InputMappingHelpPaintable_updateMeasurement);
    java_register_method("InputMappingHelpPaintable", "update", (void*) InputMappingHelpPaintable_update);
    java_register_method("InputMappingHelpPaintable", "get", (void*) InputMappingHelpPaintable_get);
    java_register_method("InputMappingHelpPaintable", "paint", (void*) InputMappingHelpPaintable_paint);
}

static void InputMappingHelpPaintable_initFields(InputMappingHelpPaintable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    
    this->keyMappingArray = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), 0));
    this->actionBasicColor = BasicColorUtil_getInstance()->ZERO_ARRAY;
    this->inputBasicColorArray = ((BasicColor***) java_array_new2(sizeof(BasicColor*), 0, 0));
    this->selectedBasicColor = nullptr;
    this->updateMyFontProperties = UpdateMyFontProperties_new();
}


void InputMappingHelpPaintable_init(InputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    InputMappingHelpPaintable_register();
        HelpPaintable_init(&this->base, "Input Mapping", backgroundBasicColor, basicColor);
        InputMappingHelpPaintable_initFields(this);
        this->gameInputMappingArray = gameInputMappingArray;
        InputMappingHelpPaintable_update(this, this->NONE, this->NONE);
        if (backgroundBasicColor == this->basicColorFactory->WHITE || basicColor == this->basicColorFactory->WHITE) {
            this->selectedBasicColor = this->basicColorFactory->RED;
        } else {
            this->selectedBasicColor = this->basicColorFactory->WHITE;
        }
}

InputMappingHelpPaintable* InputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor) {
    InputMappingHelpPaintable* this = java_object_alloc(sizeof(InputMappingHelpPaintable), "InputMappingHelpPaintable");
    InputMappingHelpPaintable_init(this, gameInputMappingArray, backgroundBasicColor, basicColor);
    return this;
}


void InputMappingHelpPaintable_updateMeasurement(InputMappingHelpPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        UpdateMyFontProperties* updateMyFontProperties = UpdateMyFontProperties_new();
        updateMyFontProperties->charHeight = Font_getHeight(font);
        StringMaker* stringMaker = StringMaker_new();
        const char** inputInfo = this->base.inputInfo;
        int32_t size = java_array_length(inputInfo);
        updateMyFontProperties->actionStringArray = ((const char**) java_array_new(sizeof(const char*), size));
        updateMyFontProperties->keymappingBeginWidthArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        updateMyFontProperties->actionStringDeltaXArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        updateMyFontProperties->inputDeltaXArray = ((int32_t**) java_array_new2(sizeof(int32_t), size, 0));
        updateMyFontProperties->sepArray = ((const char***) java_array_new2(sizeof(const char*), size, 0));
        updateMyFontProperties->sepWidthArray = ((int32_t**) java_array_new2(sizeof(int32_t), size, 0));
        BasicArrayList* list = nullptr;
        const char* keyMappings = nullptr;
        const char* actionString = nullptr;
        Input* input = nullptr;
        int32_t size2 = 0;
        for (int32_t index = 0; index < size; index++) {
            list = this->keyMappingArray[index];
            keyMappings = InputMappingHelpPaintable_get(this, list);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            actionString = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, inputInfo[index]), this->commonSeps->COLON), this->commonSeps->SPACE), this->commonSeps->SPACE));
            updateMyFontProperties->actionStringArray[index] = actionString;
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            updateMyFontProperties->keymappingBeginWidthArray[index] = (Font_stringWidth(font, java_string_of(StringMaker_append(StringMaker_append(stringMaker, updateMyFontProperties->actionStringArray[index]), keyMappings))) >> 1);
            updateMyFontProperties->actionStringDeltaXArray[index] = Font_stringWidth(font, actionString);
            size2 = BasicArrayList_size(list);
            updateMyFontProperties->inputDeltaXArray[index] = ((int32_t*) java_array_new(sizeof(int32_t), size2));
            updateMyFontProperties->sepArray[index] = ((const char**) java_array_new(sizeof(const char*), size2));
            updateMyFontProperties->sepWidthArray[index] = ((int32_t*) java_array_new(sizeof(int32_t), size2));
            for (int32_t index2 = 0; index2 < size2; index2++) {
                input = ((Input*) list->objectArray[index2]);
                updateMyFontProperties->inputDeltaXArray[index][index2] = Font_stringWidth(font, Input_getName(input));
                updateMyFontProperties->sepArray[index][index2] = this->EMPTY_STRING;
                if (index2 + 1 < BasicArrayList_size(list)) {
                    if (BasicArrayList_size(list) == 2) {
                        updateMyFontProperties->sepArray[index][index2] = InputMappingHelpPaintable_AND;
                    } else {
                        if (index2 + 2 == BasicArrayList_size(list)) {
                            updateMyFontProperties->sepArray[index][index2] = InputMappingHelpPaintable_MORE_THAN_TWO_IN_LIST_AND;
                        } else {
                            updateMyFontProperties->sepArray[index][index2] = InputMappingHelpPaintable_SEP;
                        }
                    }
                }
                if (updateMyFontProperties->sepArray[index][index2] != this->EMPTY_STRING) {
                    updateMyFontProperties->sepWidthArray[index][index2] = Font_stringWidth(font, updateMyFontProperties->sepArray[index][index2]);
                }
            }
        }
        this->updateMyFontProperties = updateMyFontProperties;
        HelpPaintable_updateMeasurement((&this->base), graphics);
}


void InputMappingHelpPaintable_update(InputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput) {
        StringMaker* stringMaker = StringMaker_new();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, CommonLabels_getInstance()->START_LABEL), "selected GameKey: "), StringUtil_toString(this->stringUtil, selectedGameKey)), " Input: "), StringUtil_toString(this->stringUtil, selectedInput))), this, this->commonStrings->UPDATE);
        PersistentInputMapping* gameKeyMapping = PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance());
        int32_t size = java_array_length(this->gameInputMappingArray);
        const char** keyInfo = ((const char**) java_array_new(sizeof(const char*), size));
        BasicArrayList** keyMappingArray = ((BasicArrayList**) java_array_new(sizeof(BasicArrayList*), size));
        BasicColor** actionBasicColor = ((BasicColor**) java_array_new(sizeof(BasicColor*), size));
        BasicColor*** inputBasicColorArray = ((BasicColor***) java_array_new(sizeof(BasicColor**), size));
        GameInputMapping* gameInputMapping = nullptr;
        GameKey* gameKey = nullptr;
        BasicArrayList* list = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameInputMapping = this->gameInputMappingArray[index];
            gameKey = GameInputMapping_getGameKey(gameInputMapping);
            list = InputMapping_getMappedInput(PersistentInputMapping_getInputMapping(gameKeyMapping), gameKey);
            int32_t size2 = BasicArrayList_size(list);
            inputBasicColorArray[index] = ((BasicColor**) java_array_new(sizeof(BasicColor*), size2));
            for (int32_t index2 = 0; index2 < size2; index2++) {
                inputBasicColorArray[index][index2] = this->base.basicColor;
            }
            if (gameKey == selectedGameKey) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, "Found: selected GameKey: "), StringUtil_toString(this->stringUtil, selectedGameKey))), this, this->commonStrings->UPDATE);
                actionBasicColor[index] = this->selectedBasicColor;
                int32_t indexOfSelectedInput = BasicArrayList_indexOf(list, selectedInput);
                if (indexOfSelectedInput >= 0) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(stringMaker, "Found: selected Input: "), StringUtil_toString(this->stringUtil, selectedInput))), this, this->commonStrings->UPDATE);
                    inputBasicColorArray[index][indexOfSelectedInput] = this->selectedBasicColor;
                }
            } else {
                actionBasicColor[index] = this->base.basicColor;
            }
            keyInfo[index] = GameInputMapping_getName(gameInputMapping);
            keyMappingArray[index] = list;
        }
        this->keyMappingArray = keyMappingArray;
        this->actionBasicColor = actionBasicColor;
        this->inputBasicColorArray = inputBasicColorArray;
        HelpPaintable_setInputInfoP((&this->base), keyInfo);
        this->base.myFontProcessor = this->base.updateMyFontProcessor;
}


static const char* InputMappingHelpPaintable_get(InputMappingHelpPaintable* this, BasicArrayList* keyList) {
        StringMaker* stringBuffer = StringMaker_new();
        Input* key = nullptr;
        int32_t size = BasicArrayList_size(keyList);
        for (int32_t index = 0; index < size; index++) {
            key = ((Input*) keyList->objectArray[index]);
            StringMaker_append(stringBuffer, Input_getName(key));
            if (index + 1 < BasicArrayList_size(keyList)) {
                if (BasicArrayList_size(keyList) == 2) {
                    StringMaker_append(stringBuffer, InputMappingHelpPaintable_AND);
                } else {
                    if (index + 2 == BasicArrayList_size(keyList)) {
                        StringMaker_append(stringBuffer, InputMappingHelpPaintable_MORE_THAN_TWO_IN_LIST_AND);
                    } else {
                        StringMaker_append(stringBuffer, InputMappingHelpPaintable_SEP);
                    }
                }
            }
        }
        return java_string_of(stringBuffer);
}


void InputMappingHelpPaintable_paint(InputMappingHelpPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        int32_t halfWidth = DisplayInfoSingleton_getLastHalfWidth(this->base.displayInfo);
        Graphics_setColor(graphics, BasicColor_intValue(this->base.basicColor));
        Graphics_drawString(graphics, this->base.title, halfWidth - this->base.titleBeginWidth, this->updateMyFontProperties->charHeight, this->base.anchor);
        const char** inputInfo = this->base.inputInfo;
        int32_t size = java_array_length(inputInfo);
        int32_t y = 0;
        int32_t deltaX = 0;
        int32_t size2 = 0;
        const char* actionString = nullptr;
        Input* input = nullptr;
        BasicArrayList* list = nullptr;
        const char* sep = nullptr;
        int32_t beginWidth = 0;
        for (int32_t index = 0; index < size; index++) {
            y = (index + 3) * this->updateMyFontProperties->charHeight;
            deltaX = 0;
            list = this->keyMappingArray[index];
            size2 = BasicArrayList_size(list);
            beginWidth = this->updateMyFontProperties->keymappingBeginWidthArray[index];
            Graphics_setColor(graphics, BasicColor_intValue(this->actionBasicColor[index]));
            actionString = this->updateMyFontProperties->actionStringArray[index];
            Graphics_drawString(graphics, actionString, halfWidth - beginWidth + deltaX, y, this->base.anchor);
            deltaX += this->updateMyFontProperties->actionStringDeltaXArray[index];
            for (int32_t index2 = 0; index2 < size2; index2++) {
                input = ((Input*) list->objectArray[index2]);
                Graphics_setColor(graphics, BasicColor_intValue(this->inputBasicColorArray[index][index2]));
                Graphics_drawString(graphics, Input_getName(input), halfWidth - beginWidth + deltaX, y, this->base.anchor);
                deltaX += this->updateMyFontProperties->inputDeltaXArray[index][index2];
                sep = this->updateMyFontProperties->sepArray[index][index2];
                Graphics_setColor(graphics, BasicColor_intValue(this->base.basicColor));
                Graphics_drawString(graphics, sep, halfWidth - beginWidth + deltaX, y, this->base.anchor);
                deltaX += this->updateMyFontProperties->sepWidthArray[index][index2];
            }
        }
}

