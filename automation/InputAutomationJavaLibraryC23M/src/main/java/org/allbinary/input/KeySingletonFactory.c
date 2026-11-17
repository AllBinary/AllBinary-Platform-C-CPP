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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/KeyEvent.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct KeySingletonFactory KeySingletonFactory;
struct KeySingletonFactory {
    LogUtil* logUtil;
};

static ABHashtable* KeySingletonFactory_keyStringHashtable;
static int32_t* KeySingletonFactory_keyArray;

KeySingletonFactory* KeySingletonFactory_new(void);

void KeySingletonFactory_init(KeySingletonFactory* this);
ABHashtable* KeySingletonFactory_getHashtable(void);
int32_t KeySingletonFactory_getInstance(int32_t index);
int32_t* KeySingletonFactory_getArray(void);

// Static fields with runtime initializers: call this once at startup
void KeySingletonFactory_staticInit(void) {
    KeySingletonFactory_keyStringHashtable = StdUtil_createHashtable(StdUtil_getInstance());
    KeySingletonFactory_keyArray = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ KeyEvent_VK_0, KeyEvent_VK_1, KeyEvent_VK_2, KeyEvent_VK_3, KeyEvent_VK_4, KeyEvent_VK_5, KeyEvent_VK_6, KeyEvent_VK_7, KeyEvent_VK_8, KeyEvent_VK_9, KeyEvent_VK_A, KeyEvent_VK_B, KeyEvent_VK_C, KeyEvent_VK_D, KeyEvent_VK_E, KeyEvent_VK_F, KeyEvent_VK_G, KeyEvent_VK_H, KeyEvent_VK_I, KeyEvent_VK_J, KeyEvent_VK_K, KeyEvent_VK_L, KeyEvent_VK_M, KeyEvent_VK_N, KeyEvent_VK_O, KeyEvent_VK_Q, KeyEvent_VK_R, KeyEvent_VK_S, KeyEvent_VK_T, KeyEvent_VK_U, KeyEvent_VK_V, KeyEvent_VK_W, KeyEvent_VK_X, KeyEvent_VK_Y, KeyEvent_VK_Z, KeyEvent_VK_NUMPAD0, KeyEvent_VK_NUMPAD1, KeyEvent_VK_NUMPAD2, KeyEvent_VK_NUMPAD3, KeyEvent_VK_NUMPAD4, KeyEvent_VK_NUMPAD5, KeyEvent_VK_NUMPAD6, KeyEvent_VK_NUMPAD7, KeyEvent_VK_NUMPAD8, KeyEvent_VK_NUMPAD9, KeyEvent_VK_NUM_LOCK, KeyEvent_VK_F1, KeyEvent_VK_F2, KeyEvent_VK_F3, KeyEvent_VK_F4, KeyEvent_VK_F5, KeyEvent_VK_F6, KeyEvent_VK_F7, KeyEvent_VK_F8, KeyEvent_VK_F9, KeyEvent_VK_F10, KeyEvent_VK_F11, KeyEvent_VK_F12, KeyEvent_VK_F13, KeyEvent_VK_F14, KeyEvent_VK_F15, KeyEvent_VK_F16, KeyEvent_VK_F17, KeyEvent_VK_F18, KeyEvent_VK_F19, KeyEvent_VK_F20, KeyEvent_VK_F21, KeyEvent_VK_F22, KeyEvent_VK_F23, KeyEvent_VK_F24, KeyEvent_VK_ACCEPT, KeyEvent_VK_ADD, KeyEvent_VK_AGAIN, KeyEvent_VK_ALL_CANDIDATES, KeyEvent_VK_ALPHANUMERIC, KeyEvent_VK_ALT, KeyEvent_VK_ALT_GRAPH, KeyEvent_VK_AMPERSAND, KeyEvent_VK_ASTERISK, KeyEvent_VK_AT, KeyEvent_VK_BACK_QUOTE, KeyEvent_VK_BACK_SLASH, KeyEvent_VK_BACK_SPACE, KeyEvent_VK_BEGIN, KeyEvent_VK_BRACELEFT, KeyEvent_VK_BRACERIGHT, KeyEvent_VK_CANCEL, KeyEvent_VK_CAPS_LOCK, KeyEvent_VK_CIRCUMFLEX, KeyEvent_VK_CLEAR, KeyEvent_VK_CLOSE_BRACKET, KeyEvent_VK_CODE_INPUT, KeyEvent_VK_COLON, KeyEvent_VK_COMMA, KeyEvent_VK_COMPOSE, KeyEvent_VK_CONTEXT_MENU, KeyEvent_VK_CONTROL, KeyEvent_VK_CONVERT, KeyEvent_VK_COPY, KeyEvent_VK_CUT, KeyEvent_VK_DEAD_ABOVEDOT, KeyEvent_VK_DEAD_ABOVERING, KeyEvent_VK_DEAD_ACUTE, KeyEvent_VK_DEAD_BREVE, KeyEvent_VK_DEAD_CARON, KeyEvent_VK_DEAD_CEDILLA, KeyEvent_VK_DEAD_CIRCUMFLEX, KeyEvent_VK_DEAD_DIAERESIS, KeyEvent_VK_DEAD_DOUBLEACUTE, KeyEvent_VK_DEAD_GRAVE, KeyEvent_VK_DEAD_IOTA, KeyEvent_VK_DEAD_MACRON, KeyEvent_VK_DEAD_OGONEK, KeyEvent_VK_DEAD_SEMIVOICED_SOUND, KeyEvent_VK_DEAD_TILDE, KeyEvent_VK_DEAD_VOICED_SOUND, KeyEvent_VK_DECIMAL, KeyEvent_VK_DELETE, KeyEvent_VK_DIVIDE, KeyEvent_VK_DOLLAR, KeyEvent_VK_DOWN, KeyEvent_VK_END, KeyEvent_VK_ENTER, KeyEvent_VK_EQUALS, KeyEvent_VK_ESCAPE, KeyEvent_VK_EURO_SIGN, KeyEvent_VK_EXCLAMATION_MARK, KeyEvent_VK_FINAL, KeyEvent_VK_FIND, KeyEvent_VK_FULL_WIDTH, KeyEvent_VK_GREATER, KeyEvent_VK_HALF_WIDTH, KeyEvent_VK_HELP, KeyEvent_VK_HIRAGANA, KeyEvent_VK_HOME, KeyEvent_VK_INPUT_METHOD_ON_OFF, KeyEvent_VK_INSERT, KeyEvent_VK_INVERTED_EXCLAMATION_MARK, KeyEvent_VK_JAPANESE_HIRAGANA, KeyEvent_VK_JAPANESE_KATAKANA, KeyEvent_VK_JAPANESE_ROMAN, KeyEvent_VK_KANA, KeyEvent_VK_KANA_LOCK, KeyEvent_VK_KANJI, KeyEvent_VK_KATAKANA, KeyEvent_VK_KP_DOWN, KeyEvent_VK_KP_LEFT, KeyEvent_VK_KP_RIGHT, KeyEvent_VK_KP_UP, KeyEvent_VK_LEFT, KeyEvent_VK_LEFT_PARENTHESIS, KeyEvent_VK_LESS, KeyEvent_VK_META, KeyEvent_VK_MINUS, KeyEvent_VK_MODECHANGE, KeyEvent_VK_MULTIPLY, KeyEvent_VK_NONCONVERT, KeyEvent_VK_NUMBER_SIGN, KeyEvent_VK_OPEN_BRACKET, KeyEvent_VK_PAGE_DOWN, KeyEvent_VK_PAGE_UP, KeyEvent_VK_PASTE, KeyEvent_VK_PAUSE, KeyEvent_VK_PERIOD, KeyEvent_VK_PLUS, KeyEvent_VK_PREVIOUS_CANDIDATE, KeyEvent_VK_PRINTSCREEN, KeyEvent_VK_PROPS, KeyEvent_VK_QUOTE, KeyEvent_VK_QUOTEDBL, KeyEvent_VK_RIGHT, KeyEvent_VK_RIGHT_PARENTHESIS, KeyEvent_VK_SCROLL_LOCK, KeyEvent_VK_SEMICOLON, KeyEvent_VK_SEPARATER, KeyEvent_VK_SEPARATOR, KeyEvent_VK_SHIFT, KeyEvent_VK_SLASH, KeyEvent_VK_SPACE, KeyEvent_VK_STOP, KeyEvent_VK_SUBTRACT, KeyEvent_VK_TAB, KeyEvent_VK_UNDEFINED, KeyEvent_VK_UNDERSCORE, KeyEvent_VK_UNDO, KeyEvent_VK_UP, KeyEvent_VK_WINDOWS }) / sizeof(int32_t), (int32_t[]){ KeyEvent_VK_0, KeyEvent_VK_1, KeyEvent_VK_2, KeyEvent_VK_3, KeyEvent_VK_4, KeyEvent_VK_5, KeyEvent_VK_6, KeyEvent_VK_7, KeyEvent_VK_8, KeyEvent_VK_9, KeyEvent_VK_A, KeyEvent_VK_B, KeyEvent_VK_C, KeyEvent_VK_D, KeyEvent_VK_E, KeyEvent_VK_F, KeyEvent_VK_G, KeyEvent_VK_H, KeyEvent_VK_I, KeyEvent_VK_J, KeyEvent_VK_K, KeyEvent_VK_L, KeyEvent_VK_M, KeyEvent_VK_N, KeyEvent_VK_O, KeyEvent_VK_Q, KeyEvent_VK_R, KeyEvent_VK_S, KeyEvent_VK_T, KeyEvent_VK_U, KeyEvent_VK_V, KeyEvent_VK_W, KeyEvent_VK_X, KeyEvent_VK_Y, KeyEvent_VK_Z, KeyEvent_VK_NUMPAD0, KeyEvent_VK_NUMPAD1, KeyEvent_VK_NUMPAD2, KeyEvent_VK_NUMPAD3, KeyEvent_VK_NUMPAD4, KeyEvent_VK_NUMPAD5, KeyEvent_VK_NUMPAD6, KeyEvent_VK_NUMPAD7, KeyEvent_VK_NUMPAD8, KeyEvent_VK_NUMPAD9, KeyEvent_VK_NUM_LOCK, KeyEvent_VK_F1, KeyEvent_VK_F2, KeyEvent_VK_F3, KeyEvent_VK_F4, KeyEvent_VK_F5, KeyEvent_VK_F6, KeyEvent_VK_F7, KeyEvent_VK_F8, KeyEvent_VK_F9, KeyEvent_VK_F10, KeyEvent_VK_F11, KeyEvent_VK_F12, KeyEvent_VK_F13, KeyEvent_VK_F14, KeyEvent_VK_F15, KeyEvent_VK_F16, KeyEvent_VK_F17, KeyEvent_VK_F18, KeyEvent_VK_F19, KeyEvent_VK_F20, KeyEvent_VK_F21, KeyEvent_VK_F22, KeyEvent_VK_F23, KeyEvent_VK_F24, KeyEvent_VK_ACCEPT, KeyEvent_VK_ADD, KeyEvent_VK_AGAIN, KeyEvent_VK_ALL_CANDIDATES, KeyEvent_VK_ALPHANUMERIC, KeyEvent_VK_ALT, KeyEvent_VK_ALT_GRAPH, KeyEvent_VK_AMPERSAND, KeyEvent_VK_ASTERISK, KeyEvent_VK_AT, KeyEvent_VK_BACK_QUOTE, KeyEvent_VK_BACK_SLASH, KeyEvent_VK_BACK_SPACE, KeyEvent_VK_BEGIN, KeyEvent_VK_BRACELEFT, KeyEvent_VK_BRACERIGHT, KeyEvent_VK_CANCEL, KeyEvent_VK_CAPS_LOCK, KeyEvent_VK_CIRCUMFLEX, KeyEvent_VK_CLEAR, KeyEvent_VK_CLOSE_BRACKET, KeyEvent_VK_CODE_INPUT, KeyEvent_VK_COLON, KeyEvent_VK_COMMA, KeyEvent_VK_COMPOSE, KeyEvent_VK_CONTEXT_MENU, KeyEvent_VK_CONTROL, KeyEvent_VK_CONVERT, KeyEvent_VK_COPY, KeyEvent_VK_CUT, KeyEvent_VK_DEAD_ABOVEDOT, KeyEvent_VK_DEAD_ABOVERING, KeyEvent_VK_DEAD_ACUTE, KeyEvent_VK_DEAD_BREVE, KeyEvent_VK_DEAD_CARON, KeyEvent_VK_DEAD_CEDILLA, KeyEvent_VK_DEAD_CIRCUMFLEX, KeyEvent_VK_DEAD_DIAERESIS, KeyEvent_VK_DEAD_DOUBLEACUTE, KeyEvent_VK_DEAD_GRAVE, KeyEvent_VK_DEAD_IOTA, KeyEvent_VK_DEAD_MACRON, KeyEvent_VK_DEAD_OGONEK, KeyEvent_VK_DEAD_SEMIVOICED_SOUND, KeyEvent_VK_DEAD_TILDE, KeyEvent_VK_DEAD_VOICED_SOUND, KeyEvent_VK_DECIMAL, KeyEvent_VK_DELETE, KeyEvent_VK_DIVIDE, KeyEvent_VK_DOLLAR, KeyEvent_VK_DOWN, KeyEvent_VK_END, KeyEvent_VK_ENTER, KeyEvent_VK_EQUALS, KeyEvent_VK_ESCAPE, KeyEvent_VK_EURO_SIGN, KeyEvent_VK_EXCLAMATION_MARK, KeyEvent_VK_FINAL, KeyEvent_VK_FIND, KeyEvent_VK_FULL_WIDTH, KeyEvent_VK_GREATER, KeyEvent_VK_HALF_WIDTH, KeyEvent_VK_HELP, KeyEvent_VK_HIRAGANA, KeyEvent_VK_HOME, KeyEvent_VK_INPUT_METHOD_ON_OFF, KeyEvent_VK_INSERT, KeyEvent_VK_INVERTED_EXCLAMATION_MARK, KeyEvent_VK_JAPANESE_HIRAGANA, KeyEvent_VK_JAPANESE_KATAKANA, KeyEvent_VK_JAPANESE_ROMAN, KeyEvent_VK_KANA, KeyEvent_VK_KANA_LOCK, KeyEvent_VK_KANJI, KeyEvent_VK_KATAKANA, KeyEvent_VK_KP_DOWN, KeyEvent_VK_KP_LEFT, KeyEvent_VK_KP_RIGHT, KeyEvent_VK_KP_UP, KeyEvent_VK_LEFT, KeyEvent_VK_LEFT_PARENTHESIS, KeyEvent_VK_LESS, KeyEvent_VK_META, KeyEvent_VK_MINUS, KeyEvent_VK_MODECHANGE, KeyEvent_VK_MULTIPLY, KeyEvent_VK_NONCONVERT, KeyEvent_VK_NUMBER_SIGN, KeyEvent_VK_OPEN_BRACKET, KeyEvent_VK_PAGE_DOWN, KeyEvent_VK_PAGE_UP, KeyEvent_VK_PASTE, KeyEvent_VK_PAUSE, KeyEvent_VK_PERIOD, KeyEvent_VK_PLUS, KeyEvent_VK_PREVIOUS_CANDIDATE, KeyEvent_VK_PRINTSCREEN, KeyEvent_VK_PROPS, KeyEvent_VK_QUOTE, KeyEvent_VK_QUOTEDBL, KeyEvent_VK_RIGHT, KeyEvent_VK_RIGHT_PARENTHESIS, KeyEvent_VK_SCROLL_LOCK, KeyEvent_VK_SEMICOLON, KeyEvent_VK_SEPARATER, KeyEvent_VK_SEPARATOR, KeyEvent_VK_SHIFT, KeyEvent_VK_SLASH, KeyEvent_VK_SPACE, KeyEvent_VK_STOP, KeyEvent_VK_SUBTRACT, KeyEvent_VK_TAB, KeyEvent_VK_UNDEFINED, KeyEvent_VK_UNDERSCORE, KeyEvent_VK_UNDO, KeyEvent_VK_UP, KeyEvent_VK_WINDOWS }));
}

