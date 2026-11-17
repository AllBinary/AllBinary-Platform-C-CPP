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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct PCKeyFactory PCKeyFactory;
struct PCKeyFactory {
    PCGameKey* UNKNOWN;
    PCGameKey* ENTER;
    PCGameKey* _A;
    PCGameKey* _B;
    PCGameKey* _C;
    PCGameKey* _D;
    PCGameKey* _E;
    PCGameKey* _F;
    PCGameKey* _G;
    PCGameKey* _H;
    PCGameKey* _I;
    PCGameKey* _J;
    PCGameKey* _K;
    PCGameKey* _L;
    PCGameKey* _M;
    PCGameKey* _N;
    PCGameKey* _O;
    PCGameKey* _P;
    PCGameKey* _Q;
    PCGameKey* _R;
    PCGameKey* _S;
    PCGameKey* _T;
    PCGameKey* _U;
    PCGameKey* _V;
    PCGameKey* _W;
    PCGameKey* _X;
    PCGameKey* _Y;
    PCGameKey* _Z;
    PCGameKey* a;
    PCGameKey* b;
    PCGameKey* c;
    PCGameKey* d;
    PCGameKey* e;
    PCGameKey* f;
    PCGameKey* g;
    PCGameKey* h;
    PCGameKey* i;
    PCGameKey* j;
    PCGameKey* k;
    PCGameKey* l;
    PCGameKey* m;
    PCGameKey* n;
    PCGameKey* o;
    PCGameKey* p;
    PCGameKey* q;
    PCGameKey* r;
    PCGameKey* s;
    PCGameKey* t;
    PCGameKey* u;
    PCGameKey* v;
    PCGameKey* w;
    PCGameKey* x;
    PCGameKey* y;
    PCGameKey* z;
    PCGameKey* ZERO;
    PCGameKey* ONE;
    PCGameKey* TWO;
    PCGameKey* THREE;
    PCGameKey* FOUR;
    PCGameKey* FIVE;
    PCGameKey* SIX;
    PCGameKey* SEVEN;
    PCGameKey* EIGHT;
    PCGameKey* NINE;
    PCGameKey* DPAD_UP;
    PCGameKey* DPAD_DOWN;
    PCGameKey* DPAD_LEFT;
    PCGameKey* DPAD_RIGHT;
    PCGameKey* DPAD_UP2;
    PCGameKey* DPAD_DOWN2;
    PCGameKey* DPAD_LEFT2;
    PCGameKey* DPAD_RIGHT2;
    PCGameKey* COMMA;
    PCGameKey* SPACE;
    PCGameKey* DEL;
    PCGameKey* STAR;
    PCGameKey* QUESTION;
    PCGameKey* PERIOD;
    PCGameKey* ESCAPE;
    PCGameKey* BACK_SPACE;
};

static PCKeyFactory* PCKeyFactory_SINGLETON;

