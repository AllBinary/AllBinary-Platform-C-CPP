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
#include "android/view/KeyEvent.h"
#include "org/allbinary/android/ActivityFractureUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct AndroidKeyFactory AndroidKeyFactory;
struct AndroidKeyFactory {
    ActivityFractureUtil base;
    LogUtil* logUtil;
    AndroidGameKey* UNKNOWN;
    AndroidGameKey* KEYCODE_BUTTON_L1;
    AndroidGameKey* KEYCODE_BUTTON_R1;
    AndroidGameKey* KEYCODE_BUTTON_THUMBR;
    AndroidGameKey* KEYCODE_BUTTON_THUMBL;
    AndroidGameKey* KEYCODE_BUTTON_START;
    AndroidGameKey* KEYCODE_BUTTON_MODE;
    AndroidGameKey* KEYCODE_BUTTON_B;
    AndroidGameKey* KEYCODE_BUTTON_A;
    AndroidGameKey* KEYCODE_BUTTON_X;
    AndroidGameKey* KEYCODE_BUTTON_Y;
    AndroidGameKey* KEYCODE_BUTTON_L2;
    AndroidGameKey* KEYCODE_BUTTON_R2;
    AndroidGameKey* KEYCODE_BUTTON_SELECT;
    AndroidGameKey* KEYCODE_BUTTON_C;
    AndroidGameKey* KEYCODE_BUTTON_Z;
    AndroidGameKey* KEYCODE_BUTTON_1;
    AndroidGameKey* KEYCODE_BUTTON_10;
    AndroidGameKey* KEYCODE_BUTTON_11;
    AndroidGameKey* KEYCODE_BUTTON_12;
    AndroidGameKey* KEYCODE_BUTTON_13;
    AndroidGameKey* KEYCODE_BUTTON_14;
    AndroidGameKey* KEYCODE_BUTTON_15;
    AndroidGameKey* KEYCODE_BUTTON_16;
    AndroidGameKey* KEYCODE_BUTTON_2;
    AndroidGameKey* KEYCODE_BUTTON_3;
    AndroidGameKey* KEYCODE_BUTTON_4;
    AndroidGameKey* KEYCODE_BUTTON_5;
    AndroidGameKey* KEYCODE_BUTTON_6;
    AndroidGameKey* KEYCODE_BUTTON_7;
    AndroidGameKey* KEYCODE_BUTTON_8;
    AndroidGameKey* KEYCODE_BUTTON_9;
    AndroidGameKey* SOFT_LEFT;
    AndroidGameKey* SOFT_RIGHT;
    AndroidGameKey* HOME;
    AndroidGameKey* BACK;
    AndroidGameKey* CALL;
    AndroidGameKey* ENDCALL;
    AndroidGameKey* ZERO;
    AndroidGameKey* ONE;
    AndroidGameKey* TWO;
    AndroidGameKey* THREE;
    AndroidGameKey* FOUR;
    AndroidGameKey* FIVE;
    AndroidGameKey* SIX;
    AndroidGameKey* SEVEN;
    AndroidGameKey* EIGHT;
    AndroidGameKey* NINE;
    AndroidGameKey* STAR;
    AndroidGameKey* POUND;
    AndroidGameKey* DPAD_UP;
    AndroidGameKey* DPAD_DOWN;
    AndroidGameKey* DPAD_LEFT;
    AndroidGameKey* DPAD_RIGHT;
    AndroidGameKey* DPAD_CENTER;
    AndroidGameKey* VOLUME_UP;
    AndroidGameKey* VOLUME_DOWN;
    AndroidGameKey* POWER;
    AndroidGameKey* CAMERA;
    AndroidGameKey* CLEAR;
    AndroidGameKey* A;
    AndroidGameKey* B;
    AndroidGameKey* C;
    AndroidGameKey* D;
    AndroidGameKey* E;
    AndroidGameKey* F;
    AndroidGameKey* G;
    AndroidGameKey* H;
    AndroidGameKey* I;
    AndroidGameKey* J;
    AndroidGameKey* K;
    AndroidGameKey* L;
    AndroidGameKey* M;
    AndroidGameKey* N;
    AndroidGameKey* O;
    AndroidGameKey* P;
    AndroidGameKey* Q;
    AndroidGameKey* R;
    AndroidGameKey* S;
    AndroidGameKey* T;
    AndroidGameKey* U;
    AndroidGameKey* V;
    AndroidGameKey* W;
    AndroidGameKey* X;
    AndroidGameKey* Y;
    AndroidGameKey* Z;
    AndroidGameKey* COMMA;
    AndroidGameKey* PERIOD;
    AndroidGameKey* ALT_LEFT;
    AndroidGameKey* ALT_RIGHT;
    AndroidGameKey* SHIFT_LEFT;
    AndroidGameKey* SHIFT_RIGHT;
    AndroidGameKey* TAB;
    AndroidGameKey* SPACE;
    AndroidGameKey* SYM;
    AndroidGameKey* EXPLORER;
    AndroidGameKey* ENVELOPE;
    AndroidGameKey* ENTER;
    AndroidGameKey* DEL;
    AndroidGameKey* GRAVE;
    AndroidGameKey* MINUS;
    AndroidGameKey* EQUALS;
    AndroidGameKey* LEFT_BRACKET;
    AndroidGameKey* RIGHT_BRACKET;
    AndroidGameKey* BACKSLASH;
    AndroidGameKey* SEMICOLON;
    AndroidGameKey* APOSTROPHE;
    AndroidGameKey* SLASH;
    AndroidGameKey* AT;
    AndroidGameKey* NUM;
    AndroidGameKey* HEADSETHOOK;
    AndroidGameKey* FOCUS;
    AndroidGameKey* PLUS;
    AndroidGameKey* MENU;
    AndroidGameKey* NOTIFICATION;
    AndroidGameKey* SEARCH;
};


