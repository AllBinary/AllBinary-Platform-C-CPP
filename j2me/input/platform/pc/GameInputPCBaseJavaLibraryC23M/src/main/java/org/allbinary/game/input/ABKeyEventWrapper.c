/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/KeyEvent.h"
#include "jsinterop/annotations/JsType.h"

typedef struct ABKeyEventWrapper ABKeyEventWrapper;
struct ABKeyEventWrapper {
    int32_t VK_ENTER;
    int32_t VK_BACK_SPACE;
    int32_t VK_TAB;
    int32_t VK_CANCEL;
    int32_t VK_CLEAR;
    int32_t VK_SHIFT;
    int32_t VK_CONTROL;
    int32_t VK_ALT;
    int32_t VK_PAUSE;
    int32_t VK_CAPS_LOCK;
    int32_t VK_ESCAPE;
    int32_t VK_SPACE;
    int32_t VK_PAGE_UP;
    int32_t VK_PAGE_DOWN;
    int32_t VK_END;
    int32_t VK_HOME;
    int32_t VK_LEFT;
    int32_t VK_UP;
    int32_t VK_RIGHT;
    int32_t VK_DOWN;
    int32_t VK_COMMA;
    int32_t VK_MINUS;
    int32_t VK_PERIOD;
    int32_t VK_SLASH;
    int32_t VK_0;
    int32_t VK_1;
    int32_t VK_2;
    int32_t VK_3;
    int32_t VK_4;
    int32_t VK_5;
    int32_t VK_6;
    int32_t VK_7;
    int32_t VK_8;
    int32_t VK_9;
    int32_t VK_SEMICOLON;
    int32_t VK_EQUALS;
    int32_t VK_A;
    int32_t VK_B;
    int32_t VK_C;
    int32_t VK_D;
    int32_t VK_E;
    int32_t VK_F;
    int32_t VK_G;
    int32_t VK_H;
    int32_t VK_I;
    int32_t VK_J;
    int32_t VK_K;
    int32_t VK_L;
    int32_t VK_M;
    int32_t VK_N;
    int32_t VK_O;
    int32_t VK_P;
    int32_t VK_Q;
    int32_t VK_R;
    int32_t VK_S;
    int32_t VK_T;
    int32_t VK_U;
    int32_t VK_V;
    int32_t VK_W;
    int32_t VK_X;
    int32_t VK_Y;
    int32_t VK_Z;
    int32_t VK_OPEN_BRACKET;
    int32_t VK_BACK_SLASH;
    int32_t VK_CLOSE_BRACKET;
    int32_t VK_NUMPAD0;
    int32_t VK_NUMPAD1;
    int32_t VK_NUMPAD2;
    int32_t VK_NUMPAD3;
    int32_t VK_NUMPAD4;
    int32_t VK_NUMPAD5;
    int32_t VK_NUMPAD6;
    int32_t VK_NUMPAD7;
    int32_t VK_NUMPAD8;
    int32_t VK_NUMPAD9;
    int32_t VK_MULTIPLY;
    int32_t VK_ADD;
    int32_t VK_SEPARATER;
    int32_t VK_SEPARATOR;
    int32_t VK_SUBTRACT;
    int32_t VK_DECIMAL;
    int32_t VK_DIVIDE;
    int32_t VK_DELETE;
    int32_t VK_NUM_LOCK;
    int32_t VK_SCROLL_LOCK;
    int32_t VK_F1;
    int32_t VK_F2;
    int32_t VK_F3;
    int32_t VK_F4;
    int32_t VK_F5;
    int32_t VK_F6;
    int32_t VK_F7;
    int32_t VK_F8;
    int32_t VK_F9;
    int32_t VK_F10;
    int32_t VK_F11;
    int32_t VK_F12;
    int32_t VK_F13;
    int32_t VK_F14;
    int32_t VK_F15;
    int32_t VK_F16;
    int32_t VK_F17;
    int32_t VK_F18;
    int32_t VK_F19;
    int32_t VK_F20;
    int32_t VK_F21;
    int32_t VK_F22;
    int32_t VK_F23;
    int32_t VK_F24;
    int32_t VK_PRINTSCREEN;
    int32_t VK_INSERT;
    int32_t VK_HELP;
    int32_t VK_META;
    int32_t VK_BACK_QUOTE;
    int32_t VK_QUOTE;
    int32_t VK_KP_UP;
    int32_t VK_KP_DOWN;
    int32_t VK_KP_LEFT;
    int32_t VK_KP_RIGHT;
    int32_t VK_DEAD_GRAVE;
    int32_t VK_DEAD_ACUTE;
    int32_t VK_DEAD_CIRCUMFLEX;
    int32_t VK_DEAD_TILDE;
    int32_t VK_DEAD_MACRON;
    int32_t VK_DEAD_BREVE;
    int32_t VK_DEAD_ABOVEDOT;
    int32_t VK_DEAD_DIAERESIS;
    int32_t VK_DEAD_ABOVERING;
    int32_t VK_DEAD_DOUBLEACUTE;
    int32_t VK_DEAD_CARON;
    int32_t VK_DEAD_CEDILLA;
    int32_t VK_DEAD_OGONEK;
    int32_t VK_DEAD_IOTA;
    int32_t VK_DEAD_VOICED_SOUND;
    int32_t VK_DEAD_SEMIVOICED_SOUND;
    int32_t VK_AMPERSAND;
    int32_t VK_ASTERISK;
    int32_t VK_QUOTEDBL;
    int32_t VK_LESS;
    int32_t VK_GREATER;
    int32_t VK_BRACELEFT;
    int32_t VK_BRACERIGHT;
    int32_t VK_AT;
    int32_t VK_COLON;
    int32_t VK_CIRCUMFLEX;
    int32_t VK_DOLLAR;
    int32_t VK_EURO_SIGN;
    int32_t VK_EXCLAMATION_MARK;
    int32_t VK_INVERTED_EXCLAMATION_MARK;
    int32_t VK_LEFT_PARENTHESIS;
    int32_t VK_NUMBER_SIGN;
    int32_t VK_PLUS;
    int32_t VK_RIGHT_PARENTHESIS;
    int32_t VK_UNDERSCORE;
    int32_t VK_WINDOWS;
    int32_t VK_CONTEXT_MENU;
    int32_t VK_FINAL;
    int32_t VK_CONVERT;
    int32_t VK_NONCONVERT;
    int32_t VK_ACCEPT;
    int32_t VK_MODECHANGE;
    int32_t VK_KANA;
    int32_t VK_KANJI;
    int32_t VK_ALPHANUMERIC;
    int32_t VK_KATAKANA;
    int32_t VK_HIRAGANA;
    int32_t VK_FULL_WIDTH;
    int32_t VK_HALF_WIDTH;
    int32_t VK_ROMAN_CHARACTERS;
    int32_t VK_ALL_CANDIDATES;
    int32_t VK_PREVIOUS_CANDIDATE;
    int32_t VK_CODE_INPUT;
    int32_t VK_JAPANESE_KATAKANA;
    int32_t VK_JAPANESE_HIRAGANA;
    int32_t VK_JAPANESE_ROMAN;
    int32_t VK_KANA_LOCK;
    int32_t VK_INPUT_METHOD_ON_OFF;
    int32_t VK_CUT;
    int32_t VK_COPY;
    int32_t VK_PASTE;
    int32_t VK_UNDO;
    int32_t VK_AGAIN;
    int32_t VK_FIND;
    int32_t VK_PROPS;
    int32_t VK_STOP;
    int32_t VK_COMPOSE;
    int32_t VK_ALT_GRAPH;
    int32_t VK_BEGIN;
    int32_t VK_UNDEFINED;
};

