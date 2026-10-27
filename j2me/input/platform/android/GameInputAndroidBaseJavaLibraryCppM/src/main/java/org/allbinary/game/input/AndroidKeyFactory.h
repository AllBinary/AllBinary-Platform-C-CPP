
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/view/KeyEvent.h>

      
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/AndroidGameKey.h"
#include "org/allbinary/game/input/Input.h"

class AndroidKeyFactory: public ActivityFractureUtil {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: AndroidGameKey* UNKNOWN = new AndroidGameKey(KeyEvent::KEYCODE_UNKNOWN, "UNKNOWN");

    public: AndroidGameKey* KEYCODE_BUTTON_L1 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_R1 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_THUMBR = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_THUMBL = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_START = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_MODE = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_B = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_A = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_X = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_Y = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_L2 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_R2 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_SELECT = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_C = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_Z = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_1 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_10 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_11 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_12 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_13 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_14 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_15 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_16 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_2 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_3 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_4 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_5 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_6 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_7 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_8 = this->UNKNOWN;

    public: AndroidGameKey* KEYCODE_BUTTON_9 = this->UNKNOWN;

    public: AndroidGameKey* SOFT_LEFT = new AndroidGameKey(KeyEvent::KEYCODE_SOFT_LEFT, "SOFT_LEFT");

    public: AndroidGameKey* SOFT_RIGHT = new AndroidGameKey(KeyEvent::KEYCODE_SOFT_RIGHT, "SOFT_RIGHT");

    public: AndroidGameKey* HOME = new AndroidGameKey(KeyEvent::KEYCODE_HOME, "HOME");

    public: AndroidGameKey* BACK = new AndroidGameKey(KeyEvent::KEYCODE_BACK, "BACK");

    public: AndroidGameKey* CALL = new AndroidGameKey(KeyEvent::KEYCODE_CALL, "CALL");

    public: AndroidGameKey* ENDCALL = new AndroidGameKey(KeyEvent::KEYCODE_ENDCALL, "ENDCALL");

    public: AndroidGameKey* ZERO = new AndroidGameKey(KeyEvent::KEYCODE_0, CommonPhoneStrings::getInstance()->ZERO);

    public: AndroidGameKey* ONE = new AndroidGameKey(KeyEvent::KEYCODE_1, CommonPhoneStrings::getInstance()->ONE);

    public: AndroidGameKey* TWO = new AndroidGameKey(KeyEvent::KEYCODE_2, CommonPhoneStrings::getInstance()->TWO);

    public: AndroidGameKey* THREE = new AndroidGameKey(KeyEvent::KEYCODE_3, CommonPhoneStrings::getInstance()->THREE);

    public: AndroidGameKey* FOUR = new AndroidGameKey(KeyEvent::KEYCODE_4, CommonPhoneStrings::getInstance()->FOUR);

    public: AndroidGameKey* FIVE = new AndroidGameKey(KeyEvent::KEYCODE_5, CommonPhoneStrings::getInstance()->FIVE);

    public: AndroidGameKey* SIX = new AndroidGameKey(KeyEvent::KEYCODE_6, CommonPhoneStrings::getInstance()->SIX);

    public: AndroidGameKey* SEVEN = new AndroidGameKey(KeyEvent::KEYCODE_7, CommonPhoneStrings::getInstance()->SEVEN);

    public: AndroidGameKey* EIGHT = new AndroidGameKey(KeyEvent::KEYCODE_8, CommonPhoneStrings::getInstance()->EIGHT);

    public: AndroidGameKey* NINE = new AndroidGameKey(KeyEvent::KEYCODE_9, CommonPhoneStrings::getInstance()->NINE);

    public: AndroidGameKey* STAR = new AndroidGameKey(KeyEvent::KEYCODE_STAR, CommonPhoneStrings::getInstance()->STAR);

    public: AndroidGameKey* POUND = new AndroidGameKey(KeyEvent::KEYCODE_POUND, CommonPhoneStrings::getInstance()->POUND);

    public: AndroidGameKey* DPAD_UP = new AndroidGameKey(KeyEvent::KEYCODE_DPAD_UP, "UP");

    public: AndroidGameKey* DPAD_DOWN = new AndroidGameKey(KeyEvent::KEYCODE_DPAD_DOWN, "DOWN");

    public: AndroidGameKey* DPAD_LEFT = new AndroidGameKey(KeyEvent::KEYCODE_DPAD_LEFT, "LEFT");

