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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/KeyEvent.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/KeySingletonFactory.h"
#include "org/allbinary/input/KeyUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"

typedef struct KeyboardActionScriptInput KeyboardActionScriptInput;
struct KeyboardActionScriptInput {
    BasicProfileActionScriptInput base;
    KeyboardActionScriptInputInterface KeyboardActionScriptInputInterface_interface;
    LogUtil* logUtil;
    int32_t* keyArray;
    KeyboardActionScriptInputJPanel* keyboardActionScriptInputJPanel;
    bool press;
    bool release;
    int32_t delayBetweenKeys;
};

static const char* KeyboardActionScriptInput_NAME = "Keyboard";

KeyboardActionScriptInput* KeyboardActionScriptInput_new(Node* node);

void KeyboardActionScriptInput_init(KeyboardActionScriptInput* this, Node* node);

KeyboardActionScriptInput* KeyboardActionScriptInput_new0();
void KeyboardActionScriptInput_init0(KeyboardActionScriptInput* this);
int32_t KeyboardActionScriptInput_getDelayBetweenKeys(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setDelayBetweenKeys(KeyboardActionScriptInput* this, int32_t delayBetweenKeys);
bool KeyboardActionScriptInput_isPress(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setPress(KeyboardActionScriptInput* this, bool press);
bool KeyboardActionScriptInput_isRelease(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setRelease(KeyboardActionScriptInput* this, bool release);
bool KeyboardActionScriptInput_isNormal(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setNormal(KeyboardActionScriptInput* this);
int32_t* KeyboardActionScriptInput_getKeyArray(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setKeyArray(KeyboardActionScriptInput* this, int32_t* keyArray);
void KeyboardActionScriptInput_showDialog(KeyboardActionScriptInput* this);
const char* KeyboardActionScriptInput_getText(KeyboardActionScriptInput* this);
void KeyboardActionScriptInput_setText(KeyboardActionScriptInput* this, const char* text);
static const char* KeyboardActionScriptInput_getText(int32_t* integerArray);
static int32_t* KeyboardActionScriptInput_integerArrayValue(KeyboardActionScriptInput* this, const char* text);
HashMap* KeyboardActionScriptInput_toHashMap(KeyboardActionScriptInput* this);
Node* KeyboardActionScriptInput_toXmlNode(KeyboardActionScriptInput* this, Document* document);
void KeyboardActionScriptInput_process(KeyboardActionScriptInput* this, int64_t frame);
void KeyboardActionScriptInput_log(KeyboardActionScriptInput* this);
const char* KeyboardActionScriptInput_toString(KeyboardActionScriptInput* this);

static void KeyboardActionScriptInput_initFields(KeyboardActionScriptInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->keyArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ KeySingletonFactory_getInstance(KeyEvent_VK_0) }) / sizeof(int32_t), (int32_t[]){ KeySingletonFactory_getInstance(KeyEvent_VK_0) }));
    
    this->press = false;
    this->release = false;
    this->delayBetweenKeys = 0;
}


void KeyboardActionScriptInput_init(KeyboardActionScriptInput* this, Node* node) {
        BasicProfileActionScriptInput_init(&this->base, KeyboardActionScriptInput_NAME, node);
        KeyboardActionScriptInput_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        Node* actionNode = DomSearchHelper_getNode(KeyboardActionScriptInputData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            BasicArrayList* vector = BasicArrayListD_new();
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), startsWith, KeyboardActionScriptInputData_KEY)) {
                    const char* keyString = DomNodeHelper_getTextNodeValue(childNode);
                    BasicArrayList_add(vector, java_string_of(keyString));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, KeyboardActionScriptInputData_DELAY_BETWEEN_KEYS) == 0) {
                    const char* time = DomNodeHelper_getTextNodeValue(childNode);
                    KeyboardActionScriptInput_setDelayBetweenKeys(this, JAVA_CALL(java_string_of(time), intValue));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, KeyboardActionScriptInputData_PRESS) == 0) {
                    const char* value = DomNodeHelper_getTextNodeValue(childNode);
                    KeyboardActionScriptInput_setPress(this, java_string_of(value));
                } else if (JAVA_CALL(Node_getNodeName(childNode), compareTo, KeyboardActionScriptInputData_RELEASE) == 0) {
                    const char* value = DomNodeHelper_getTextNodeValue(childNode);
                    KeyboardActionScriptInput_setRelease(this, java_string_of(value));
                } else {
                    java_throw(java_exception_new("Exception", "Action Script Input Unknown Node"));
                }
            }
            KeyboardActionScriptInput_setKeyArray(this, ((int32_t*) BasicArrayList_toArrayType(vector, ((int32_t*) java_array_new(sizeof(int32_t), BasicArrayList_size(vector))))));
        } else {
            java_throw(java_exception_new("Exception", "Action Script Input Node Null"));
        }
        KeyboardActionScriptInput_setAllowsChildren(this, false);
        if (!KeyboardActionScriptInput_isPress(this) && !KeyboardActionScriptInput_isRelease(this)) {
            KeyboardActionScriptInput_setNormal(this);
        }
        this->keyboardActionScriptInputJPanel = KeyboardActionScriptInputJPanel_new(this);
}