AndroidKeyFactory* AndroidKeyFactory_new(void);
void AndroidKeyFactory_init(AndroidKeyFactory* this);
bool AndroidKeyFactory_isSubmission(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isDelete(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isBackSpace(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isLeft(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isRight(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isUp(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isDown(AndroidKeyFactory* this, Input* input);
bool AndroidKeyFactory_isEnter(AndroidKeyFactory* this, Input* input);

static void AndroidKeyFactory_initFields(AndroidKeyFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->UNKNOWN = AndroidGameKey_new(KeyEvent_KEYCODE_UNKNOWN, "UNKNOWN");
    this->KEYCODE_BUTTON_L1 = this->UNKNOWN;
    this->KEYCODE_BUTTON_R1 = this->UNKNOWN;
    this->KEYCODE_BUTTON_THUMBR = this->UNKNOWN;
    this->KEYCODE_BUTTON_THUMBL = this->UNKNOWN;
    this->KEYCODE_BUTTON_START = this->UNKNOWN;
    this->KEYCODE_BUTTON_MODE = this->UNKNOWN;
    this->KEYCODE_BUTTON_B = this->UNKNOWN;
    this->KEYCODE_BUTTON_A = this->UNKNOWN;
    this->KEYCODE_BUTTON_X = this->UNKNOWN;
    this->KEYCODE_BUTTON_Y = this->UNKNOWN;
    this->KEYCODE_BUTTON_L2 = this->UNKNOWN;
    this->KEYCODE_BUTTON_R2 = this->UNKNOWN;
    this->KEYCODE_BUTTON_SELECT = this->UNKNOWN;
    this->KEYCODE_BUTTON_C = this->UNKNOWN;
    this->KEYCODE_BUTTON_Z = this->UNKNOWN;
    this->KEYCODE_BUTTON_1 = this->UNKNOWN;
    this->KEYCODE_BUTTON_10 = this->UNKNOWN;
    this->KEYCODE_BUTTON_11 = this->UNKNOWN;
    this->KEYCODE_BUTTON_12 = this->UNKNOWN;
    this->KEYCODE_BUTTON_13 = this->UNKNOWN;
    this->KEYCODE_BUTTON_14 = this->UNKNOWN;
    this->KEYCODE_BUTTON_15 = this->UNKNOWN;
    this->KEYCODE_BUTTON_16 = this->UNKNOWN;
    this->KEYCODE_BUTTON_2 = this->UNKNOWN;
    this->KEYCODE_BUTTON_3 = this->UNKNOWN;
    this->KEYCODE_BUTTON_4 = this->UNKNOWN;
    this->KEYCODE_BUTTON_5 = this->UNKNOWN;
    this->KEYCODE_BUTTON_6 = this->UNKNOWN;
    this->KEYCODE_BUTTON_7 = this->UNKNOWN;
    this->KEYCODE_BUTTON_8 = this->UNKNOWN;
    this->KEYCODE_BUTTON_9 = this->UNKNOWN;
    this->SOFT_LEFT = AndroidGameKey_new(KeyEvent_KEYCODE_SOFT_LEFT, "SOFT_LEFT");
    this->SOFT_RIGHT = AndroidGameKey_new(KeyEvent_KEYCODE_SOFT_RIGHT, "SOFT_RIGHT");
    this->HOME = AndroidGameKey_new(KeyEvent_KEYCODE_HOME, "HOME");
    this->BACK = AndroidGameKey_new(KeyEvent_KEYCODE_BACK, "BACK");
    this->CALL = AndroidGameKey_new(KeyEvent_KEYCODE_CALL, "CALL");
    this->ENDCALL = AndroidGameKey_new(KeyEvent_KEYCODE_ENDCALL, "ENDCALL");
    this->ZERO = AndroidGameKey_new(KeyEvent_KEYCODE_0, CommonPhoneStrings_getInstance()->ZERO);
    this->ONE = AndroidGameKey_new(KeyEvent_KEYCODE_1, CommonPhoneStrings_getInstance()->ONE);
    this->TWO = AndroidGameKey_new(KeyEvent_KEYCODE_2, CommonPhoneStrings_getInstance()->TWO);
    this->THREE = AndroidGameKey_new(KeyEvent_KEYCODE_3, CommonPhoneStrings_getInstance()->THREE);
    this->FOUR = AndroidGameKey_new(KeyEvent_KEYCODE_4, CommonPhoneStrings_getInstance()->FOUR);
    this->FIVE = AndroidGameKey_new(KeyEvent_KEYCODE_5, CommonPhoneStrings_getInstance()->FIVE);
    this->SIX = AndroidGameKey_new(KeyEvent_KEYCODE_6, CommonPhoneStrings_getInstance()->SIX);
    this->SEVEN = AndroidGameKey_new(KeyEvent_KEYCODE_7, CommonPhoneStrings_getInstance()->SEVEN);
    this->EIGHT = AndroidGameKey_new(KeyEvent_KEYCODE_8, CommonPhoneStrings_getInstance()->EIGHT);
    this->NINE = AndroidGameKey_new(KeyEvent_KEYCODE_9, CommonPhoneStrings_getInstance()->NINE);
    this->STAR = AndroidGameKey_new(KeyEvent_KEYCODE_STAR, CommonPhoneStrings_getInstance()->STAR);
    this->POUND = AndroidGameKey_new(KeyEvent_KEYCODE_POUND, CommonPhoneStrings_getInstance()->POUND);
    this->DPAD_UP = AndroidGameKey_new(KeyEvent_KEYCODE_DPAD_UP, "UP");
    this->DPAD_DOWN = AndroidGameKey_new(KeyEvent_KEYCODE_DPAD_DOWN, "DOWN");
    this->DPAD_LEFT = AndroidGameKey_new(KeyEvent_KEYCODE_DPAD_LEFT, "LEFT");
    this->DPAD_RIGHT = AndroidGameKey_new(KeyEvent_KEYCODE_DPAD_RIGHT, "RIGHT");
    this->DPAD_CENTER = AndroidGameKey_new(KeyEvent_KEYCODE_DPAD_CENTER, "CENTER");
    this->VOLUME_UP = AndroidGameKey_new(KeyEvent_KEYCODE_VOLUME_UP, "VOLUME_UP");
    this->VOLUME_DOWN = AndroidGameKey_new(KeyEvent_KEYCODE_VOLUME_DOWN, "VOLUME_DOWN");
    this->POWER = AndroidGameKey_new(KeyEvent_KEYCODE_POWER, "POWER");
    this->CAMERA = AndroidGameKey_new(KeyEvent_KEYCODE_CAMERA, "CAMERA");
    this->CLEAR = AndroidGameKey_new(KeyEvent_KEYCODE_CLEAR, "CLEAR");
    this->A = AndroidGameKey_new(KeyEvent_KEYCODE_A, "A");
    this->B = AndroidGameKey_new(KeyEvent_KEYCODE_B, "B");
    this->C = AndroidGameKey_new(KeyEvent_KEYCODE_C, "C");
    this->D = AndroidGameKey_new(KeyEvent_KEYCODE_D, "D");
    this->E = AndroidGameKey_new(KeyEvent_KEYCODE_E, "E");
    this->F = AndroidGameKey_new(KeyEvent_KEYCODE_F, "F");
    this->G = AndroidGameKey_new(KeyEvent_KEYCODE_G, "G");
    this->H = AndroidGameKey_new(KeyEvent_KEYCODE_H, "H");
    this->I = AndroidGameKey_new(KeyEvent_KEYCODE_I, "I");
    this->J = AndroidGameKey_new(KeyEvent_KEYCODE_J, "J");
    this->K = AndroidGameKey_new(KeyEvent_KEYCODE_K, "K");
    this->L = AndroidGameKey_new(KeyEvent_KEYCODE_L, "L");
    this->M = AndroidGameKey_new(KeyEvent_KEYCODE_M, "M");
    this->N = AndroidGameKey_new(KeyEvent_KEYCODE_N, "N");
    this->O = AndroidGameKey_new(KeyEvent_KEYCODE_O, "O");
    this->P = AndroidGameKey_new(KeyEvent_KEYCODE_P, "P");
    this->Q = AndroidGameKey_new(KeyEvent_KEYCODE_Q, "Q");
    this->R = AndroidGameKey_new(KeyEvent_KEYCODE_R, "R");
    this->S = AndroidGameKey_new(KeyEvent_KEYCODE_S, "S");
    this->T = AndroidGameKey_new(KeyEvent_KEYCODE_T, "T");
    this->U = AndroidGameKey_new(KeyEvent_KEYCODE_U, "U");
    this->V = AndroidGameKey_new(KeyEvent_KEYCODE_V, "V");
    this->W = AndroidGameKey_new(KeyEvent_KEYCODE_W, "W");
    this->X = AndroidGameKey_new(KeyEvent_KEYCODE_X, "X");
    this->Y = AndroidGameKey_new(KeyEvent_KEYCODE_Y, "Y");
    this->Z = AndroidGameKey_new(KeyEvent_KEYCODE_Z, "Z");
    this->COMMA = AndroidGameKey_new(KeyEvent_KEYCODE_COMMA, "COMMA");
    this->PERIOD = AndroidGameKey_new(KeyEvent_KEYCODE_PERIOD, AbPathData_getInstance()->EXTENSION_SEP);
    this->ALT_LEFT = AndroidGameKey_new(KeyEvent_KEYCODE_ALT_LEFT, "ALT_LEFT");
    this->ALT_RIGHT = AndroidGameKey_new(KeyEvent_KEYCODE_ALT_RIGHT, "ALT_RIGHT");
    this->SHIFT_LEFT = AndroidGameKey_new(KeyEvent_KEYCODE_SHIFT_LEFT, "SHIFT_LEFT");
    this->SHIFT_RIGHT = AndroidGameKey_new(KeyEvent_KEYCODE_SHIFT_RIGHT, "SHIFT_RIGHT");
    this->TAB = AndroidGameKey_new(KeyEvent_KEYCODE_TAB, "TAB");
    this->SPACE = AndroidGameKey_new(KeyEvent_KEYCODE_SPACE, "SPACE");
    this->SYM = AndroidGameKey_new(KeyEvent_KEYCODE_SYM, "SYM");
    this->EXPLORER = AndroidGameKey_new(KeyEvent_KEYCODE_EXPLORER, "EXPLORER");
    this->ENVELOPE = AndroidGameKey_new(KeyEvent_KEYCODE_ENVELOPE, "ENVELOPE");
    this->ENTER = AndroidGameKey_new(KeyEvent_KEYCODE_ENTER, "ENTER");
    this->DEL = AndroidGameKey_new(KeyEvent_KEYCODE_DEL, "DEL");
    this->GRAVE = AndroidGameKey_new(KeyEvent_KEYCODE_GRAVE, "GRAVE");
    this->MINUS = AndroidGameKey_new(KeyEvent_KEYCODE_MINUS, "MINUS");
    this->EQUALS = AndroidGameKey_new(KeyEvent_KEYCODE_EQUALS, "EQUALS");
    this->LEFT_BRACKET = AndroidGameKey_new(KeyEvent_KEYCODE_LEFT_BRACKET, "LEFT_BRACKET");
    this->RIGHT_BRACKET = AndroidGameKey_new(KeyEvent_KEYCODE_RIGHT_BRACKET, "RIGHT_BRACKET");
    this->BACKSLASH = AndroidGameKey_new(KeyEvent_KEYCODE_BACKSLASH, "BACKSLASH");
    this->SEMICOLON = AndroidGameKey_new(KeyEvent_KEYCODE_SEMICOLON, "SEMICOLON");
    this->APOSTROPHE = AndroidGameKey_new(KeyEvent_KEYCODE_APOSTROPHE, "APOSTROPHE");
    this->SLASH = AndroidGameKey_new(KeyEvent_KEYCODE_SLASH, "SLASH");
    this->AT = AndroidGameKey_new(KeyEvent_KEYCODE_AT, "AT");
    this->NUM = AndroidGameKey_new(KeyEvent_KEYCODE_NUM, "NUM");
    this->HEADSETHOOK = AndroidGameKey_new(KeyEvent_KEYCODE_HEADSETHOOK, "HEADSETHOOK");
    this->FOCUS = AndroidGameKey_new(KeyEvent_KEYCODE_FOCUS, "FOCUS");
    this->PLUS = AndroidGameKey_new(KeyEvent_KEYCODE_PLUS, "PLUS");
    this->MENU = AndroidGameKey_new(KeyEvent_KEYCODE_MENU, "MENU");
    this->NOTIFICATION = AndroidGameKey_new(KeyEvent_KEYCODE_NOTIFICATION, "NOTIFICATION");
    this->SEARCH = AndroidGameKey_new(KeyEvent_KEYCODE_SEARCH, "SEARCH");
}

void AndroidKeyFactory_init(AndroidKeyFactory* this) {
    ActivityFractureUtil_init(&this->base);
    AndroidKeyFactory_initFields(this);
}

AndroidKeyFactory* AndroidKeyFactory_new(void) {
    AndroidKeyFactory* this = calloc(1, sizeof(AndroidKeyFactory));
    AndroidKeyFactory_init(this);
    return this;
}


void AndroidKeyFactory_init(AndroidKeyFactory* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, "Start/End", this, commonStrings->INIT);
}


bool AndroidKeyFactory_isSubmission(AndroidKeyFactory* this, Input* input) {
        if (input == this->ENTER) {
            return true;
        } else if (input == this->DPAD_CENTER) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isDelete(AndroidKeyFactory* this, Input* input) {
        return false;
}


bool AndroidKeyFactory_isBackSpace(AndroidKeyFactory* this, Input* input) {
        if (input == this->DEL) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isLeft(AndroidKeyFactory* this, Input* input) {
        if (input == this->DPAD_LEFT) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isRight(AndroidKeyFactory* this, Input* input) {
        if (input == this->DPAD_RIGHT) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isUp(AndroidKeyFactory* this, Input* input) {
        if (input == this->DPAD_UP) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isDown(AndroidKeyFactory* this, Input* input) {
        if (input == this->DPAD_DOWN) {
            return true;
        }
        return false;
}


bool AndroidKeyFactory_isEnter(AndroidKeyFactory* this, Input* input) {
        if (input == this->DPAD_CENTER) {
            return true;
        } else if (input == this->ENTER) {
            return true;
        } else if (input == this->CALL) {
            return true;
        }
        return false;
}