    public: AndroidGameKey* DPAD_RIGHT = new AndroidGameKey(KeyEvent::KEYCODE_DPAD_RIGHT, "RIGHT");

    public: AndroidGameKey* DPAD_CENTER = new AndroidGameKey(KeyEvent::KEYCODE_DPAD_CENTER, "CENTER");

    public: AndroidGameKey* VOLUME_UP = new AndroidGameKey(KeyEvent::KEYCODE_VOLUME_UP, "VOLUME_UP");

    public: AndroidGameKey* VOLUME_DOWN = new AndroidGameKey(KeyEvent::KEYCODE_VOLUME_DOWN, "VOLUME_DOWN");

    public: AndroidGameKey* POWER = new AndroidGameKey(KeyEvent::KEYCODE_POWER, "POWER");

    public: AndroidGameKey* CAMERA = new AndroidGameKey(KeyEvent::KEYCODE_CAMERA, "CAMERA");

    public: AndroidGameKey* CLEAR = new AndroidGameKey(KeyEvent::KEYCODE_CLEAR, "CLEAR");

    public: AndroidGameKey* A = new AndroidGameKey(KeyEvent::KEYCODE_A, "A");

    public: AndroidGameKey* B = new AndroidGameKey(KeyEvent::KEYCODE_B, "B");

    public: AndroidGameKey* C = new AndroidGameKey(KeyEvent::KEYCODE_C, "C");

    public: AndroidGameKey* D = new AndroidGameKey(KeyEvent::KEYCODE_D, "D");

    public: AndroidGameKey* E = new AndroidGameKey(KeyEvent::KEYCODE_E, "E");

    public: AndroidGameKey* F = new AndroidGameKey(KeyEvent::KEYCODE_F, "F");

    public: AndroidGameKey* G = new AndroidGameKey(KeyEvent::KEYCODE_G, "G");

    public: AndroidGameKey* H = new AndroidGameKey(KeyEvent::KEYCODE_H, "H");

    public: AndroidGameKey* I = new AndroidGameKey(KeyEvent::KEYCODE_I, "I");

    public: AndroidGameKey* J = new AndroidGameKey(KeyEvent::KEYCODE_J, "J");

    public: AndroidGameKey* K = new AndroidGameKey(KeyEvent::KEYCODE_K, "K");

    public: AndroidGameKey* L = new AndroidGameKey(KeyEvent::KEYCODE_L, "L");

    public: AndroidGameKey* M = new AndroidGameKey(KeyEvent::KEYCODE_M, "M");

    public: AndroidGameKey* N = new AndroidGameKey(KeyEvent::KEYCODE_N, "N");

    public: AndroidGameKey* O = new AndroidGameKey(KeyEvent::KEYCODE_O, "O");

    public: AndroidGameKey* P = new AndroidGameKey(KeyEvent::KEYCODE_P, "P");

    public: AndroidGameKey* Q = new AndroidGameKey(KeyEvent::KEYCODE_Q, "Q");

    public: AndroidGameKey* R = new AndroidGameKey(KeyEvent::KEYCODE_R, "R");

    public: AndroidGameKey* S = new AndroidGameKey(KeyEvent::KEYCODE_S, "S");

    public: AndroidGameKey* T = new AndroidGameKey(KeyEvent::KEYCODE_T, "T");

    public: AndroidGameKey* U = new AndroidGameKey(KeyEvent::KEYCODE_U, "U");

    public: AndroidGameKey* V = new AndroidGameKey(KeyEvent::KEYCODE_V, "V");

    public: AndroidGameKey* W = new AndroidGameKey(KeyEvent::KEYCODE_W, "W");

    public: AndroidGameKey* X = new AndroidGameKey(KeyEvent::KEYCODE_X, "X");

    public: AndroidGameKey* Y = new AndroidGameKey(KeyEvent::KEYCODE_Y, "Y");

    public: AndroidGameKey* Z = new AndroidGameKey(KeyEvent::KEYCODE_Z, "Z");

    public: AndroidGameKey* COMMA = new AndroidGameKey(KeyEvent::KEYCODE_COMMA, "COMMA");

    public: AndroidGameKey* PERIOD = new AndroidGameKey(KeyEvent::KEYCODE_PERIOD, AbPathData::getInstance()->EXTENSION_SEP);

    public: AndroidGameKey* ALT_LEFT = new AndroidGameKey(KeyEvent::KEYCODE_ALT_LEFT, "ALT_LEFT");

