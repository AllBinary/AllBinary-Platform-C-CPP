
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H

#include <android/view/KeyEvent.h>

      
#include <org/allbinary/android/ActivityFractureUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AndroidGameKey.h"
#include "Input.h"

class AndroidKeyFactory: public ActivityFractureUtil {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const AndroidGameKey UNKNOWN = AndroidGameKey(KeyEvent::KEYCODE_UNKNOWN, "UNKNOWN");

    public: AndroidGameKey KEYCODE_BUTTON_L1 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_R1 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_THUMBR = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_THUMBL = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_START = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_MODE = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_B = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_A = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_X = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_Y = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_L2 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_R2 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_SELECT = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_C = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_Z = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_1 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_10 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_11 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_12 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_13 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_14 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_15 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_16 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_2 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_3 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_4 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_5 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_6 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_7 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_8 = this->UNKNOWN;

    public: AndroidGameKey KEYCODE_BUTTON_9 = this->UNKNOWN;

    public: const AndroidGameKey SOFT_LEFT = AndroidGameKey(KeyEvent::KEYCODE_SOFT_LEFT, "SOFT_LEFT");

    public: const AndroidGameKey SOFT_RIGHT = AndroidGameKey(KeyEvent::KEYCODE_SOFT_RIGHT, "SOFT_RIGHT");

    public: const AndroidGameKey HOME = AndroidGameKey(KeyEvent::KEYCODE_HOME, "HOME");

    public: const AndroidGameKey BACK = AndroidGameKey(KeyEvent::KEYCODE_BACK, "BACK");

    public: const AndroidGameKey CALL = AndroidGameKey(KeyEvent::KEYCODE_CALL, "CALL");

    public: const AndroidGameKey ENDCALL = AndroidGameKey(KeyEvent::KEYCODE_ENDCALL, "ENDCALL");

    public: const AndroidGameKey ZERO = AndroidGameKey(KeyEvent::KEYCODE_0, CommonPhoneStrings::getInstance().ZERO);

    public: const AndroidGameKey ONE = AndroidGameKey(KeyEvent::KEYCODE_1, CommonPhoneStrings::getInstance().ONE);

    public: const AndroidGameKey TWO = AndroidGameKey(KeyEvent::KEYCODE_2, CommonPhoneStrings::getInstance().TWO);

    public: const AndroidGameKey THREE = AndroidGameKey(KeyEvent::KEYCODE_3, CommonPhoneStrings::getInstance().THREE);

    public: const AndroidGameKey FOUR = AndroidGameKey(KeyEvent::KEYCODE_4, CommonPhoneStrings::getInstance().FOUR);

    public: const AndroidGameKey FIVE = AndroidGameKey(KeyEvent::KEYCODE_5, CommonPhoneStrings::getInstance().FIVE);

    public: const AndroidGameKey SIX = AndroidGameKey(KeyEvent::KEYCODE_6, CommonPhoneStrings::getInstance().SIX);

    public: const AndroidGameKey SEVEN = AndroidGameKey(KeyEvent::KEYCODE_7, CommonPhoneStrings::getInstance().SEVEN);

    public: const AndroidGameKey EIGHT = AndroidGameKey(KeyEvent::KEYCODE_8, CommonPhoneStrings::getInstance().EIGHT);

    public: const AndroidGameKey NINE = AndroidGameKey(KeyEvent::KEYCODE_9, CommonPhoneStrings::getInstance().NINE);

    public: const AndroidGameKey STAR = AndroidGameKey(KeyEvent::KEYCODE_STAR, CommonPhoneStrings::getInstance().STAR);

    public: const AndroidGameKey POUND = AndroidGameKey(KeyEvent::KEYCODE_POUND, CommonPhoneStrings::getInstance().POUND);

    public: const AndroidGameKey DPAD_UP = AndroidGameKey(KeyEvent::KEYCODE_DPAD_UP, "UP");

    public: const AndroidGameKey DPAD_DOWN = AndroidGameKey(KeyEvent::KEYCODE_DPAD_DOWN, "DOWN");

    public: const AndroidGameKey DPAD_LEFT = AndroidGameKey(KeyEvent::KEYCODE_DPAD_LEFT, "LEFT");