static ABKeyEventWrapper* ABKeyEventWrapper_instance;

ABKeyEventWrapper* ABKeyEventWrapper_new(void);
ABKeyEventWrapper* ABKeyEventWrapper_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ABKeyEventWrapper_staticInit(void) {
    ABKeyEventWrapper_instance = ABKeyEventWrapper_new();
}

static void ABKeyEventWrapper_initFields(ABKeyEventWrapper* this) {
    this->VK_ENTER = KeyEvent_VK_ENTER;
    this->VK_BACK_SPACE = KeyEvent_VK_BACK_SPACE;
    this->VK_TAB = KeyEvent_VK_TAB;
    this->VK_CANCEL = KeyEvent_VK_CANCEL;
    this->VK_CLEAR = KeyEvent_VK_CLEAR;
    this->VK_SHIFT = KeyEvent_VK_SHIFT;
    this->VK_CONTROL = KeyEvent_VK_CONTROL;
    this->VK_ALT = KeyEvent_VK_ALT;
    this->VK_PAUSE = KeyEvent_VK_PAUSE;
    this->VK_CAPS_LOCK = KeyEvent_VK_CAPS_LOCK;
    this->VK_ESCAPE = KeyEvent_VK_ESCAPE;
    this->VK_SPACE = KeyEvent_VK_SPACE;
    this->VK_PAGE_UP = KeyEvent_VK_PAGE_UP;
    this->VK_PAGE_DOWN = KeyEvent_VK_PAGE_DOWN;
    this->VK_END = KeyEvent_VK_END;
    this->VK_HOME = KeyEvent_VK_HOME;
    this->VK_LEFT = KeyEvent_VK_LEFT;
    this->VK_UP = KeyEvent_VK_UP;
    this->VK_RIGHT = KeyEvent_VK_RIGHT;
    this->VK_DOWN = KeyEvent_VK_DOWN;
    this->VK_COMMA = KeyEvent_VK_COMMA;
    this->VK_MINUS = KeyEvent_VK_MINUS;
    this->VK_PERIOD = KeyEvent_VK_PERIOD;
    this->VK_SLASH = KeyEvent_VK_SLASH;
    this->VK_0 = KeyEvent_VK_0;
    this->VK_1 = KeyEvent_VK_1;
    this->VK_2 = KeyEvent_VK_2;
    this->VK_3 = KeyEvent_VK_3;
    this->VK_4 = KeyEvent_VK_4;
    this->VK_5 = KeyEvent_VK_5;
    this->VK_6 = KeyEvent_VK_6;
    this->VK_7 = KeyEvent_VK_7;
    this->VK_8 = KeyEvent_VK_8;
    this->VK_9 = KeyEvent_VK_9;
    this->VK_SEMICOLON = KeyEvent_VK_SEMICOLON;
    this->VK_EQUALS = KeyEvent_VK_EQUALS;
    this->VK_A = KeyEvent_VK_A;
    this->VK_B = KeyEvent_VK_B;
    this->VK_C = KeyEvent_VK_C;
    this->VK_D = KeyEvent_VK_D;
    this->VK_E = KeyEvent_VK_E;
    this->VK_F = KeyEvent_VK_F;
    this->VK_G = KeyEvent_VK_G;
    this->VK_H = KeyEvent_VK_H;
    this->VK_I = KeyEvent_VK_I;
    this->VK_J = KeyEvent_VK_J;
    this->VK_K = KeyEvent_VK_K;
    this->VK_L = KeyEvent_VK_L;
    this->VK_M = KeyEvent_VK_M;
    this->VK_N = KeyEvent_VK_N;
    this->VK_O = KeyEvent_VK_O;
    this->VK_P = KeyEvent_VK_P;
    this->VK_Q = KeyEvent_VK_Q;
    this->VK_R = KeyEvent_VK_R;
    this->VK_S = KeyEvent_VK_S;
    this->VK_T = KeyEvent_VK_T;
    this->VK_U = KeyEvent_VK_U;
    this->VK_V = KeyEvent_VK_V;
    this->VK_W = KeyEvent_VK_W;
    this->VK_X = KeyEvent_VK_X;
    this->VK_Y = KeyEvent_VK_Y;
    this->VK_Z = KeyEvent_VK_Z;
    this->VK_OPEN_BRACKET = KeyEvent_VK_OPEN_BRACKET;
    this->VK_BACK_SLASH = KeyEvent_VK_BACK_SLASH;
    this->VK_CLOSE_BRACKET = KeyEvent_VK_CLOSE_BRACKET;
    this->VK_NUMPAD0 = KeyEvent_VK_NUMPAD0;
    this->VK_NUMPAD1 = KeyEvent_VK_NUMPAD1;
    this->VK_NUMPAD2 = KeyEvent_VK_NUMPAD2;
    this->VK_NUMPAD3 = KeyEvent_VK_NUMPAD3;
    this->VK_NUMPAD4 = KeyEvent_VK_NUMPAD4;
    this->VK_NUMPAD5 = KeyEvent_VK_NUMPAD5;
    this->VK_NUMPAD6 = KeyEvent_VK_NUMPAD6;
    this->VK_NUMPAD7 = KeyEvent_VK_NUMPAD7;
    this->VK_NUMPAD8 = KeyEvent_VK_NUMPAD8;
    this->VK_NUMPAD9 = KeyEvent_VK_NUMPAD9;
    this->VK_MULTIPLY = KeyEvent_VK_MULTIPLY;
    this->VK_ADD = KeyEvent_VK_ADD;
    this->VK_SEPARATER = KeyEvent_VK_SEPARATER;
    this->VK_SEPARATOR = KeyEvent_VK_SEPARATOR;
    this->VK_SUBTRACT = KeyEvent_VK_SUBTRACT;
    this->VK_DECIMAL = KeyEvent_VK_DECIMAL;
    this->VK_DIVIDE = KeyEvent_VK_DIVIDE;
    this->VK_DELETE = KeyEvent_VK_DELETE;
    this->VK_NUM_LOCK = KeyEvent_VK_NUM_LOCK;
    this->VK_SCROLL_LOCK = KeyEvent_VK_SCROLL_LOCK;
    this->VK_F1 = KeyEvent_VK_F1;
    this->VK_F2 = KeyEvent_VK_F2;
    this->VK_F3 = KeyEvent_VK_F3;
    this->VK_F4 = KeyEvent_VK_F4;
    this->VK_F5 = KeyEvent_VK_F5;
    this->VK_F6 = KeyEvent_VK_F6;
    this->VK_F7 = KeyEvent_VK_F7;
    this->VK_F8 = KeyEvent_VK_F8;
    this->VK_F9 = KeyEvent_VK_F9;
    this->VK_F10 = KeyEvent_VK_F10;
    this->VK_F11 = KeyEvent_VK_F11;
    this->VK_F12 = KeyEvent_VK_F12;
    this->VK_F13 = KeyEvent_VK_F13;
    this->VK_F14 = KeyEvent_VK_F14;
    this->VK_F15 = KeyEvent_VK_F15;
    this->VK_F16 = KeyEvent_VK_F16;
    this->VK_F17 = KeyEvent_VK_F17;
    this->VK_F18 = KeyEvent_VK_F18;
    this->VK_F19 = KeyEvent_VK_F19;
    this->VK_F20 = KeyEvent_VK_F20;
    this->VK_F21 = KeyEvent_VK_F21;
    this->VK_F22 = KeyEvent_VK_F22;
    this->VK_F23 = KeyEvent_VK_F23;
    this->VK_F24 = KeyEvent_VK_F24;
    this->VK_PRINTSCREEN = KeyEvent_VK_PRINTSCREEN;
    this->VK_INSERT = KeyEvent_VK_INSERT;
    this->VK_HELP = KeyEvent_VK_HELP;
    this->VK_META = KeyEvent_VK_META;
    this->VK_BACK_QUOTE = KeyEvent_VK_BACK_QUOTE;
    this->VK_QUOTE = KeyEvent_VK_QUOTE;
    this->VK_KP_UP = KeyEvent_VK_KP_UP;
    this->VK_KP_DOWN = KeyEvent_VK_KP_DOWN;
    this->VK_KP_LEFT = KeyEvent_VK_KP_LEFT;
    this->VK_KP_RIGHT = KeyEvent_VK_KP_RIGHT;
    this->VK_DEAD_GRAVE = KeyEvent_VK_DEAD_GRAVE;
    this->VK_DEAD_ACUTE = KeyEvent_VK_DEAD_ACUTE;
    this->VK_DEAD_CIRCUMFLEX = KeyEvent_VK_DEAD_CIRCUMFLEX;
    this->VK_DEAD_TILDE = KeyEvent_VK_DEAD_TILDE;
    this->VK_DEAD_MACRON = KeyEvent_VK_DEAD_MACRON;
    this->VK_DEAD_BREVE = KeyEvent_VK_DEAD_BREVE;
    this->VK_DEAD_ABOVEDOT = KeyEvent_VK_DEAD_ABOVEDOT;
    this->VK_DEAD_DIAERESIS = KeyEvent_VK_DEAD_DIAERESIS;
    this->VK_DEAD_ABOVERING = KeyEvent_VK_DEAD_ABOVERING;
    this->VK_DEAD_DOUBLEACUTE = KeyEvent_VK_DEAD_DOUBLEACUTE;
    this->VK_DEAD_CARON = KeyEvent_VK_DEAD_CARON;
    this->VK_DEAD_CEDILLA = KeyEvent_VK_DEAD_CEDILLA;
    this->VK_DEAD_OGONEK = KeyEvent_VK_DEAD_OGONEK;
    this->VK_DEAD_IOTA = KeyEvent_VK_DEAD_IOTA;
    this->VK_DEAD_VOICED_SOUND = KeyEvent_VK_DEAD_VOICED_SOUND;
    this->VK_DEAD_SEMIVOICED_SOUND = KeyEvent_VK_DEAD_SEMIVOICED_SOUND;
    this->VK_AMPERSAND = KeyEvent_VK_AMPERSAND;
    this->VK_ASTERISK = KeyEvent_VK_ASTERISK;
    this->VK_QUOTEDBL = KeyEvent_VK_QUOTEDBL;
    this->VK_LESS = KeyEvent_VK_LESS;
    this->VK_GREATER = KeyEvent_VK_GREATER;
    this->VK_BRACELEFT = KeyEvent_VK_BRACELEFT;
    this->VK_BRACERIGHT = KeyEvent_VK_BRACERIGHT;
    this->VK_AT = KeyEvent_VK_AT;
    this->VK_COLON = KeyEvent_VK_COLON;
    this->VK_CIRCUMFLEX = KeyEvent_VK_CIRCUMFLEX;
    this->VK_DOLLAR = KeyEvent_VK_DOLLAR;
    this->VK_EURO_SIGN = KeyEvent_VK_EURO_SIGN;
    this->VK_EXCLAMATION_MARK = KeyEvent_VK_EXCLAMATION_MARK;
    this->VK_INVERTED_EXCLAMATION_MARK = KeyEvent_VK_INVERTED_EXCLAMATION_MARK;
    this->VK_LEFT_PARENTHESIS = KeyEvent_VK_LEFT_PARENTHESIS;
    this->VK_NUMBER_SIGN = KeyEvent_VK_NUMBER_SIGN;
    this->VK_PLUS = KeyEvent_VK_PLUS;
    this->VK_RIGHT_PARENTHESIS = KeyEvent_VK_RIGHT_PARENTHESIS;
    this->VK_UNDERSCORE = KeyEvent_VK_UNDERSCORE;
    this->VK_WINDOWS = KeyEvent_VK_WINDOWS;
    this->VK_CONTEXT_MENU = KeyEvent_VK_CONTEXT_MENU;
    this->VK_FINAL = KeyEvent_VK_FINAL;
    this->VK_CONVERT = KeyEvent_VK_CONVERT;
    this->VK_NONCONVERT = KeyEvent_VK_NONCONVERT;
    this->VK_ACCEPT = KeyEvent_VK_ACCEPT;
    this->VK_MODECHANGE = KeyEvent_VK_MODECHANGE;
    this->VK_KANA = KeyEvent_VK_KANA;
    this->VK_KANJI = KeyEvent_VK_KANJI;
    this->VK_ALPHANUMERIC = KeyEvent_VK_ALPHANUMERIC;
    this->VK_KATAKANA = KeyEvent_VK_KATAKANA;
    this->VK_HIRAGANA = KeyEvent_VK_HIRAGANA;
    this->VK_FULL_WIDTH = KeyEvent_VK_FULL_WIDTH;
    this->VK_HALF_WIDTH = KeyEvent_VK_HALF_WIDTH;
    this->VK_ROMAN_CHARACTERS = KeyEvent_VK_ROMAN_CHARACTERS;
    this->VK_ALL_CANDIDATES = KeyEvent_VK_ALL_CANDIDATES;
    this->VK_PREVIOUS_CANDIDATE = KeyEvent_VK_PREVIOUS_CANDIDATE;
    this->VK_CODE_INPUT = KeyEvent_VK_CODE_INPUT;
    this->VK_JAPANESE_KATAKANA = KeyEvent_VK_JAPANESE_KATAKANA;
    this->VK_JAPANESE_HIRAGANA = KeyEvent_VK_JAPANESE_HIRAGANA;
    this->VK_JAPANESE_ROMAN = KeyEvent_VK_JAPANESE_ROMAN;
    this->VK_KANA_LOCK = KeyEvent_VK_KANA_LOCK;
    this->VK_INPUT_METHOD_ON_OFF = KeyEvent_VK_INPUT_METHOD_ON_OFF;
    this->VK_CUT = KeyEvent_VK_CUT;
    this->VK_COPY = KeyEvent_VK_COPY;
    this->VK_PASTE = KeyEvent_VK_PASTE;
    this->VK_UNDO = KeyEvent_VK_UNDO;
    this->VK_AGAIN = KeyEvent_VK_AGAIN;
    this->VK_FIND = KeyEvent_VK_FIND;
    this->VK_PROPS = KeyEvent_VK_PROPS;
    this->VK_STOP = KeyEvent_VK_STOP;
    this->VK_COMPOSE = KeyEvent_VK_COMPOSE;
    this->VK_ALT_GRAPH = KeyEvent_VK_ALT_GRAPH;
    this->VK_BEGIN = KeyEvent_VK_BEGIN;
    this->VK_UNDEFINED = KeyEvent_VK_UNDEFINED;
}

void ABKeyEventWrapper_init(ABKeyEventWrapper* this) {
    ABKeyEventWrapper_initFields(this);
}

ABKeyEventWrapper* ABKeyEventWrapper_new(void) {
    ABKeyEventWrapper* this = calloc(1, sizeof(ABKeyEventWrapper));
    ABKeyEventWrapper_init(this);
    return this;
}


ABKeyEventWrapper* ABKeyEventWrapper_getInstance(void) {
        return ABKeyEventWrapper_instance;
}