PCKeyFactory* PCKeyFactory_new(void);
PCKeyFactory* PCKeyFactory_getInstance(void);
bool PCKeyFactory_isSubmission(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isDelete(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isBackSpace(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isUp(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isDown(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isLeft(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isRight(PCKeyFactory* this, Input* input);
bool PCKeyFactory_isEnter(PCKeyFactory* this, Input* input);

// Static fields with runtime initializers: call this once at startup
void PCKeyFactory_staticInit(void) {
    PCKeyFactory_SINGLETON = PCKeyFactory_new();
}

static void PCKeyFactory_initFields(PCKeyFactory* this) {
    this->UNKNOWN = PCGameKey_new(254, "UNKNOWN");
    this->ENTER = PCGameKey_new(13, "Enter");
    this->_A = PCGameKey_new(65, "A");
    this->_B = PCGameKey_new(66, "B");
    this->_C = PCGameKey_new(67, "C");
    this->_D = PCGameKey_new(68, "D");
    this->_E = PCGameKey_new(69, "E");
    this->_F = PCGameKey_new(70, "F");
    this->_G = PCGameKey_new(71, "G");
    this->_H = PCGameKey_new(72, "H");
    this->_I = PCGameKey_new(73, "I");
    this->_J = PCGameKey_new(74, "J");
    this->_K = PCGameKey_new(75, "K");
    this->_L = PCGameKey_new(76, "L");
    this->_M = PCGameKey_new(77, "M");
    this->_N = PCGameKey_new(78, "N");
    this->_O = PCGameKey_new(79, "O");
    this->_P = PCGameKey_new(80, "P");
    this->_Q = PCGameKey_new(81, "Q");
    this->_R = PCGameKey_new(82, "R");
    this->_S = PCGameKey_new(83, "S");
    this->_T = PCGameKey_new(84, "T");
    this->_U = PCGameKey_new(85, "U");
    this->_V = PCGameKey_new(86, "V");
    this->_W = PCGameKey_new(87, "W");
    this->_X = PCGameKey_new(88, "X");
    this->_Y = PCGameKey_new(89, "Y");
    this->_Z = PCGameKey_new(90, "Z");
    this->a = PCGameKey_new(97, "a");
    this->b = PCGameKey_new(98, "b");
    this->c = PCGameKey_new(99, "c");
    this->d = PCGameKey_new(100, "d");
    this->e = PCGameKey_new(101, "e");
    this->f = PCGameKey_new(102, "f");
    this->g = PCGameKey_new(103, "g");
    this->h = PCGameKey_new(104, "h");
    this->i = PCGameKey_new(105, "i");
    this->j = PCGameKey_new(106, "j");
    this->k = PCGameKey_new(107, "k");
    this->l = PCGameKey_new(108, "l");
    this->m = PCGameKey_new(109, "m");
    this->n = PCGameKey_new(110, "n");
    this->o = PCGameKey_new(111, "o");
    this->p = PCGameKey_new(112, "p");
    this->q = PCGameKey_new(113, "q");
    this->r = PCGameKey_new(114, "r");
    this->s = PCGameKey_new(115, "s");
    this->t = PCGameKey_new(116, "t");
    this->u = PCGameKey_new(117, "u");
    this->v = PCGameKey_new(118, "v");
    this->w = PCGameKey_new(119, "w");
    this->x = PCGameKey_new(120, PositionStrings_getInstance()->X);
    this->y = PCGameKey_new(121, PositionStrings_getInstance()->Y);
    this->z = PCGameKey_new(122, "z");
    this->ZERO = PCGameKey_new(48, CommonPhoneStrings_getInstance()->ZERO);
    this->ONE = PCGameKey_new(49, CommonPhoneStrings_getInstance()->ONE);
    this->TWO = PCGameKey_new(50, CommonPhoneStrings_getInstance()->TWO);
    this->THREE = PCGameKey_new(51, CommonPhoneStrings_getInstance()->THREE);
    this->FOUR = PCGameKey_new(52, CommonPhoneStrings_getInstance()->FOUR);
    this->FIVE = PCGameKey_new(53, CommonPhoneStrings_getInstance()->FIVE);
    this->SIX = PCGameKey_new(54, CommonPhoneStrings_getInstance()->SIX);
    this->SEVEN = PCGameKey_new(55, CommonPhoneStrings_getInstance()->SEVEN);
    this->EIGHT = PCGameKey_new(56, CommonPhoneStrings_getInstance()->EIGHT);
    this->NINE = PCGameKey_new(57, CommonPhoneStrings_getInstance()->NINE);
    this->DPAD_UP = PCGameKey_new(38, CommonPhoneStrings_getInstance()->UP);
    this->DPAD_DOWN = PCGameKey_new(40, CommonPhoneStrings_getInstance()->DOWN);
    this->DPAD_LEFT = PCGameKey_new(37, CommonPhoneStrings_getInstance()->LEFT);
    this->DPAD_RIGHT = PCGameKey_new(39, CommonPhoneStrings_getInstance()->RIGHT);
    this->DPAD_UP2 = this->DPAD_UP;
    this->DPAD_DOWN2 = this->DPAD_DOWN;
    this->DPAD_LEFT2 = this->DPAD_LEFT;
    this->DPAD_RIGHT2 = this->DPAD_RIGHT;
    this->COMMA = PCGameKey_new(44, "COMMA");
    this->SPACE = PCGameKey_new(32, "SPACE");
    this->DEL = PCGameKey_new(46, "DEL");
    this->STAR = PCGameKey_new(42, CommonPhoneStrings_getInstance()->STAR);
    this->QUESTION = PCGameKey_new(47, "?");
    this->PERIOD = PCGameKey_new(46, CommonSeps_getInstance()->PERIOD);
    this->ESCAPE = PCGameKey_new(27, "Esc");
    this->BACK_SPACE = PCGameKey_new(8, "Backspace");
}

void PCKeyFactory_init(PCKeyFactory* this) {
    PCKeyFactory_initFields(this);
}

PCKeyFactory* PCKeyFactory_new(void) {
    PCKeyFactory* this = calloc(1, sizeof(PCKeyFactory));
    PCKeyFactory_init(this);
    return this;
}


PCKeyFactory* PCKeyFactory_getInstance(void) {
        return PCKeyFactory_SINGLETON;
}


bool PCKeyFactory_isSubmission(PCKeyFactory* this, Input* input) {
        if (input == this->ENTER) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isDelete(PCKeyFactory* this, Input* input) {
        if (input == this->DEL) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isBackSpace(PCKeyFactory* this, Input* input) {
        if (input == this->BACK_SPACE) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isUp(PCKeyFactory* this, Input* input) {
        if (input == this->DPAD_UP || input == this->DPAD_UP2) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isDown(PCKeyFactory* this, Input* input) {
        if (input == this->DPAD_DOWN || input == this->DPAD_DOWN2) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isLeft(PCKeyFactory* this, Input* input) {
        if (input == this->DPAD_LEFT || input == this->DPAD_LEFT2) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isRight(PCKeyFactory* this, Input* input) {
        if (input == this->DPAD_RIGHT || input == this->DPAD_RIGHT2) {
            return true;
        }
        return false;
}


bool PCKeyFactory_isEnter(PCKeyFactory* this, Input* input) {
        if (input == this->ENTER) {
            return true;
        }
        return false;
}

