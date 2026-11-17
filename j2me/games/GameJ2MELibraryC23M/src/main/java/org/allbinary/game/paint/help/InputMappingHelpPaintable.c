/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.paint.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"

typedef struct InputMappingHelpPaintable InputMappingHelpPaintable;
struct InputMappingHelpPaintable {
    HelpPaintable base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    StringUtil* stringUtil;
    BasicColorFactory* basicColorFactory;
    GameKey* NONE;
    const char* EMPTY_STRING;
    GameInputMapping** gameInputMappingArray;
    BasicArrayList** keyMappingArray;
    BasicColor** actionBasicColor;
    BasicColor*** inputBasicColorArray;
    BasicColor* selectedBasicColor;
    UpdateMyFontProperties* updateMyFontProperties;
};

static const char* InputMappingHelpPaintable_AND = " and ";
static const char* InputMappingHelpPaintable_SEP = ", ";
static const char* InputMappingHelpPaintable_MORE_THAN_TWO_IN_LIST_AND = ", and ";

InputMappingHelpPaintable* InputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void InputMappingHelpPaintable_init(InputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* backgroundBasicColor, BasicColor* basicColor);
void InputMappingHelpPaintable_updateMeasurement(InputMappingHelpPaintable* this, Graphics* graphics);
void InputMappingHelpPaintable_update(InputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput);
static const char* InputMappingHelpPaintable_get(InputMappingHelpPaintable* this, BasicArrayList* keyList);
void InputMappingHelpPaintable_paint(InputMappingHelpPaintable* this, Graphics* graphics);

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
    InputMappingHelpPaintable* this = calloc(1, sizeof(InputMappingHelpPaintable));
    InputMappingHelpPaintable_init(this, gameInputMappingArray, backgroundBasicColor, basicColor);
    return this;
}


void InputMappingHelpPaintable_updateMeasurement(InputMappingHelpPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        UpdateMyFontProperties* updateMyFontProperties = UpdateMyFontProperties_new();
        updateMyFontProperties->charHeight = Font_getHeight(font);
        StringMaker* stringMaker = StringMaker_new();
        const char** inputInfo = this->inputInfo;
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
            actionString = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, inputInfo[index]), append, this->commonSeps->COLON), append, this->commonSeps->SPACE), append, this->commonSeps->SPACE), toString);
            updateMyFontProperties->actionStringArray[index] = actionString;
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            updateMyFontProperties->keymappingBeginWidthArray[index] = (Font_stringWidth(font, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, updateMyFontProperties->actionStringArray[index]), append, keyMappings), toString)) >> 1);
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
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, CommonLabels_getInstance()->START_LABEL), append, "selected GameKey: "), append, StringUtil_toString(this->stringUtil, selectedGameKey)), append, " Input: "), append, StringUtil_toString(this->stringUtil, selectedInput)), toString), this, this->commonStrings->UPDATE);
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
            list = JAVA_CALL(PersistentInputMapping_getInputMapping(gameKeyMapping), getMappedInput, gameKey);
            int32_t size2 = BasicArrayList_size(list);
            inputBasicColorArray[index] = ((BasicColor**) java_array_new(sizeof(BasicColor*), size2));
            for (int32_t index2 = 0; index2 < size2; index2++) {
                inputBasicColorArray[index][index2] = this->basicColor;
            }
            if (gameKey == selectedGameKey) {
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "Found: selected GameKey: "), append, StringUtil_toString(this->stringUtil, selectedGameKey)), toString), this, this->commonStrings->UPDATE);
                actionBasicColor[index] = this->selectedBasicColor;
                int32_t indexOfSelectedInput = BasicArrayList_indexOf(list, selectedInput);
                if (indexOfSelectedInput >= 0) {
                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "Found: selected Input: "), append, StringUtil_toString(this->stringUtil, selectedInput)), toString), this, this->commonStrings->UPDATE);
                    inputBasicColorArray[index][indexOfSelectedInput] = this->selectedBasicColor;
                }
            } else {
                actionBasicColor[index] = this->basicColor;
            }
            keyInfo[index] = GameInputMapping_getName(gameInputMapping);
            keyMappingArray[index] = list;
        }
        this->keyMappingArray = keyMappingArray;
        this->actionBasicColor = actionBasicColor;
        this->inputBasicColorArray = inputBasicColorArray;
        HelpPaintable_setInputInfoP((&this->base), keyInfo);
        this->myFontProcessor = this->updateMyFontProcessor;
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
        return StringMaker_toString(stringBuffer);
}


void InputMappingHelpPaintable_paint(InputMappingHelpPaintable* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        int32_t halfWidth = JAVA_CALL(this->displayInfo, getLastHalfWidth);
        Graphics_setColor(graphics, BasicColor_intValue(this->basicColor));
        Graphics_drawString(graphics, this->title, halfWidth - this->titleBeginWidth, this->updateMyFontProperties->charHeight, this->anchor);
        const char** inputInfo = this->inputInfo;
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
            Graphics_setColor(graphics, JAVA_CALL(this->actionBasicColor[index], intValue));
            actionString = this->updateMyFontProperties->actionStringArray[index];
            Graphics_drawString(graphics, actionString, halfWidth - beginWidth + deltaX, y, this->anchor);
            deltaX += this->updateMyFontProperties->actionStringDeltaXArray[index];
            for (int32_t index2 = 0; index2 < size2; index2++) {
                input = ((Input*) list->objectArray[index2]);
                Graphics_setColor(graphics, JAVA_CALL(this->inputBasicColorArray[index][index2], intValue));
                Graphics_drawString(graphics, Input_getName(input), halfWidth - beginWidth + deltaX, y, this->anchor);
                deltaX += this->updateMyFontProperties->inputDeltaXArray[index][index2];
                sep = this->updateMyFontProperties->sepArray[index][index2];
                Graphics_setColor(graphics, BasicColor_intValue(this->basicColor));
                Graphics_drawString(graphics, sep, halfWidth - beginWidth + deltaX, y, this->anchor);
                deltaX += this->updateMyFontProperties->sepWidthArray[index][index2];
            }
        }
}