    public: const AndroidGameKey DPAD_RIGHT = AndroidGameKey(KeyEvent::KEYCODE_DPAD_RIGHT, "RIGHT");

    public: const AndroidGameKey DPAD_CENTER = AndroidGameKey(KeyEvent::KEYCODE_DPAD_CENTER, "CENTER");

    public: const AndroidGameKey VOLUME_UP = AndroidGameKey(KeyEvent::KEYCODE_VOLUME_UP, "VOLUME_UP");

    public: const AndroidGameKey VOLUME_DOWN = AndroidGameKey(KeyEvent::KEYCODE_VOLUME_DOWN, "VOLUME_DOWN");

    public: const AndroidGameKey POWER = AndroidGameKey(KeyEvent::KEYCODE_POWER, "POWER");

    public: const AndroidGameKey CAMERA = AndroidGameKey(KeyEvent::KEYCODE_CAMERA, "CAMERA");

    public: const AndroidGameKey CLEAR = AndroidGameKey(KeyEvent::KEYCODE_CLEAR, "CLEAR");

    public: const AndroidGameKey A = AndroidGameKey(KeyEvent::KEYCODE_A, "A");

    public: const AndroidGameKey B = AndroidGameKey(KeyEvent::KEYCODE_B, "B");

    public: const AndroidGameKey C = AndroidGameKey(KeyEvent::KEYCODE_C, "C");

    public: const AndroidGameKey D = AndroidGameKey(KeyEvent::KEYCODE_D, "D");

    public: const AndroidGameKey E = AndroidGameKey(KeyEvent::KEYCODE_E, "E");

    public: const AndroidGameKey F = AndroidGameKey(KeyEvent::KEYCODE_F, "F");

    public: const AndroidGameKey G = AndroidGameKey(KeyEvent::KEYCODE_G, "G");

    public: const AndroidGameKey H = AndroidGameKey(KeyEvent::KEYCODE_H, "H");

    public: const AndroidGameKey I = AndroidGameKey(KeyEvent::KEYCODE_I, "I");

    public: const AndroidGameKey J = AndroidGameKey(KeyEvent::KEYCODE_J, "J");

    public: const AndroidGameKey K = AndroidGameKey(KeyEvent::KEYCODE_K, "K");

    public: const AndroidGameKey L = AndroidGameKey(KeyEvent::KEYCODE_L, "L");

    public: const AndroidGameKey M = AndroidGameKey(KeyEvent::KEYCODE_M, "M");

    public: const AndroidGameKey N = AndroidGameKey(KeyEvent::KEYCODE_N, "N");

    public: const AndroidGameKey O = AndroidGameKey(KeyEvent::KEYCODE_O, "O");

    public: const AndroidGameKey P = AndroidGameKey(KeyEvent::KEYCODE_P, "P");

    public: const AndroidGameKey Q = AndroidGameKey(KeyEvent::KEYCODE_Q, "Q");

    public: const AndroidGameKey R = AndroidGameKey(KeyEvent::KEYCODE_R, "R");

    public: const AndroidGameKey S = AndroidGameKey(KeyEvent::KEYCODE_S, "S");

    public: const AndroidGameKey T = AndroidGameKey(KeyEvent::KEYCODE_T, "T");

    public: const AndroidGameKey U = AndroidGameKey(KeyEvent::KEYCODE_U, "U");

    public: const AndroidGameKey V = AndroidGameKey(KeyEvent::KEYCODE_V, "V");

    public: const AndroidGameKey W = AndroidGameKey(KeyEvent::KEYCODE_W, "W");

    public: const AndroidGameKey X = AndroidGameKey(KeyEvent::KEYCODE_X, "X");

    public: const AndroidGameKey Y = AndroidGameKey(KeyEvent::KEYCODE_Y, "Y");

    public: const AndroidGameKey Z = AndroidGameKey(KeyEvent::KEYCODE_Z, "Z");

    public: const AndroidGameKey COMMA = AndroidGameKey(KeyEvent::KEYCODE_COMMA, "COMMA");

    public: const AndroidGameKey PERIOD = AndroidGameKey(KeyEvent::KEYCODE_PERIOD, AbPathData::getInstance().EXTENSION_SEP);

    public: const AndroidGameKey ALT_LEFT = AndroidGameKey(KeyEvent::KEYCODE_ALT_LEFT, "ALT_LEFT");

