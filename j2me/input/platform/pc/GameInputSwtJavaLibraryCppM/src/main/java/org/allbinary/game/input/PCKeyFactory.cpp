
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


    public: const PCGameKey UNKNOWN = PCGameKey(254, "UNKNOWN");

    public: const PCGameKey ENTER = PCGameKey(13, "Enter");

    public: const PCGameKey _A = PCGameKey(65, "A");

    public: const PCGameKey _B = PCGameKey(66, "B");

    public: const PCGameKey _C = PCGameKey(67, "C");

    public: const PCGameKey _D = PCGameKey(68, "D");

    public: const PCGameKey _E = PCGameKey(69, "E");

    public: const PCGameKey _F = PCGameKey(70, "F");

    public: const PCGameKey _G = PCGameKey(71, "G");

    public: const PCGameKey _H = PCGameKey(72, "H");

    public: const PCGameKey _I = PCGameKey(73, "I");

    public: const PCGameKey _J = PCGameKey(74, "J");

    public: const PCGameKey _K = PCGameKey(75, "K");

    public: const PCGameKey _L = PCGameKey(76, "L");

    public: const PCGameKey _M = PCGameKey(77, "M");

    public: const PCGameKey _N = PCGameKey(78, "N");

    public: const PCGameKey _O = PCGameKey(79, "O");

    public: const PCGameKey _P = PCGameKey(80, "P");

    public: const PCGameKey _Q = PCGameKey(81, "Q");

    public: const PCGameKey _R = PCGameKey(82, "R");

    public: const PCGameKey _S = PCGameKey(83, "S");

    public: const PCGameKey _T = PCGameKey(84, "T");

    public: const PCGameKey _U = PCGameKey(85, "U");

    public: const PCGameKey _V = PCGameKey(86, "V");

    public: const PCGameKey _W = PCGameKey(87, "W");

    public: const PCGameKey _X = PCGameKey(88, "X");

    public: const PCGameKey _Y = PCGameKey(89, "Y");

    public: const PCGameKey _Z = PCGameKey(90, "Z");

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

    public: const PCGameKey ZERO = PCGameKey(48, CommonPhoneStrings::getInstance().ZERO);

    public: const PCGameKey ONE = PCGameKey(49, CommonPhoneStrings::getInstance().ONE);

    public: const PCGameKey TWO = PCGameKey(50, CommonPhoneStrings::getInstance().TWO);

    public: const PCGameKey THREE = PCGameKey(51, CommonPhoneStrings::getInstance().THREE);

    public: const PCGameKey FOUR = PCGameKey(52, CommonPhoneStrings::getInstance().FOUR);

    public: const PCGameKey FIVE = PCGameKey(53, CommonPhoneStrings::getInstance().FIVE);

    public: const PCGameKey SIX = PCGameKey(54, CommonPhoneStrings::getInstance().SIX);

    public: const PCGameKey SEVEN = PCGameKey(55, CommonPhoneStrings::getInstance().SEVEN);

    public: const PCGameKey EIGHT = PCGameKey(56, CommonPhoneStrings::getInstance().EIGHT);

    public: const PCGameKey NINE = PCGameKey(57, CommonPhoneStrings::getInstance().NINE);

    public: const PCGameKey DPAD_UP = PCGameKey(38, CommonPhoneStrings::getInstance().UP);

    public: const PCGameKey DPAD_DOWN = PCGameKey(40, CommonPhoneStrings::getInstance().DOWN);

    public: const PCGameKey DPAD_LEFT = PCGameKey(37, CommonPhoneStrings::getInstance().LEFT);

    public: const PCGameKey DPAD_RIGHT = PCGameKey(39, CommonPhoneStrings::getInstance().RIGHT);

    public: const PCGameKey DPAD_UP2 = this->DPAD_UP;

    public: const PCGameKey DPAD_DOWN2 = this->DPAD_DOWN;

    public: const PCGameKey DPAD_LEFT2 = this->DPAD_LEFT;

    public: const PCGameKey DPAD_RIGHT2 = this->DPAD_RIGHT;

    public: const PCGameKey COMMA = PCGameKey(44, "COMMA");

    public: const PCGameKey SPACE = PCGameKey(32, "SPACE");

    public: const PCGameKey DEL = PCGameKey(46, "DEL");

    public: const PCGameKey STAR = PCGameKey(42, CommonPhoneStrings::getInstance().STAR);

    public: const PCGameKey QUESTION = PCGameKey(47, "?");

    public: const PCGameKey PERIOD = PCGameKey(46, CommonSeps::getInstance().PERIOD);

    public: const PCGameKey ESCAPE = PCGameKey(27, "Esc");

    public: const PCGameKey BACK_SPACE = PCGameKey(8, "Backspace");

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

            