KeyboardActionScriptInput* KeyboardActionScriptInput_new(Node* node) {
    KeyboardActionScriptInput* this = calloc(1, sizeof(KeyboardActionScriptInput));
    KeyboardActionScriptInput_init(this, node);
    return this;
}


void KeyboardActionScriptInput_init0(KeyboardActionScriptInput* this) {
        BasicProfileActionScriptInput_init(&this->base, KeyboardActionScriptInput_NAME);
        KeyboardActionScriptInput_initFields(this);
        if (!KeyboardActionScriptInput_isPress(this) && !KeyboardActionScriptInput_isRelease(this)) {
            KeyboardActionScriptInput_setNormal(this);
        }
        KeyboardActionScriptInput_setAllowsChildren(this, false);
        KeyboardActionScriptInput_setTime(this, 120);
        this->keyboardActionScriptInputJPanel = KeyboardActionScriptInputJPanel_new(this);
}

KeyboardActionScriptInput* KeyboardActionScriptInput_new0(void) {
    KeyboardActionScriptInput* this = calloc(1, sizeof(KeyboardActionScriptInput));
    KeyboardActionScriptInput_init0(this);
    return this;
}


int32_t KeyboardActionScriptInput_getDelayBetweenKeys(KeyboardActionScriptInput* this) {
        return this->delayBetweenKeys;
}


void KeyboardActionScriptInput_setDelayBetweenKeys(KeyboardActionScriptInput* this, int32_t delayBetweenKeys) {
        this->delayBetweenKeys = delayBetweenKeys;
}


bool KeyboardActionScriptInput_isPress(KeyboardActionScriptInput* this) {
        return this->press;
}


void KeyboardActionScriptInput_setPress(KeyboardActionScriptInput* this, bool press) {
        this->press = press;
}


bool KeyboardActionScriptInput_isRelease(KeyboardActionScriptInput* this) {
        return this->release;
}


void KeyboardActionScriptInput_setRelease(KeyboardActionScriptInput* this, bool release) {
        this->release = release;
}


bool KeyboardActionScriptInput_isNormal(KeyboardActionScriptInput* this) {
        return KeyboardActionScriptInput_isRelease(this) && KeyboardActionScriptInput_isPress(this);
}


void KeyboardActionScriptInput_setNormal(KeyboardActionScriptInput* this) {
        KeyboardActionScriptInput_setPress(this, true);
        KeyboardActionScriptInput_setRelease(this, true);
}


int32_t* KeyboardActionScriptInput_getKeyArray(KeyboardActionScriptInput* this) {
        return this->keyArray;
}


void KeyboardActionScriptInput_setKeyArray(KeyboardActionScriptInput* this, int32_t* keyArray) {
        if (keyArray != nullptr) {
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->START + java_array_length(keyArray), this, "setKeyArray");
        }
        this->keyArray = keyArray;
}


void KeyboardActionScriptInput_showDialog(KeyboardActionScriptInput* this) {
        JAVA_CALL(KeyboardActionScriptInputJPanel_getKeyActionJDialog(this->keyboardActionScriptInputJPanel), setVisible, true);
}


const char* KeyboardActionScriptInput_getText(KeyboardActionScriptInput* this) {
        return KeyboardActionScriptInput_getText(this, KeyboardActionScriptInput_getKeyArray(this));
}


void KeyboardActionScriptInput_setText(KeyboardActionScriptInput* this, const char* text) {
        LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), text), this, "setText");
        int32_t* integerArray = KeyboardActionScriptInput_integerArrayValue(this, text);
        KeyboardActionScriptInput_setKeyArray(this, integerArray);
}