    public: AndroidGameKey* ALT_RIGHT = new AndroidGameKey(KeyEvent::KEYCODE_ALT_RIGHT, "ALT_RIGHT");

    public: AndroidGameKey* SHIFT_LEFT = new AndroidGameKey(KeyEvent::KEYCODE_SHIFT_LEFT, "SHIFT_LEFT");

    public: AndroidGameKey* SHIFT_RIGHT = new AndroidGameKey(KeyEvent::KEYCODE_SHIFT_RIGHT, "SHIFT_RIGHT");

    public: AndroidGameKey* TAB = new AndroidGameKey(KeyEvent::KEYCODE_TAB, "TAB");

    public: AndroidGameKey* SPACE = new AndroidGameKey(KeyEvent::KEYCODE_SPACE, "SPACE");

    public: AndroidGameKey* SYM = new AndroidGameKey(KeyEvent::KEYCODE_SYM, "SYM");

    public: AndroidGameKey* EXPLORER = new AndroidGameKey(KeyEvent::KEYCODE_EXPLORER, "EXPLORER");

    public: AndroidGameKey* ENVELOPE = new AndroidGameKey(KeyEvent::KEYCODE_ENVELOPE, "ENVELOPE");

    public: AndroidGameKey* ENTER = new AndroidGameKey(KeyEvent::KEYCODE_ENTER, "ENTER");

    public: AndroidGameKey* DEL = new AndroidGameKey(KeyEvent::KEYCODE_DEL, "DEL");

    public: AndroidGameKey* GRAVE = new AndroidGameKey(KeyEvent::KEYCODE_GRAVE, "GRAVE");

    public: AndroidGameKey* MINUS = new AndroidGameKey(KeyEvent::KEYCODE_MINUS, "MINUS");

    public: AndroidGameKey* EQUALS = new AndroidGameKey(KeyEvent::KEYCODE_EQUALS, "EQUALS");

    public: AndroidGameKey* LEFT_BRACKET = new AndroidGameKey(KeyEvent::KEYCODE_LEFT_BRACKET, "LEFT_BRACKET");

    public: AndroidGameKey* RIGHT_BRACKET = new AndroidGameKey(KeyEvent::KEYCODE_RIGHT_BRACKET, "RIGHT_BRACKET");

    public: AndroidGameKey* BACKSLASH = new AndroidGameKey(KeyEvent::KEYCODE_BACKSLASH, "BACKSLASH");

    public: AndroidGameKey* SEMICOLON = new AndroidGameKey(KeyEvent::KEYCODE_SEMICOLON, "SEMICOLON");

    public: AndroidGameKey* APOSTROPHE = new AndroidGameKey(KeyEvent::KEYCODE_APOSTROPHE, "APOSTROPHE");

    public: AndroidGameKey* SLASH = new AndroidGameKey(KeyEvent::KEYCODE_SLASH, "SLASH");

    public: AndroidGameKey* AT = new AndroidGameKey(KeyEvent::KEYCODE_AT, "AT");

    public: AndroidGameKey* NUM = new AndroidGameKey(KeyEvent::KEYCODE_NUM, "NUM");

    public: AndroidGameKey* HEADSETHOOK = new AndroidGameKey(KeyEvent::KEYCODE_HEADSETHOOK, "HEADSETHOOK");

    public: AndroidGameKey* FOCUS = new AndroidGameKey(KeyEvent::KEYCODE_FOCUS, "FOCUS");

    public: AndroidGameKey* PLUS = new AndroidGameKey(KeyEvent::KEYCODE_PLUS, "PLUS");

    public: AndroidGameKey* MENU = new AndroidGameKey(KeyEvent::KEYCODE_MENU, "MENU");

    public: AndroidGameKey* NOTIFICATION = new AndroidGameKey(KeyEvent::KEYCODE_NOTIFICATION, "NOTIFICATION");

    public: AndroidGameKey* SEARCH = new AndroidGameKey(KeyEvent::KEYCODE_SEARCH, "SEARCH");

    public: void init();

    public: bool isSubmission(Input* input);

    public: bool isDelete(Input* input);

    public: bool isBackSpace(Input* input);

    public: bool isLeft(Input* input);

    public: bool isRight(Input* input);

    public: bool isUp(Input* input);

    public: bool isDown(Input* input);

    public: bool isEnter(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H
