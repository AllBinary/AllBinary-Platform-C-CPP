
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABKeyEventWrapper
            : public Object
         {

    private: static ABKeyEventWrapper* instance() { static std::unique_ptr<ABKeyEventWrapper> value(new ABKeyEventWrapper()); return value.get(); }

    public: static ABKeyEventWrapper* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABKeyEventWrapper::instance();
    
}


    public: const int32_t VK_ENTER = KeyEvent::VK_ENTER;

    public: const int32_t VK_BACK_SPACE = KeyEvent::VK_BACK_SPACE;

    public: const int32_t VK_TAB = KeyEvent::VK_TAB;

    public: const int32_t VK_CANCEL = KeyEvent::VK_CANCEL;

    public: const int32_t VK_CLEAR = KeyEvent::VK_CLEAR;

    public: const int32_t VK_SHIFT = KeyEvent::VK_SHIFT;

    public: const int32_t VK_CONTROL = KeyEvent::VK_CONTROL;

    public: const int32_t VK_ALT = KeyEvent::VK_ALT;

    public: const int32_t VK_PAUSE = KeyEvent::VK_PAUSE;

    public: const int32_t VK_CAPS_LOCK = KeyEvent::VK_CAPS_LOCK;

    public: const int32_t VK_ESCAPE = KeyEvent::VK_ESCAPE;

    public: const int32_t VK_SPACE = KeyEvent::VK_SPACE;

    public: const int32_t VK_PAGE_UP = KeyEvent::VK_PAGE_UP;

    public: const int32_t VK_PAGE_DOWN = KeyEvent::VK_PAGE_DOWN;

    public: const int32_t VK_END = KeyEvent::VK_END;

    public: const int32_t VK_HOME = KeyEvent::VK_HOME;

    public: const int32_t VK_LEFT = KeyEvent::VK_LEFT;

    public: const int32_t VK_UP = KeyEvent::VK_UP;

    public: const int32_t VK_RIGHT = KeyEvent::VK_RIGHT;

    public: const int32_t VK_DOWN = KeyEvent::VK_DOWN;

    public: const int32_t VK_COMMA = KeyEvent::VK_COMMA;

    public: const int32_t VK_MINUS = KeyEvent::VK_MINUS;

    public: const int32_t VK_PERIOD = KeyEvent::VK_PERIOD;

    public: const int32_t VK_SLASH = KeyEvent::VK_SLASH;

    public: const int32_t VK_0 = KeyEvent::VK_0;

    public: const int32_t VK_1 = KeyEvent::VK_1;

    public: const int32_t VK_2 = KeyEvent::VK_2;

    public: const int32_t VK_3 = KeyEvent::VK_3;

    public: const int32_t VK_4 = KeyEvent::VK_4;

    public: const int32_t VK_5 = KeyEvent::VK_5;

    public: const int32_t VK_6 = KeyEvent::VK_6;

    public: const int32_t VK_7 = KeyEvent::VK_7;

    public: const int32_t VK_8 = KeyEvent::VK_8;

    public: const int32_t VK_9 = KeyEvent::VK_9;

    public: const int32_t VK_SEMICOLON = KeyEvent::VK_SEMICOLON;

    public: const int32_t VK_EQUALS = KeyEvent::VK_EQUALS;

    public: const int32_t VK_A = KeyEvent::VK_A;

    public: const int32_t VK_B = KeyEvent::VK_B;

    public: const int32_t VK_C = KeyEvent::VK_C;

    public: const int32_t VK_D = KeyEvent::VK_D;

    public: const int32_t VK_E = KeyEvent::VK_E;

    public: const int32_t VK_F = KeyEvent::VK_F;

    public: const int32_t VK_G = KeyEvent::VK_G;

    public: const int32_t VK_H = KeyEvent::VK_H;

    public: const int32_t VK_I = KeyEvent::VK_I;

    public: const int32_t VK_J = KeyEvent::VK_J;

    public: const int32_t VK_K = KeyEvent::VK_K;

    public: const int32_t VK_L = KeyEvent::VK_L;

    public: const int32_t VK_M = KeyEvent::VK_M;

    public: const int32_t VK_N = KeyEvent::VK_N;

    public: const int32_t VK_O = KeyEvent::VK_O;

    public: const int32_t VK_P = KeyEvent::VK_P;

    public: const int32_t VK_Q = KeyEvent::VK_Q;

    public: const int32_t VK_R = KeyEvent::VK_R;

    public: const int32_t VK_S = KeyEvent::VK_S;

    public: const int32_t VK_T = KeyEvent::VK_T;

    public: const int32_t VK_U = KeyEvent::VK_U;

    public: const int32_t VK_V = KeyEvent::VK_V;

    public: const int32_t VK_W = KeyEvent::VK_W;

    public: const int32_t VK_X = KeyEvent::VK_X;

    public: const int32_t VK_Y = KeyEvent::VK_Y;

    public: const int32_t VK_Z = KeyEvent::VK_Z;

    public: const int32_t VK_OPEN_BRACKET = KeyEvent::VK_OPEN_BRACKET;

    public: const int32_t VK_BACK_SLASH = KeyEvent::VK_BACK_SLASH;

    public: const int32_t VK_CLOSE_BRACKET = KeyEvent::VK_CLOSE_BRACKET;

    public: const int32_t VK_NUMPAD0 = KeyEvent::VK_NUMPAD0;

    public: const int32_t VK_NUMPAD1 = KeyEvent::VK_NUMPAD1;

    public: const int32_t VK_NUMPAD2 = KeyEvent::VK_NUMPAD2;

    public: const int32_t VK_NUMPAD3 = KeyEvent::VK_NUMPAD3;

    public: const int32_t VK_NUMPAD4 = KeyEvent::VK_NUMPAD4;

    public: const int32_t VK_NUMPAD5 = KeyEvent::VK_NUMPAD5;

    public: const int32_t VK_NUMPAD6 = KeyEvent::VK_NUMPAD6;

    public: const int32_t VK_NUMPAD7 = KeyEvent::VK_NUMPAD7;

    public: const int32_t VK_NUMPAD8 = KeyEvent::VK_NUMPAD8;

    public: const int32_t VK_NUMPAD9 = KeyEvent::VK_NUMPAD9;

    public: const int32_t VK_MULTIPLY = KeyEvent::VK_MULTIPLY;

    public: const int32_t VK_ADD = KeyEvent::VK_ADD;

    public: const int32_t VK_SEPARATER = KeyEvent::VK_SEPARATER;

    public: const int32_t VK_SEPARATOR = KeyEvent::VK_SEPARATOR;

    public: const int32_t VK_SUBTRACT = KeyEvent::VK_SUBTRACT;

    public: const int32_t VK_DECIMAL = KeyEvent::VK_DECIMAL;

    public: const int32_t VK_DIVIDE = KeyEvent::VK_DIVIDE;

    public: const int32_t VK_DELETE = KeyEvent::VK_DELETE;

    public: const int32_t VK_NUM_LOCK = KeyEvent::VK_NUM_LOCK;

    public: const int32_t VK_SCROLL_LOCK = KeyEvent::VK_SCROLL_LOCK;

    public: const int32_t VK_F1 = KeyEvent::VK_F1;

    public: const int32_t VK_F2 = KeyEvent::VK_F2;

    public: const int32_t VK_F3 = KeyEvent::VK_F3;

    public: const int32_t VK_F4 = KeyEvent::VK_F4;

    public: const int32_t VK_F5 = KeyEvent::VK_F5;

    public: const int32_t VK_F6 = KeyEvent::VK_F6;

    public: const int32_t VK_F7 = KeyEvent::VK_F7;

    public: const int32_t VK_F8 = KeyEvent::VK_F8;

    public: const int32_t VK_F9 = KeyEvent::VK_F9;

    public: const int32_t VK_F10 = KeyEvent::VK_F10;

    public: const int32_t VK_F11 = KeyEvent::VK_F11;

    public: const int32_t VK_F12 = KeyEvent::VK_F12;

    public: const int32_t VK_F13 = KeyEvent::VK_F13;

    public: const int32_t VK_F14 = KeyEvent::VK_F14;

    public: const int32_t VK_F15 = KeyEvent::VK_F15;

    public: const int32_t VK_F16 = KeyEvent::VK_F16;

    public: const int32_t VK_F17 = KeyEvent::VK_F17;

    public: const int32_t VK_F18 = KeyEvent::VK_F18;

    public: const int32_t VK_F19 = KeyEvent::VK_F19;

    public: const int32_t VK_F20 = KeyEvent::VK_F20;

    public: const int32_t VK_F21 = KeyEvent::VK_F21;

    public: const int32_t VK_F22 = KeyEvent::VK_F22;

    public: const int32_t VK_F23 = KeyEvent::VK_F23;

    public: const int32_t VK_F24 = KeyEvent::VK_F24;

    public: const int32_t VK_PRINTSCREEN = KeyEvent::VK_PRINTSCREEN;

    public: const int32_t VK_INSERT = KeyEvent::VK_INSERT;

    public: const int32_t VK_HELP = KeyEvent::VK_HELP;

    public: const int32_t VK_META = KeyEvent::VK_META;

    public: const int32_t VK_BACK_QUOTE = KeyEvent::VK_BACK_QUOTE;

    public: const int32_t VK_QUOTE = KeyEvent::VK_QUOTE;

    public: const int32_t VK_KP_UP = KeyEvent::VK_KP_UP;

    public: const int32_t VK_KP_DOWN = KeyEvent::VK_KP_DOWN;

    public: const int32_t VK_KP_LEFT = KeyEvent::VK_KP_LEFT;

    public: const int32_t VK_KP_RIGHT = KeyEvent::VK_KP_RIGHT;

    public: const int32_t VK_DEAD_GRAVE = KeyEvent::VK_DEAD_GRAVE;

    public: const int32_t VK_DEAD_ACUTE = KeyEvent::VK_DEAD_ACUTE;

    public: const int32_t VK_DEAD_CIRCUMFLEX = KeyEvent::VK_DEAD_CIRCUMFLEX;

    public: const int32_t VK_DEAD_TILDE = KeyEvent::VK_DEAD_TILDE;

    public: const int32_t VK_DEAD_MACRON = KeyEvent::VK_DEAD_MACRON;

    public: const int32_t VK_DEAD_BREVE = KeyEvent::VK_DEAD_BREVE;

    public: const int32_t VK_DEAD_ABOVEDOT = KeyEvent::VK_DEAD_ABOVEDOT;

    public: const int32_t VK_DEAD_DIAERESIS = KeyEvent::VK_DEAD_DIAERESIS;

    public: const int32_t VK_DEAD_ABOVERING = KeyEvent::VK_DEAD_ABOVERING;

    public: const int32_t VK_DEAD_DOUBLEACUTE = KeyEvent::VK_DEAD_DOUBLEACUTE;

    public: const int32_t VK_DEAD_CARON = KeyEvent::VK_DEAD_CARON;

    public: const int32_t VK_DEAD_CEDILLA = KeyEvent::VK_DEAD_CEDILLA;

    public: const int32_t VK_DEAD_OGONEK = KeyEvent::VK_DEAD_OGONEK;

    public: const int32_t VK_DEAD_IOTA = KeyEvent::VK_DEAD_IOTA;

    public: const int32_t VK_DEAD_VOICED_SOUND = KeyEvent::VK_DEAD_VOICED_SOUND;

    public: const int32_t VK_DEAD_SEMIVOICED_SOUND = KeyEvent::VK_DEAD_SEMIVOICED_SOUND;

    public: const int32_t VK_AMPERSAND = KeyEvent::VK_AMPERSAND;

    public: const int32_t VK_ASTERISK = KeyEvent::VK_ASTERISK;

    public: const int32_t VK_QUOTEDBL = KeyEvent::VK_QUOTEDBL;

    public: const int32_t VK_LESS = KeyEvent::VK_LESS;

    public: const int32_t VK_GREATER = KeyEvent::VK_GREATER;

    public: const int32_t VK_BRACELEFT = KeyEvent::VK_BRACELEFT;

    public: const int32_t VK_BRACERIGHT = KeyEvent::VK_BRACERIGHT;

    public: const int32_t VK_AT = KeyEvent::VK_AT;

    public: const int32_t VK_COLON = KeyEvent::VK_COLON;

    public: const int32_t VK_CIRCUMFLEX = KeyEvent::VK_CIRCUMFLEX;

    public: const int32_t VK_DOLLAR = KeyEvent::VK_DOLLAR;

    public: const int32_t VK_EURO_SIGN = KeyEvent::VK_EURO_SIGN;

    public: const int32_t VK_EXCLAMATION_MARK = KeyEvent::VK_EXCLAMATION_MARK;

    public: const int32_t VK_INVERTED_EXCLAMATION_MARK = KeyEvent::VK_INVERTED_EXCLAMATION_MARK;

    public: const int32_t VK_LEFT_PARENTHESIS = KeyEvent::VK_LEFT_PARENTHESIS;

    public: const int32_t VK_NUMBER_SIGN = KeyEvent::VK_NUMBER_SIGN;

    public: const int32_t VK_PLUS = KeyEvent::VK_PLUS;

    public: const int32_t VK_RIGHT_PARENTHESIS = KeyEvent::VK_RIGHT_PARENTHESIS;

    public: const int32_t VK_UNDERSCORE = KeyEvent::VK_UNDERSCORE;

    public: const int32_t VK_WINDOWS = KeyEvent::VK_WINDOWS;

    public: const int32_t VK_CONTEXT_MENU = KeyEvent::VK_CONTEXT_MENU;

    public: const int32_t VK_FINAL = KeyEvent::VK_FINAL;

    public: const int32_t VK_CONVERT = KeyEvent::VK_CONVERT;

    public: const int32_t VK_NONCONVERT = KeyEvent::VK_NONCONVERT;

    public: const int32_t VK_ACCEPT = KeyEvent::VK_ACCEPT;

    public: const int32_t VK_MODECHANGE = KeyEvent::VK_MODECHANGE;

    public: const int32_t VK_KANA = KeyEvent::VK_KANA;

    public: const int32_t VK_KANJI = KeyEvent::VK_KANJI;

    public: const int32_t VK_ALPHANUMERIC = KeyEvent::VK_ALPHANUMERIC;

    public: const int32_t VK_KATAKANA = KeyEvent::VK_KATAKANA;

    public: const int32_t VK_HIRAGANA = KeyEvent::VK_HIRAGANA;

    public: const int32_t VK_FULL_WIDTH = KeyEvent::VK_FULL_WIDTH;

    public: const int32_t VK_HALF_WIDTH = KeyEvent::VK_HALF_WIDTH;

    public: const int32_t VK_ROMAN_CHARACTERS = KeyEvent::VK_ROMAN_CHARACTERS;

    public: const int32_t VK_ALL_CANDIDATES = KeyEvent::VK_ALL_CANDIDATES;

    public: const int32_t VK_PREVIOUS_CANDIDATE = KeyEvent::VK_PREVIOUS_CANDIDATE;

    public: const int32_t VK_CODE_INPUT = KeyEvent::VK_CODE_INPUT;

    public: const int32_t VK_JAPANESE_KATAKANA = KeyEvent::VK_JAPANESE_KATAKANA;

    public: const int32_t VK_JAPANESE_HIRAGANA = KeyEvent::VK_JAPANESE_HIRAGANA;

    public: const int32_t VK_JAPANESE_ROMAN = KeyEvent::VK_JAPANESE_ROMAN;

    public: const int32_t VK_KANA_LOCK = KeyEvent::VK_KANA_LOCK;

    public: const int32_t VK_INPUT_METHOD_ON_OFF = KeyEvent::VK_INPUT_METHOD_ON_OFF;

    public: const int32_t VK_CUT = KeyEvent::VK_CUT;

    public: const int32_t VK_COPY = KeyEvent::VK_COPY;

    public: const int32_t VK_PASTE = KeyEvent::VK_PASTE;

    public: const int32_t VK_UNDO = KeyEvent::VK_UNDO;

    public: const int32_t VK_AGAIN = KeyEvent::VK_AGAIN;

    public: const int32_t VK_FIND = KeyEvent::VK_FIND;

    public: const int32_t VK_PROPS = KeyEvent::VK_PROPS;

    public: const int32_t VK_STOP = KeyEvent::VK_STOP;

    public: const int32_t VK_COMPOSE = KeyEvent::VK_COMPOSE;

    public: const int32_t VK_ALT_GRAPH = KeyEvent::VK_ALT_GRAPH;

    public: const int32_t VK_BEGIN = KeyEvent::VK_BEGIN;

    public: const int32_t VK_UNDEFINED = KeyEvent::VK_UNDEFINED;

};

            