// Java overloaded method: C needs a different name
static const char* KeyboardActionScriptInput_getText(int32_t* integerArray) {
        int32_t index = 0;
        StringMaker* stringBuffer = StringMaker_new();
        while (index < java_array_length(integerArray)) {
            int32_t nextInteger = integerArray[index];
            if (KeyUtil_isNormallyDisplayed(nextInteger)) {
                StringMaker_append(stringBuffer, KeyEvent_getKeyText(nextInteger));
            } else {
                StringMaker_append(stringBuffer, java_concat(java_concat("&#", java_string_of(nextInteger)), ";"));
            }
            index++;
        }
        return StringMaker_toString(stringBuffer);
}


static int32_t* KeyboardActionScriptInput_integerArrayValue(KeyboardActionScriptInput* this, const char* text) {
        LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), text), this, "integerArrayValue");
        BasicArrayList* vector = BasicArrayListD_new();
        int32_t index = 0;
        while (index < ((int32_t) strlen(text))) {
            uint16_t aChar = ((uint16_t) text[index]);
            if (aChar == u'&') {
                if (((uint16_t) text[index + 1]) == u'#') {
                    int32_t endIndex = java_string_indexOf(text, u';', index + 1);
                    if (endIndex != -1) {
                        const char* nextCharString = java_substring(text, index + 2, endIndex);
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_string_of(CommonLabels_getInstance()->NEXT), " Char String: "), nextCharString), this, "integerArrayValue");
                        BasicArrayList_add(vector, java_string_of(java_substring(nextCharString, index, ((int32_t) strlen(nextCharString)))));
                        index = index + ((int32_t) strlen(nextCharString)) + 3;
                        continue;
                    }
                }
            }
            BasicArrayList_add(vector, JAVA_CALL(KeySingletonFactory_getHashtable(), get, java_string_of(aChar)));
            index++;
        }
        int32_t* integerArray = ((int32_t*) BasicArrayList_toArrayType(vector, ((int32_t*) java_array_new(sizeof(int32_t), BasicArrayList_size(vector)))));
        return integerArray;
}


HashMap* KeyboardActionScriptInput_toHashMap(KeyboardActionScriptInput* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        for (int32_t index = 0; index < java_array_length(KeyboardActionScriptInput_getKeyArray(this)); index++) {
            HashMap_put(hashMap, KeyboardActionScriptInputData_KEY + index, java_string_of(KeyboardActionScriptInput_getKeyArray(this)[index]));
        }
        HashMap_put(hashMap, KeyboardActionScriptInputData_DELAY_BETWEEN_KEYS, java_string_of(KeyboardActionScriptInput_getDelayBetweenKeys(this)));
        HashMap_put(hashMap, KeyboardActionScriptInputData_PRESS, java_string_of(KeyboardActionScriptInput_isPress(this)));
        HashMap_put(hashMap, KeyboardActionScriptInputData_RELEASE, java_string_of(KeyboardActionScriptInput_isRelease(this)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* KeyboardActionScriptInput_toXmlNode(KeyboardActionScriptInput* this, Document* document) {
        Node* node = BasicProfileActionScriptInput_toXmlNode((&this->base), document);
        Node_appendChild(node, ModDomHelper_createNodeWithValueNodes(document, KeyboardActionScriptInputData_NAME, KeyboardActionScriptInput_toHashMap(this)));
        return node;
}


// throws Exception
void KeyboardActionScriptInput_process(KeyboardActionScriptInput* this, int64_t frame) {
        KeyboardInputAutomationProcessor_process(this);
}


void KeyboardActionScriptInput_log(KeyboardActionScriptInput* this) {
        LogUtil_putF(this->logUtil, KeyboardActionScriptInput_toString(this), this, "log");
}


const char* KeyboardActionScriptInput_toString(KeyboardActionScriptInput* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicProfileActionScriptInput_toString((&this->base)));
        StringMaker_append(stringBuffer, " Text: ");
        StringMaker_append(stringBuffer, KeyboardActionScriptInput_getText(this));
        StringMaker_append(stringBuffer, " isPress: ");
        StringMaker_appendboolean(stringBuffer, KeyboardActionScriptInput_isPress(this));
        StringMaker_append(stringBuffer, " isRelease: ");
        StringMaker_appendboolean(stringBuffer, KeyboardActionScriptInput_isRelease(this));
        StringMaker_append(stringBuffer, " Between Key Delay: ");
        StringMaker_appendint(stringBuffer, KeyboardActionScriptInput_getDelayBetweenKeys(this));
        return StringMaker_toString(stringBuffer);
}

