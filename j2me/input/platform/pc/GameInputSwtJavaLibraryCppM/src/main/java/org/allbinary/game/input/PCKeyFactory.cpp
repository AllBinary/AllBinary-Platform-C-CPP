
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PCGameKey.h"
#include "org/allbinary/game/input/Input.h"

class PCKeyFactory
            : public Object
         {

    private: static PCKeyFactory* SINGLETON() { static std::unique_ptr<PCKeyFactory> value(new PCKeyFactory()); return value.get(); }

    public: static PCKeyFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory::SINGLETON();
    
}


    public: PCGameKey* UNKNOWN = new PCGameKey(254, "UNKNOWN");

    public: PCGameKey* ENTER = new PCGameKey(13, "Enter");

    public: PCGameKey* _A = new PCGameKey(65, "A");

    public: PCGameKey* _B = new PCGameKey(66, "B");

    public: PCGameKey* _C = new PCGameKey(67, "C");

    public: PCGameKey* _D = new PCGameKey(68, "D");

    public: PCGameKey* _E = new PCGameKey(69, "E");

    public: PCGameKey* _F = new PCGameKey(70, "F");

    public: PCGameKey* _G = new PCGameKey(71, "G");

    public: PCGameKey* _H = new PCGameKey(72, "H");

    public: PCGameKey* _I = new PCGameKey(73, "I");

    public: PCGameKey* _J = new PCGameKey(74, "J");

    public: PCGameKey* _K = new PCGameKey(75, "K");

    public: PCGameKey* _L = new PCGameKey(76, "L");

    public: PCGameKey* _M = new PCGameKey(77, "M");

    public: PCGameKey* _N = new PCGameKey(78, "N");

    public: PCGameKey* _O = new PCGameKey(79, "O");

    public: PCGameKey* _P = new PCGameKey(80, "P");

    public: PCGameKey* _Q = new PCGameKey(81, "Q");

    public: PCGameKey* _R = new PCGameKey(82, "R");

    public: PCGameKey* _S = new PCGameKey(83, "S");

    public: PCGameKey* _T = new PCGameKey(84, "T");

    public: PCGameKey* _U = new PCGameKey(85, "U");

    public: PCGameKey* _V = new PCGameKey(86, "V");

    public: PCGameKey* _W = new PCGameKey(87, "W");

    public: PCGameKey* _X = new PCGameKey(88, "X");

    public: PCGameKey* _Y = new PCGameKey(89, "Y");

    public: PCGameKey* _Z = new PCGameKey(90, "Z");

    public: PCGameKey* a = new PCGameKey(97, "a");

    public: PCGameKey* b = new PCGameKey(98, "b");

    public: PCGameKey* c = new PCGameKey(99, "c");

    public: PCGameKey* d = new PCGameKey(100, "d");

    public: PCGameKey* e = new PCGameKey(101, "e");

    public: PCGameKey* f = new PCGameKey(102, "f");

    public: PCGameKey* g = new PCGameKey(103, "g");

    public: PCGameKey* h = new PCGameKey(104, "h");

    public: PCGameKey* i = new PCGameKey(105, "i");

    public: PCGameKey* j = new PCGameKey(106, "j");

    public: PCGameKey* k = new PCGameKey(107, "k");

    public: PCGameKey* l = new PCGameKey(108, "l");

    public: PCGameKey* m = new PCGameKey(109, "m");

    public: PCGameKey* n = new PCGameKey(110, "n");

    public: PCGameKey* o = new PCGameKey(111, "o");

    public: PCGameKey* p = new PCGameKey(112, "p");

    public: PCGameKey* q = new PCGameKey(113, "q");

    public: PCGameKey* r = new PCGameKey(114, "r");

    public: PCGameKey* s = new PCGameKey(115, "s");

    public: PCGameKey* t = new PCGameKey(116, "t");

    public: PCGameKey* u = new PCGameKey(117, "u");

    public: PCGameKey* v = new PCGameKey(118, "v");

    public: PCGameKey* w = new PCGameKey(119, "w");

    public: PCGameKey* x = new PCGameKey(120, PositionStrings::getInstance()->X);

    public: PCGameKey* y = new PCGameKey(121, PositionStrings::getInstance()->Y);

    public: PCGameKey* z = new PCGameKey(122, "z");

    public: PCGameKey* ZERO = new PCGameKey(48, CommonPhoneStrings::getInstance()->ZERO);

    public: PCGameKey* ONE = new PCGameKey(49, CommonPhoneStrings::getInstance()->ONE);

    public: PCGameKey* TWO = new PCGameKey(50, CommonPhoneStrings::getInstance()->TWO);

    public: PCGameKey* THREE = new PCGameKey(51, CommonPhoneStrings::getInstance()->THREE);

    public: PCGameKey* FOUR = new PCGameKey(52, CommonPhoneStrings::getInstance()->FOUR);

    public: PCGameKey* FIVE = new PCGameKey(53, CommonPhoneStrings::getInstance()->FIVE);

    public: PCGameKey* SIX = new PCGameKey(54, CommonPhoneStrings::getInstance()->SIX);

    public: PCGameKey* SEVEN = new PCGameKey(55, CommonPhoneStrings::getInstance()->SEVEN);

    public: PCGameKey* EIGHT = new PCGameKey(56, CommonPhoneStrings::getInstance()->EIGHT);

    public: PCGameKey* NINE = new PCGameKey(57, CommonPhoneStrings::getInstance()->NINE);

    public: PCGameKey* DPAD_UP = new PCGameKey(38, CommonPhoneStrings::getInstance()->UP);

    public: PCGameKey* DPAD_DOWN = new PCGameKey(40, CommonPhoneStrings::getInstance()->DOWN);

    public: PCGameKey* DPAD_LEFT = new PCGameKey(37, CommonPhoneStrings::getInstance()->LEFT);

    public: PCGameKey* DPAD_RIGHT = new PCGameKey(39, CommonPhoneStrings::getInstance()->RIGHT);

    public: PCGameKey* DPAD_UP2 = this->DPAD_UP;

    public: PCGameKey* DPAD_DOWN2 = this->DPAD_DOWN;

    public: PCGameKey* DPAD_LEFT2 = this->DPAD_LEFT;

    public: PCGameKey* DPAD_RIGHT2 = this->DPAD_RIGHT;

    public: PCGameKey* COMMA = new PCGameKey(44, "COMMA");

    public: PCGameKey* SPACE = new PCGameKey(32, "SPACE");

    public: PCGameKey* DEL = new PCGameKey(46, "DEL");

    public: PCGameKey* STAR = new PCGameKey(42, CommonPhoneStrings::getInstance()->STAR);

    public: PCGameKey* QUESTION = new PCGameKey(47, "?");

    public: PCGameKey* PERIOD = new PCGameKey(46, CommonSeps::getInstance()->PERIOD);

    public: PCGameKey* ESCAPE = new PCGameKey(27, "Esc");

    public: PCGameKey* BACK_SPACE = new PCGameKey(8, "Backspace");

    public: bool isSubmission(Input* input){

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isDelete(Input* input){

                        if(input == this->DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isBackSpace(Input* input){

                        if(input == this->BACK_SPACE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isUp(Input* input){

                        if(input == this->DPAD_UP || input == this->DPAD_UP2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isDown(Input* input){

                        if(input == this->DPAD_DOWN || input == this->DPAD_DOWN2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isLeft(Input* input){

                        if(input == this->DPAD_LEFT || input == this->DPAD_LEFT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isRight(Input* input){

                        if(input == this->DPAD_RIGHT || input == this->DPAD_RIGHT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isEnter(Input* input){

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