    public: const AndroidGameKey ALT_RIGHT = AndroidGameKey(KeyEvent::KEYCODE_ALT_RIGHT, "ALT_RIGHT");

    public: const AndroidGameKey SHIFT_LEFT = AndroidGameKey(KeyEvent::KEYCODE_SHIFT_LEFT, "SHIFT_LEFT");

    public: const AndroidGameKey SHIFT_RIGHT = AndroidGameKey(KeyEvent::KEYCODE_SHIFT_RIGHT, "SHIFT_RIGHT");

    public: const AndroidGameKey TAB = AndroidGameKey(KeyEvent::KEYCODE_TAB, "TAB");

    public: const AndroidGameKey SPACE = AndroidGameKey(KeyEvent::KEYCODE_SPACE, "SPACE");

    public: const AndroidGameKey SYM = AndroidGameKey(KeyEvent::KEYCODE_SYM, "SYM");

    public: const AndroidGameKey EXPLORER = AndroidGameKey(KeyEvent::KEYCODE_EXPLORER, "EXPLORER");

    public: const AndroidGameKey ENVELOPE = AndroidGameKey(KeyEvent::KEYCODE_ENVELOPE, "ENVELOPE");

    public: const AndroidGameKey ENTER = AndroidGameKey(KeyEvent::KEYCODE_ENTER, "ENTER");

    public: const AndroidGameKey DEL = AndroidGameKey(KeyEvent::KEYCODE_DEL, "DEL");

    public: const AndroidGameKey GRAVE = AndroidGameKey(KeyEvent::KEYCODE_GRAVE, "GRAVE");

    public: const AndroidGameKey MINUS = AndroidGameKey(KeyEvent::KEYCODE_MINUS, "MINUS");

    public: const AndroidGameKey EQUALS = AndroidGameKey(KeyEvent::KEYCODE_EQUALS, "EQUALS");

    public: const AndroidGameKey LEFT_BRACKET = AndroidGameKey(KeyEvent::KEYCODE_LEFT_BRACKET, "LEFT_BRACKET");

    public: const AndroidGameKey RIGHT_BRACKET = AndroidGameKey(KeyEvent::KEYCODE_RIGHT_BRACKET, "RIGHT_BRACKET");

    public: const AndroidGameKey BACKSLASH = AndroidGameKey(KeyEvent::KEYCODE_BACKSLASH, "BACKSLASH");

    public: const AndroidGameKey SEMICOLON = AndroidGameKey(KeyEvent::KEYCODE_SEMICOLON, "SEMICOLON");

    public: const AndroidGameKey APOSTROPHE = AndroidGameKey(KeyEvent::KEYCODE_APOSTROPHE, "APOSTROPHE");

    public: const AndroidGameKey SLASH = AndroidGameKey(KeyEvent::KEYCODE_SLASH, "SLASH");

    public: const AndroidGameKey AT = AndroidGameKey(KeyEvent::KEYCODE_AT, "AT");

    public: const AndroidGameKey NUM = AndroidGameKey(KeyEvent::KEYCODE_NUM, "NUM");

    public: const AndroidGameKey HEADSETHOOK = AndroidGameKey(KeyEvent::KEYCODE_HEADSETHOOK, "HEADSETHOOK");

    public: const AndroidGameKey FOCUS = AndroidGameKey(KeyEvent::KEYCODE_FOCUS, "FOCUS");

    public: const AndroidGameKey PLUS = AndroidGameKey(KeyEvent::KEYCODE_PLUS, "PLUS");

    public: const AndroidGameKey MENU = AndroidGameKey(KeyEvent::KEYCODE_MENU, "MENU");

    public: const AndroidGameKey NOTIFICATION = AndroidGameKey(KeyEvent::KEYCODE_NOTIFICATION, "NOTIFICATION");

    public: const AndroidGameKey SEARCH = AndroidGameKey(KeyEvent::KEYCODE_SEARCH, "SEARCH");

    public: void init();

    public: bool isSubmission(Input input);

    public: bool isDelete(Input input);

    public: bool isBackSpace(Input input);

    public: bool isLeft(Input input);

    public: bool isRight(Input input);

    public: bool isUp(Input input);

    public: bool isDown(Input input);

    public: bool isEnter(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_H
