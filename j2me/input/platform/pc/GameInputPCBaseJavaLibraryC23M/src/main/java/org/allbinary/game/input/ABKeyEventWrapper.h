#ifndef ORG_ALLBINARY_GAME_INPUT_ABKEYEVENTWRAPPER_H
#define ORG_ALLBINARY_GAME_INPUT_ABKEYEVENTWRAPPER_H
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
#include "java/awt/event/KeyEvent.h"
// #include "jsinterop/annotations/JsType.h"

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


ABKeyEventWrapper* ABKeyEventWrapper_new(void);
void ABKeyEventWrapper_init(ABKeyEventWrapper* this);

ABKeyEventWrapper* ABKeyEventWrapper_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABKeyEventWrapper_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABKeyEventWrapper_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_ABKEYEVENTWRAPPER_H
