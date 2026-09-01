
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCGameKey.h"
#include "Input.h"

class PCKeyFactory
            : public Object
         {

    private: static const PCKeyFactory SINGLETON = PCKeyFactory();

    public: static PCKeyFactory getInstance();

    public: const PCGameKey UNKNOWN = PCGameKey(KeyEvent::VK_UNDEFINED, "UNKNOWN");

    public: const PCGameKey ENTER = PCGameKey(5, "Enter");

    public: const PCGameKey _A = PCGameKey(KeyEvent::VK_A, "A");

    public: const PCGameKey _B = PCGameKey(KeyEvent::VK_B, "B");

    public: const PCGameKey _C = PCGameKey(KeyEvent::VK_C, "C");

    public: const PCGameKey _D = PCGameKey(KeyEvent::VK_D, "D");

    public: const PCGameKey _E = PCGameKey(KeyEvent::VK_E, "E");

    public: const PCGameKey _F = PCGameKey(KeyEvent::VK_F, "F");

    public: const PCGameKey _G = PCGameKey(KeyEvent::VK_G, "G");

    public: const PCGameKey _H = PCGameKey(KeyEvent::VK_H, "H");

    public: const PCGameKey _I = PCGameKey(KeyEvent::VK_I, "I");

    public: const PCGameKey _J = PCGameKey(KeyEvent::VK_J, "J");

    public: const PCGameKey _K = PCGameKey(KeyEvent::VK_K, "K");

    public: const PCGameKey _L = PCGameKey(KeyEvent::VK_L, "L");

    public: const PCGameKey _M = PCGameKey(KeyEvent::VK_M, "M");

    public: const PCGameKey _N = PCGameKey(KeyEvent::VK_N, "N");

    public: const PCGameKey _O = PCGameKey(KeyEvent::VK_O, "O");

    public: const PCGameKey _P = PCGameKey(KeyEvent::VK_P, "P");

    public: const PCGameKey _Q = PCGameKey(KeyEvent::VK_Q, "Q");

    public: const PCGameKey _R = PCGameKey(KeyEvent::VK_R, "R");

    public: const PCGameKey _S = PCGameKey(KeyEvent::VK_S, "S");

    public: const PCGameKey _T = PCGameKey(KeyEvent::VK_T, "T");

    public: const PCGameKey _U = PCGameKey(KeyEvent::VK_U, "U");

    public: const PCGameKey _V = PCGameKey(KeyEvent::VK_V, "V");

    public: const PCGameKey _W = PCGameKey(KeyEvent::VK_W, "W");

    public: const PCGameKey _X = PCGameKey(KeyEvent::VK_X, "X");

    public: const PCGameKey _Y = PCGameKey(KeyEvent::VK_Y, "Y");

    public: const PCGameKey _Z = PCGameKey(KeyEvent::VK_Z, "Z");

    public: const PCGameKey a = PCGameKey(97, "a");

    public: const PCGameKey b = PCGameKey(98, "b");

    public: const PCGameKey c = PCGameKey(99, "c");

    public: const PCGameKey d = PCGameKey(100, "d");

    public: const PCGameKey e = PCGameKey(101, "e");

    public: const PCGameKey f = PCGameKey(102, "f");

    public: const PCGameKey g = PCGameKey(103, "g");

    public: const PCGameKey h = PCGameKey(104, "h");

    public: const PCGameKey i = PCGameKey(105, "i");

    public: const PCGameKey j = PCGameKey(106, "j");

    public: const PCGameKey k = PCGameKey(107, "k");

    public: const PCGameKey l = PCGameKey(108, "l");

    public: const PCGameKey m = PCGameKey(109, "m");

    public: const PCGameKey n = PCGameKey(110, "n");

    public: const PCGameKey o = PCGameKey(111, "o");

    public: const PCGameKey p = PCGameKey(112, "p");

    public: const PCGameKey q = PCGameKey(113, "q");

    public: const PCGameKey r = PCGameKey(114, "r");

    public: const PCGameKey s = PCGameKey(115, "s");

    public: const PCGameKey t = PCGameKey(116, "t");

    public: const PCGameKey u = PCGameKey(117, "u");

    public: const PCGameKey v = PCGameKey(118, "v");

    public: const PCGameKey w = PCGameKey(119, "w");

    public: const PCGameKey x = PCGameKey(120, PositionStrings::getInstance().X);

    public: const PCGameKey y = PCGameKey(121, PositionStrings::getInstance().Y);

    public: const PCGameKey z = PCGameKey(122, "z");

    public: const PCGameKey ZERO = PCGameKey(KeyEvent::VK_0, CommonPhoneStrings::getInstance().ZERO);

    public: const PCGameKey ONE = PCGameKey(KeyEvent::VK_1, CommonPhoneStrings::getInstance().ONE);

    public: const PCGameKey TWO = PCGameKey(KeyEvent::VK_2, CommonPhoneStrings::getInstance().TWO);

    public: const PCGameKey THREE = PCGameKey(KeyEvent::VK_3, CommonPhoneStrings::getInstance().THREE);

    public: const PCGameKey FOUR = PCGameKey(KeyEvent::VK_4, CommonPhoneStrings::getInstance().FOUR);

    public: const PCGameKey FIVE = PCGameKey(KeyEvent::VK_5, CommonPhoneStrings::getInstance().FIVE);

    public: const PCGameKey SIX = PCGameKey(KeyEvent::VK_6, CommonPhoneStrings::getInstance().SIX);

    public: const PCGameKey SEVEN = PCGameKey(KeyEvent::VK_7, CommonPhoneStrings::getInstance().SEVEN);

    public: const PCGameKey EIGHT = PCGameKey(KeyEvent::VK_8, CommonPhoneStrings::getInstance().EIGHT);

    public: const PCGameKey NINE = PCGameKey(KeyEvent::VK_9, CommonPhoneStrings::getInstance().NINE);

    public: const PCGameKey DPAD_UP = PCGameKey(KeyEvent::VK_UP, CommonPhoneStrings::getInstance().UP);

    public: const PCGameKey DPAD_DOWN = PCGameKey(KeyEvent::VK_DOWN, CommonPhoneStrings::getInstance().DOWN);

    public: const PCGameKey DPAD_LEFT = PCGameKey(KeyEvent::VK_LEFT, CommonPhoneStrings::getInstance().LEFT);

    public: const PCGameKey DPAD_RIGHT = PCGameKey(KeyEvent::VK_RIGHT, CommonPhoneStrings::getInstance().RIGHT);

    public: const PCGameKey DPAD_UP2 = this->DPAD_UP;

    public: const PCGameKey DPAD_DOWN2 = this->DPAD_DOWN;

    public: const PCGameKey DPAD_LEFT2 = this->DPAD_LEFT;

    public: const PCGameKey DPAD_RIGHT2 = this->DPAD_RIGHT;

    public: const PCGameKey COMMA = PCGameKey(KeyEvent::VK_COMMA, "COMMA");

    public: const PCGameKey SPACE = PCGameKey(KeyEvent::VK_SPACE, "SPACE");

    public: const PCGameKey DEL = PCGameKey(KeyEvent::VK_DELETE, "DEL");

    public: const PCGameKey STAR = PCGameKey(42, CommonPhoneStrings::getInstance().STAR);

    public: const PCGameKey QUESTION = PCGameKey(47, "?");

    public: const PCGameKey PERIOD = PCGameKey(KeyEvent::VK_PERIOD, CommonSeps::getInstance().PERIOD);

    public: const PCGameKey ESCAPE = PCGameKey(KeyEvent::VK_ESCAPE, "Esc");

    public: const PCGameKey BACK_SPACE = PCGameKey(KeyEvent::VK_BACK_SPACE, "Backspace");

    public: bool isSubmission(Input input);

    public: bool isDelete(Input input);

    public: bool isBackSpace(Input input);

    public: bool isUp(Input input);

    public: bool isDown(Input input);

    public: bool isLeft(Input input);

    public: bool isRight(Input input);

    public: bool isEnter(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_H
