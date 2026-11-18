// Generated Code Do Not Modify
#include "org/allbinary/game/input/ABKeyEventWrapper.h"


static ABKeyEventWrapper* ABKeyEventWrapper_instance;


void ABKeyEventWrapper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABKeyEventWrapper_instance = ABKeyEventWrapper_new();
}

void ABKeyEventWrapper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABKeyEventWrapper", nullptr);
}

static void ABKeyEventWrapper_initFields(ABKeyEventWrapper* this) {
    this->VK_ENTER = (KeyEvent_staticInit(), KeyEvent_VK_ENTER);
    this->VK_BACK_SPACE = (KeyEvent_staticInit(), KeyEvent_VK_BACK_SPACE);
    this->VK_TAB = (KeyEvent_staticInit(), KeyEvent_VK_TAB);
    this->VK_CANCEL = (KeyEvent_staticInit(), KeyEvent_VK_CANCEL);
    this->VK_CLEAR = (KeyEvent_staticInit(), KeyEvent_VK_CLEAR);
    this->VK_SHIFT = (KeyEvent_staticInit(), KeyEvent_VK_SHIFT);
    this->VK_CONTROL = (KeyEvent_staticInit(), KeyEvent_VK_CONTROL);
    this->VK_ALT = (KeyEvent_staticInit(), KeyEvent_VK_ALT);
    this->VK_PAUSE = (KeyEvent_staticInit(), KeyEvent_VK_PAUSE);
    this->VK_CAPS_LOCK = (KeyEvent_staticInit(), KeyEvent_VK_CAPS_LOCK);
    this->VK_ESCAPE = (KeyEvent_staticInit(), KeyEvent_VK_ESCAPE);
    this->VK_SPACE = (KeyEvent_staticInit(), KeyEvent_VK_SPACE);
    this->VK_PAGE_UP = (KeyEvent_staticInit(), KeyEvent_VK_PAGE_UP);
    this->VK_PAGE_DOWN = (KeyEvent_staticInit(), KeyEvent_VK_PAGE_DOWN);
    this->VK_END = (KeyEvent_staticInit(), KeyEvent_VK_END);
    this->VK_HOME = (KeyEvent_staticInit(), KeyEvent_VK_HOME);
    this->VK_LEFT = (KeyEvent_staticInit(), KeyEvent_VK_LEFT);
    this->VK_UP = (KeyEvent_staticInit(), KeyEvent_VK_UP);
    this->VK_RIGHT = (KeyEvent_staticInit(), KeyEvent_VK_RIGHT);
    this->VK_DOWN = (KeyEvent_staticInit(), KeyEvent_VK_DOWN);
    this->VK_COMMA = (KeyEvent_staticInit(), KeyEvent_VK_COMMA);
    this->VK_MINUS = (KeyEvent_staticInit(), KeyEvent_VK_MINUS);
    this->VK_PERIOD = (KeyEvent_staticInit(), KeyEvent_VK_PERIOD);
    this->VK_SLASH = (KeyEvent_staticInit(), KeyEvent_VK_SLASH);
    this->VK_0 = (KeyEvent_staticInit(), KeyEvent_VK_0);
    this->VK_1 = (KeyEvent_staticInit(), KeyEvent_VK_1);
    this->VK_2 = (KeyEvent_staticInit(), KeyEvent_VK_2);
    this->VK_3 = (KeyEvent_staticInit(), KeyEvent_VK_3);
    this->VK_4 = (KeyEvent_staticInit(), KeyEvent_VK_4);
    this->VK_5 = (KeyEvent_staticInit(), KeyEvent_VK_5);
    this->VK_6 = (KeyEvent_staticInit(), KeyEvent_VK_6);
    this->VK_7 = (KeyEvent_staticInit(), KeyEvent_VK_7);
    this->VK_8 = (KeyEvent_staticInit(), KeyEvent_VK_8);
    this->VK_9 = (KeyEvent_staticInit(), KeyEvent_VK_9);
    this->VK_SEMICOLON = (KeyEvent_staticInit(), KeyEvent_VK_SEMICOLON);
    this->VK_EQUALS = (KeyEvent_staticInit(), KeyEvent_VK_EQUALS);
    this->VK_A = (KeyEvent_staticInit(), KeyEvent_VK_A);
    this->VK_B = (KeyEvent_staticInit(), KeyEvent_VK_B);
    this->VK_C = (KeyEvent_staticInit(), KeyEvent_VK_C);
    this->VK_D = (KeyEvent_staticInit(), KeyEvent_VK_D);
    this->VK_E = (KeyEvent_staticInit(), KeyEvent_VK_E);
    this->VK_F = (KeyEvent_staticInit(), KeyEvent_VK_F);
    this->VK_G = (KeyEvent_staticInit(), KeyEvent_VK_G);
    this->VK_H = (KeyEvent_staticInit(), KeyEvent_VK_H);
    this->VK_I = (KeyEvent_staticInit(), KeyEvent_VK_I);
    this->VK_J = (KeyEvent_staticInit(), KeyEvent_VK_J);
    this->VK_K = (KeyEvent_staticInit(), KeyEvent_VK_K);
    this->VK_L = (KeyEvent_staticInit(), KeyEvent_VK_L);
    this->VK_M = (KeyEvent_staticInit(), KeyEvent_VK_M);
    this->VK_N = (KeyEvent_staticInit(), KeyEvent_VK_N);
    this->VK_O = (KeyEvent_staticInit(), KeyEvent_VK_O);
    this->VK_P = (KeyEvent_staticInit(), KeyEvent_VK_P);
    this->VK_Q = (KeyEvent_staticInit(), KeyEvent_VK_Q);
    this->VK_R = (KeyEvent_staticInit(), KeyEvent_VK_R);
    this->VK_S = (KeyEvent_staticInit(), KeyEvent_VK_S);
    this->VK_T = (KeyEvent_staticInit(), KeyEvent_VK_T);
    this->VK_U = (KeyEvent_staticInit(), KeyEvent_VK_U);
    this->VK_V = (KeyEvent_staticInit(), KeyEvent_VK_V);
    this->VK_W = (KeyEvent_staticInit(), KeyEvent_VK_W);
    this->VK_X = (KeyEvent_staticInit(), KeyEvent_VK_X);
    this->VK_Y = (KeyEvent_staticInit(), KeyEvent_VK_Y);
    this->VK_Z = (KeyEvent_staticInit(), KeyEvent_VK_Z);
    this->VK_OPEN_BRACKET = (KeyEvent_staticInit(), KeyEvent_VK_OPEN_BRACKET);
    this->VK_BACK_SLASH = (KeyEvent_staticInit(), KeyEvent_VK_BACK_SLASH);
    this->VK_CLOSE_BRACKET = (KeyEvent_staticInit(), KeyEvent_VK_CLOSE_BRACKET);
    this->VK_NUMPAD0 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD0);
    this->VK_NUMPAD1 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD1);
    this->VK_NUMPAD2 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD2);
    this->VK_NUMPAD3 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD3);
    this->VK_NUMPAD4 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD4);
    this->VK_NUMPAD5 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD5);
    this->VK_NUMPAD6 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD6);
    this->VK_NUMPAD7 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD7);
    this->VK_NUMPAD8 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD8);
    this->VK_NUMPAD9 = (KeyEvent_staticInit(), KeyEvent_VK_NUMPAD9);
    this->VK_MULTIPLY = (KeyEvent_staticInit(), KeyEvent_VK_MULTIPLY);
    this->VK_ADD = (KeyEvent_staticInit(), KeyEvent_VK_ADD);
    this->VK_SEPARATER = (KeyEvent_staticInit(), KeyEvent_VK_SEPARATER);
    this->VK_SEPARATOR = (KeyEvent_staticInit(), KeyEvent_VK_SEPARATOR);
    this->VK_SUBTRACT = (KeyEvent_staticInit(), KeyEvent_VK_SUBTRACT);
    this->VK_DECIMAL = (KeyEvent_staticInit(), KeyEvent_VK_DECIMAL);
    this->VK_DIVIDE = (KeyEvent_staticInit(), KeyEvent_VK_DIVIDE);
    this->VK_DELETE = (KeyEvent_staticInit(), KeyEvent_VK_DELETE);
    this->VK_NUM_LOCK = (KeyEvent_staticInit(), KeyEvent_VK_NUM_LOCK);
    this->VK_SCROLL_LOCK = (KeyEvent_staticInit(), KeyEvent_VK_SCROLL_LOCK);
    this->VK_F1 = (KeyEvent_staticInit(), KeyEvent_VK_F1);
    this->VK_F2 = (KeyEvent_staticInit(), KeyEvent_VK_F2);
    this->VK_F3 = (KeyEvent_staticInit(), KeyEvent_VK_F3);
    this->VK_F4 = (KeyEvent_staticInit(), KeyEvent_VK_F4);
    this->VK_F5 = (KeyEvent_staticInit(), KeyEvent_VK_F5);
    this->VK_F6 = (KeyEvent_staticInit(), KeyEvent_VK_F6);
    this->VK_F7 = (KeyEvent_staticInit(), KeyEvent_VK_F7);
    this->VK_F8 = (KeyEvent_staticInit(), KeyEvent_VK_F8);
    this->VK_F9 = (KeyEvent_staticInit(), KeyEvent_VK_F9);
    this->VK_F10 = (KeyEvent_staticInit(), KeyEvent_VK_F10);
    this->VK_F11 = (KeyEvent_staticInit(), KeyEvent_VK_F11);
    this->VK_F12 = (KeyEvent_staticInit(), KeyEvent_VK_F12);
    this->VK_F13 = (KeyEvent_staticInit(), KeyEvent_VK_F13);
    this->VK_F14 = (KeyEvent_staticInit(), KeyEvent_VK_F14);
    this->VK_F15 = (KeyEvent_staticInit(), KeyEvent_VK_F15);
    this->VK_F16 = (KeyEvent_staticInit(), KeyEvent_VK_F16);
    this->VK_F17 = (KeyEvent_staticInit(), KeyEvent_VK_F17);
    this->VK_F18 = (KeyEvent_staticInit(), KeyEvent_VK_F18);
    this->VK_F19 = (KeyEvent_staticInit(), KeyEvent_VK_F19);
    this->VK_F20 = (KeyEvent_staticInit(), KeyEvent_VK_F20);
    this->VK_F21 = (KeyEvent_staticInit(), KeyEvent_VK_F21);
    this->VK_F22 = (KeyEvent_staticInit(), KeyEvent_VK_F22);
    this->VK_F23 = (KeyEvent_staticInit(), KeyEvent_VK_F23);
    this->VK_F24 = (KeyEvent_staticInit(), KeyEvent_VK_F24);
    this->VK_PRINTSCREEN = (KeyEvent_staticInit(), KeyEvent_VK_PRINTSCREEN);
    this->VK_INSERT = (KeyEvent_staticInit(), KeyEvent_VK_INSERT);
    this->VK_HELP = (KeyEvent_staticInit(), KeyEvent_VK_HELP);
    this->VK_META = (KeyEvent_staticInit(), KeyEvent_VK_META);
    this->VK_BACK_QUOTE = (KeyEvent_staticInit(), KeyEvent_VK_BACK_QUOTE);
    this->VK_QUOTE = (KeyEvent_staticInit(), KeyEvent_VK_QUOTE);
    this->VK_KP_UP = (KeyEvent_staticInit(), KeyEvent_VK_KP_UP);
    this->VK_KP_DOWN = (KeyEvent_staticInit(), KeyEvent_VK_KP_DOWN);
    this->VK_KP_LEFT = (KeyEvent_staticInit(), KeyEvent_VK_KP_LEFT);
    this->VK_KP_RIGHT = (KeyEvent_staticInit(), KeyEvent_VK_KP_RIGHT);
    this->VK_DEAD_GRAVE = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_GRAVE);
    this->VK_DEAD_ACUTE = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_ACUTE);
    this->VK_DEAD_CIRCUMFLEX = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_CIRCUMFLEX);
    this->VK_DEAD_TILDE = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_TILDE);
    this->VK_DEAD_MACRON = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_MACRON);
    this->VK_DEAD_BREVE = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_BREVE);
    this->VK_DEAD_ABOVEDOT = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_ABOVEDOT);
    this->VK_DEAD_DIAERESIS = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_DIAERESIS);
    this->VK_DEAD_ABOVERING = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_ABOVERING);
    this->VK_DEAD_DOUBLEACUTE = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_DOUBLEACUTE);
    this->VK_DEAD_CARON = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_CARON);
    this->VK_DEAD_CEDILLA = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_CEDILLA);
    this->VK_DEAD_OGONEK = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_OGONEK);
    this->VK_DEAD_IOTA = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_IOTA);
    this->VK_DEAD_VOICED_SOUND = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_VOICED_SOUND);
    this->VK_DEAD_SEMIVOICED_SOUND = (KeyEvent_staticInit(), KeyEvent_VK_DEAD_SEMIVOICED_SOUND);
    this->VK_AMPERSAND = (KeyEvent_staticInit(), KeyEvent_VK_AMPERSAND);
    this->VK_ASTERISK = (KeyEvent_staticInit(), KeyEvent_VK_ASTERISK);
    this->VK_QUOTEDBL = (KeyEvent_staticInit(), KeyEvent_VK_QUOTEDBL);
    this->VK_LESS = (KeyEvent_staticInit(), KeyEvent_VK_LESS);
    this->VK_GREATER = (KeyEvent_staticInit(), KeyEvent_VK_GREATER);
    this->VK_BRACELEFT = (KeyEvent_staticInit(), KeyEvent_VK_BRACELEFT);
    this->VK_BRACERIGHT = (KeyEvent_staticInit(), KeyEvent_VK_BRACERIGHT);
    this->VK_AT = (KeyEvent_staticInit(), KeyEvent_VK_AT);
    this->VK_COLON = (KeyEvent_staticInit(), KeyEvent_VK_COLON);
    this->VK_CIRCUMFLEX = (KeyEvent_staticInit(), KeyEvent_VK_CIRCUMFLEX);
    this->VK_DOLLAR = (KeyEvent_staticInit(), KeyEvent_VK_DOLLAR);
    this->VK_EURO_SIGN = (KeyEvent_staticInit(), KeyEvent_VK_EURO_SIGN);
    this->VK_EXCLAMATION_MARK = (KeyEvent_staticInit(), KeyEvent_VK_EXCLAMATION_MARK);
    this->VK_INVERTED_EXCLAMATION_MARK = (KeyEvent_staticInit(), KeyEvent_VK_INVERTED_EXCLAMATION_MARK);
    this->VK_LEFT_PARENTHESIS = (KeyEvent_staticInit(), KeyEvent_VK_LEFT_PARENTHESIS);
    this->VK_NUMBER_SIGN = (KeyEvent_staticInit(), KeyEvent_VK_NUMBER_SIGN);
    this->VK_PLUS = (KeyEvent_staticInit(), KeyEvent_VK_PLUS);
    this->VK_RIGHT_PARENTHESIS = (KeyEvent_staticInit(), KeyEvent_VK_RIGHT_PARENTHESIS);
    this->VK_UNDERSCORE = (KeyEvent_staticInit(), KeyEvent_VK_UNDERSCORE);
    this->VK_WINDOWS = (KeyEvent_staticInit(), KeyEvent_VK_WINDOWS);
    this->VK_CONTEXT_MENU = (KeyEvent_staticInit(), KeyEvent_VK_CONTEXT_MENU);
    this->VK_FINAL = (KeyEvent_staticInit(), KeyEvent_VK_FINAL);
    this->VK_CONVERT = (KeyEvent_staticInit(), KeyEvent_VK_CONVERT);
    this->VK_NONCONVERT = (KeyEvent_staticInit(), KeyEvent_VK_NONCONVERT);
    this->VK_ACCEPT = (KeyEvent_staticInit(), KeyEvent_VK_ACCEPT);
    this->VK_MODECHANGE = (KeyEvent_staticInit(), KeyEvent_VK_MODECHANGE);
    this->VK_KANA = (KeyEvent_staticInit(), KeyEvent_VK_KANA);
    this->VK_KANJI = (KeyEvent_staticInit(), KeyEvent_VK_KANJI);
    this->VK_ALPHANUMERIC = (KeyEvent_staticInit(), KeyEvent_VK_ALPHANUMERIC);
    this->VK_KATAKANA = (KeyEvent_staticInit(), KeyEvent_VK_KATAKANA);
    this->VK_HIRAGANA = (KeyEvent_staticInit(), KeyEvent_VK_HIRAGANA);
    this->VK_FULL_WIDTH = (KeyEvent_staticInit(), KeyEvent_VK_FULL_WIDTH);
    this->VK_HALF_WIDTH = (KeyEvent_staticInit(), KeyEvent_VK_HALF_WIDTH);
    this->VK_ROMAN_CHARACTERS = (KeyEvent_staticInit(), KeyEvent_VK_ROMAN_CHARACTERS);
    this->VK_ALL_CANDIDATES = (KeyEvent_staticInit(), KeyEvent_VK_ALL_CANDIDATES);
    this->VK_PREVIOUS_CANDIDATE = (KeyEvent_staticInit(), KeyEvent_VK_PREVIOUS_CANDIDATE);
    this->VK_CODE_INPUT = (KeyEvent_staticInit(), KeyEvent_VK_CODE_INPUT);
    this->VK_JAPANESE_KATAKANA = (KeyEvent_staticInit(), KeyEvent_VK_JAPANESE_KATAKANA);
    this->VK_JAPANESE_HIRAGANA = (KeyEvent_staticInit(), KeyEvent_VK_JAPANESE_HIRAGANA);
    this->VK_JAPANESE_ROMAN = (KeyEvent_staticInit(), KeyEvent_VK_JAPANESE_ROMAN);
    this->VK_KANA_LOCK = (KeyEvent_staticInit(), KeyEvent_VK_KANA_LOCK);
    this->VK_INPUT_METHOD_ON_OFF = (KeyEvent_staticInit(), KeyEvent_VK_INPUT_METHOD_ON_OFF);
    this->VK_CUT = (KeyEvent_staticInit(), KeyEvent_VK_CUT);
    this->VK_COPY = (KeyEvent_staticInit(), KeyEvent_VK_COPY);
    this->VK_PASTE = (KeyEvent_staticInit(), KeyEvent_VK_PASTE);
    this->VK_UNDO = (KeyEvent_staticInit(), KeyEvent_VK_UNDO);
    this->VK_AGAIN = (KeyEvent_staticInit(), KeyEvent_VK_AGAIN);
    this->VK_FIND = (KeyEvent_staticInit(), KeyEvent_VK_FIND);
    this->VK_PROPS = (KeyEvent_staticInit(), KeyEvent_VK_PROPS);
    this->VK_STOP = (KeyEvent_staticInit(), KeyEvent_VK_STOP);
    this->VK_COMPOSE = (KeyEvent_staticInit(), KeyEvent_VK_COMPOSE);
    this->VK_ALT_GRAPH = (KeyEvent_staticInit(), KeyEvent_VK_ALT_GRAPH);
    this->VK_BEGIN = (KeyEvent_staticInit(), KeyEvent_VK_BEGIN);
    this->VK_UNDEFINED = (KeyEvent_staticInit(), KeyEvent_VK_UNDEFINED);
}

void ABKeyEventWrapper_init(ABKeyEventWrapper* this) {
    ABKeyEventWrapper_register();
    ABKeyEventWrapper_initFields(this);
}

ABKeyEventWrapper* ABKeyEventWrapper_new(void) {
    ABKeyEventWrapper* this = java_object_alloc(sizeof(ABKeyEventWrapper), "ABKeyEventWrapper");
    ABKeyEventWrapper_init(this);
    return this;
}


ABKeyEventWrapper* ABKeyEventWrapper_getInstance(void) {
        return (ABKeyEventWrapper_staticInit(), ABKeyEventWrapper_instance);
}

