
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABKeyEventWrapper.h"
#include "PCGameKey.h"
#include "Input.h"

class PCKeyFactory
            : public Object
         {

    private: static const PCKeyFactory SINGLETON = PCKeyFactory();

    public: static PCKeyFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory::SINGLETON;
    
}


    private: const ABKeyEventWrapper keyEventWrapper = ABKeyEventWrapper::getInstance();

    public: const PCGameKey UNKNOWN = PCGameKey(this->keyEventWrapper.VK_UNDEFINED, "UNKNOWN");

    public: const PCGameKey ENTER = PCGameKey(5, "Enter");

    public: const PCGameKey _A = PCGameKey(this->keyEventWrapper.VK_A, "A");

    public: const PCGameKey _B = PCGameKey(this->keyEventWrapper.VK_B, "B");

    public: const PCGameKey _C = PCGameKey(this->keyEventWrapper.VK_C, "C");

    public: const PCGameKey _D = PCGameKey(this->keyEventWrapper.VK_D, "D");

    public: const PCGameKey _E = PCGameKey(this->keyEventWrapper.VK_E, "E");

    public: const PCGameKey _F = PCGameKey(this->keyEventWrapper.VK_F, "F");

    public: const PCGameKey _G = PCGameKey(this->keyEventWrapper.VK_G, "G");

    public: const PCGameKey _H = PCGameKey(this->keyEventWrapper.VK_H, "H");

    public: const PCGameKey _I = PCGameKey(this->keyEventWrapper.VK_I, "I");

    public: const PCGameKey _J = PCGameKey(this->keyEventWrapper.VK_J, "J");

    public: const PCGameKey _K = PCGameKey(this->keyEventWrapper.VK_K, "K");

    public: const PCGameKey _L = PCGameKey(this->keyEventWrapper.VK_L, "L");

    public: const PCGameKey _M = PCGameKey(this->keyEventWrapper.VK_M, "M");

    public: const PCGameKey _N = PCGameKey(this->keyEventWrapper.VK_N, "N");

    public: const PCGameKey _O = PCGameKey(this->keyEventWrapper.VK_O, "O");

    public: const PCGameKey _P = PCGameKey(this->keyEventWrapper.VK_P, "P");

    public: const PCGameKey _Q = PCGameKey(this->keyEventWrapper.VK_Q, "Q");

    public: const PCGameKey _R = PCGameKey(this->keyEventWrapper.VK_R, "R");

    public: const PCGameKey _S = PCGameKey(this->keyEventWrapper.VK_S, "S");

    public: const PCGameKey _T = PCGameKey(this->keyEventWrapper.VK_T, "T");

    public: const PCGameKey _U = PCGameKey(this->keyEventWrapper.VK_U, "U");

    public: const PCGameKey _V = PCGameKey(this->keyEventWrapper.VK_V, "V");

    public: const PCGameKey _W = PCGameKey(this->keyEventWrapper.VK_W, "W");

    public: const PCGameKey _X = PCGameKey(this->keyEventWrapper.VK_X, "X");

    public: const PCGameKey _Y = PCGameKey(this->keyEventWrapper.VK_Y, "Y");

    public: const PCGameKey _Z = PCGameKey(this->keyEventWrapper.VK_Z, "Z");

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

    public: const PCGameKey ZERO = PCGameKey(this->keyEventWrapper.VK_0, CommonPhoneStrings::getInstance().ZERO);

    public: const PCGameKey ONE = PCGameKey(this->keyEventWrapper.VK_1, CommonPhoneStrings::getInstance().ONE);

    public: const PCGameKey TWO = PCGameKey(this->keyEventWrapper.VK_2, CommonPhoneStrings::getInstance().TWO);

    public: const PCGameKey THREE = PCGameKey(this->keyEventWrapper.VK_3, CommonPhoneStrings::getInstance().THREE);

    public: const PCGameKey FOUR = PCGameKey(this->keyEventWrapper.VK_4, CommonPhoneStrings::getInstance().FOUR);

    public: const PCGameKey FIVE = PCGameKey(this->keyEventWrapper.VK_5, CommonPhoneStrings::getInstance().FIVE);

    public: const PCGameKey SIX = PCGameKey(this->keyEventWrapper.VK_6, CommonPhoneStrings::getInstance().SIX);

    public: const PCGameKey SEVEN = PCGameKey(this->keyEventWrapper.VK_7, CommonPhoneStrings::getInstance().SEVEN);

    public: const PCGameKey EIGHT = PCGameKey(this->keyEventWrapper.VK_8, CommonPhoneStrings::getInstance().EIGHT);

    public: const PCGameKey NINE = PCGameKey(this->keyEventWrapper.VK_9, CommonPhoneStrings::getInstance().NINE);

    public: const PCGameKey DPAD_UP = PCGameKey(this->keyEventWrapper.VK_UP, CommonPhoneStrings::getInstance().UP);

    public: const PCGameKey DPAD_DOWN = PCGameKey(this->keyEventWrapper.VK_DOWN, CommonPhoneStrings::getInstance().DOWN);

    public: const PCGameKey DPAD_LEFT = PCGameKey(this->keyEventWrapper.VK_LEFT, CommonPhoneStrings::getInstance().LEFT);

    public: const PCGameKey DPAD_RIGHT = PCGameKey(this->keyEventWrapper.VK_RIGHT, CommonPhoneStrings::getInstance().RIGHT);

    public: const PCGameKey DPAD_UP2 = this->DPAD_UP;

    public: const PCGameKey DPAD_DOWN2 = this->DPAD_DOWN;

    public: const PCGameKey DPAD_LEFT2 = this->DPAD_LEFT;

    public: const PCGameKey DPAD_RIGHT2 = this->DPAD_RIGHT;

    public: const PCGameKey COMMA = PCGameKey(this->keyEventWrapper.VK_COMMA, "COMMA");

    public: const PCGameKey SPACE = PCGameKey(this->keyEventWrapper.VK_SPACE, "SPACE");

    public: const PCGameKey DEL = PCGameKey(this->keyEventWrapper.VK_DELETE, "DEL");

    public: const PCGameKey STAR = PCGameKey(42, CommonPhoneStrings::getInstance().STAR);

    public: const PCGameKey QUESTION = PCGameKey(47, "?");

    public: const PCGameKey PERIOD = PCGameKey(this->keyEventWrapper.VK_PERIOD, CommonSeps::getInstance().PERIOD);

    public: const PCGameKey ESCAPE = PCGameKey(this->keyEventWrapper.VK_ESCAPE, "Esc");

    public: const PCGameKey BACK_SPACE = PCGameKey(this->keyEventWrapper.VK_BACK_SPACE, "Backspace");

    public: bool isSubmission(Input input){

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isDelete(Input input){

                        if(input == this->DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isBackSpace(Input input){

                        if(input == this->BACK_SPACE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isUp(Input input){

                        if(input == this->DPAD_UP || input == this->DPAD_UP2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isDown(Input input){

                        if(input == this->DPAD_DOWN || input == this->DPAD_DOWN2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isLeft(Input input){

                        if(input == this->DPAD_LEFT || input == this->DPAD_LEFT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isRight(Input input){

                        if(input == this->DPAD_RIGHT || input == this->DPAD_RIGHT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isEnter(Input input){

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