static void KeySingletonFactory_initFields(KeySingletonFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


// Java static initializer: call this once at startup
void KeySingletonFactory_staticInitializer(void) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* STATIC_BLOCK = "Static Block";
        JAVA_TRY {
            for (int32_t index = 0; index < java_array_length(KeySingletonFactory_keyArray); index++) {
                const char* keyAsString = KeyEvent_getKeyText(KeySingletonFactory_keyArray[index]);
                JAVA_CALL(KeySingletonFactory_keyStringHashtable, put, keyAsString, KeySingletonFactory_keyArray[index]);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, "KeySingleFactory", STATIC_BLOCK, e);
        } JAVA_END_TRY;
}


void KeySingletonFactory_init(KeySingletonFactory* this) {
    KeySingletonFactory_initFields(this);
}

KeySingletonFactory* KeySingletonFactory_new(void) {
    KeySingletonFactory* this = calloc(1, sizeof(KeySingletonFactory));
    KeySingletonFactory_init(this);
    return this;
}


ABHashtable* KeySingletonFactory_getHashtable(void) {
        return KeySingletonFactory_keyStringHashtable;
}


int32_t KeySingletonFactory_getInstance(int32_t index) {
        return java_string_of(index);
}


int32_t* KeySingletonFactory_getArray(void) {
        return KeySingletonFactory_keyArray;
}

