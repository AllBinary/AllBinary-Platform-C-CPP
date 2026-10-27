
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/PCKeyFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/ABKeyEventWrapper.h"
#include "org/allbinary/game/input/PCGameKey.h"
#include "org/allbinary/game/input/Input.h"


PCKeyFactory::PCKeyFactory() : keyEventWrapper(ABKeyEventWrapper::getInstance()), UNKNOWN(new PCGameKey(this->keyEventWrapper->VK_UNDEFINED, "UNKNOWN")), ENTER(new PCGameKey(5, "Enter")), _A(new PCGameKey(this->keyEventWrapper->VK_A, "A")), _B(new PCGameKey(this->keyEventWrapper->VK_B, "B")), _C(new PCGameKey(this->keyEventWrapper->VK_C, "C")), _D(new PCGameKey(this->keyEventWrapper->VK_D, "D")), _E(new PCGameKey(this->keyEventWrapper->VK_E, "E")), _F(new PCGameKey(this->keyEventWrapper->VK_F, "F")), _G(new PCGameKey(this->keyEventWrapper->VK_G, "G")), _H(new PCGameKey(this->keyEventWrapper->VK_H, "H")), _I(new PCGameKey(this->keyEventWrapper->VK_I, "I")), _J(new PCGameKey(this->keyEventWrapper->VK_J, "J")), _K(new PCGameKey(this->keyEventWrapper->VK_K, "K")), _L(new PCGameKey(this->keyEventWrapper->VK_L, "L")), _M(new PCGameKey(this->keyEventWrapper->VK_M, "M")), _N(new PCGameKey(this->keyEventWrapper->VK_N, "N")), _O(new PCGameKey(this->keyEventWrapper->VK_O, "O")), _P(new PCGameKey(this->keyEventWrapper->VK_P, "P")), _Q(new PCGameKey(this->keyEventWrapper->VK_Q, "Q")), _R(new PCGameKey(this->keyEventWrapper->VK_R, "R")), _S(new PCGameKey(this->keyEventWrapper->VK_S, "S")), _T(new PCGameKey(this->keyEventWrapper->VK_T, "T")), _U(new PCGameKey(this->keyEventWrapper->VK_U, "U")), _V(new PCGameKey(this->keyEventWrapper->VK_V, "V")), _W(new PCGameKey(this->keyEventWrapper->VK_W, "W")), _X(new PCGameKey(this->keyEventWrapper->VK_X, "X")), _Y(new PCGameKey(this->keyEventWrapper->VK_Y, "Y")), _Z(new PCGameKey(this->keyEventWrapper->VK_Z, "Z")), a(new PCGameKey(97, "a")), b(new PCGameKey(98, "b")), c(new PCGameKey(99, "c")), d(new PCGameKey(100, "d")), e(new PCGameKey(101, "e")), f(new PCGameKey(102, "f")), g(new PCGameKey(103, "g")), h(new PCGameKey(104, "h")), i(new PCGameKey(105, "i")), j(new PCGameKey(106, "j")), k(new PCGameKey(107, "k")), l(new PCGameKey(108, "l")), m(new PCGameKey(109, "m")), n(new PCGameKey(110, "n")), o(new PCGameKey(111, "o")), p(new PCGameKey(112, "p")), q(new PCGameKey(113, "q")), r(new PCGameKey(114, "r")), s(new PCGameKey(115, "s")), t(new PCGameKey(116, "t")), u(new PCGameKey(117, "u")), v(new PCGameKey(118, "v")), w(new PCGameKey(119, "w")), x(new PCGameKey(120, PositionStrings::getInstance()->X)), y(new PCGameKey(121, PositionStrings::getInstance()->Y)), z(new PCGameKey(122, "z")), ZERO(new PCGameKey(this->keyEventWrapper->VK_0, CommonPhoneStrings::getInstance()->ZERO)), ONE(new PCGameKey(this->keyEventWrapper->VK_1, CommonPhoneStrings::getInstance()->ONE)), TWO(new PCGameKey(this->keyEventWrapper->VK_2, CommonPhoneStrings::getInstance()->TWO)), THREE(new PCGameKey(this->keyEventWrapper->VK_3, CommonPhoneStrings::getInstance()->THREE)), FOUR(new PCGameKey(this->keyEventWrapper->VK_4, CommonPhoneStrings::getInstance()->FOUR)), FIVE(new PCGameKey(this->keyEventWrapper->VK_5, CommonPhoneStrings::getInstance()->FIVE)), SIX(new PCGameKey(this->keyEventWrapper->VK_6, CommonPhoneStrings::getInstance()->SIX)), SEVEN(new PCGameKey(this->keyEventWrapper->VK_7, CommonPhoneStrings::getInstance()->SEVEN)), EIGHT(new PCGameKey(this->keyEventWrapper->VK_8, CommonPhoneStrings::getInstance()->EIGHT)), NINE(new PCGameKey(this->keyEventWrapper->VK_9, CommonPhoneStrings::getInstance()->NINE)), DPAD_UP(new PCGameKey(this->keyEventWrapper->VK_UP, CommonPhoneStrings::getInstance()->UP)), DPAD_DOWN(new PCGameKey(this->keyEventWrapper->VK_DOWN, CommonPhoneStrings::getInstance()->DOWN)), DPAD_LEFT(new PCGameKey(this->keyEventWrapper->VK_LEFT, CommonPhoneStrings::getInstance()->LEFT)), DPAD_RIGHT(new PCGameKey(this->keyEventWrapper->VK_RIGHT, CommonPhoneStrings::getInstance()->RIGHT)), DPAD_UP2(this->DPAD_UP), DPAD_DOWN2(this->DPAD_DOWN), DPAD_LEFT2(this->DPAD_LEFT), DPAD_RIGHT2(this->DPAD_RIGHT), COMMA(new PCGameKey(this->keyEventWrapper->VK_COMMA, "COMMA")), SPACE(new PCGameKey(this->keyEventWrapper->VK_SPACE, "SPACE")), DEL(new PCGameKey(this->keyEventWrapper->VK_DELETE, "DEL")), STAR(new PCGameKey(42, CommonPhoneStrings::getInstance()->STAR)), QUESTION(new PCGameKey(47, "?")), PERIOD(new PCGameKey(this->keyEventWrapper->VK_PERIOD, CommonSeps::getInstance()->PERIOD)), ESCAPE(new PCGameKey(this->keyEventWrapper->VK_ESCAPE, "Esc")), BACK_SPACE(new PCGameKey(this->keyEventWrapper->VK_BACK_SPACE, "Backspace")) {
        }
        auto PCKeyFactory::SINGLETON_owner() -> PCKeyFactory* { static std::unique_ptr<PCKeyFactory> value(new PCKeyFactory()); return value.get(); }
PCKeyFactory* PCKeyFactory::SINGLETON = PCKeyFactory::SINGLETON_owner();

    auto PCKeyFactory::getInstance() -> PCKeyFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PCKeyFactory::SINGLETON;
    
}


    auto PCKeyFactory::isSubmission(Input* input) -> bool{

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isDelete(Input* input) -> bool{

                        if(input == this->DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isBackSpace(Input* input) -> bool{

                        if(input == this->BACK_SPACE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isUp(Input* input) -> bool{

                        if(input == this->DPAD_UP || input == this->DPAD_UP2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isDown(Input* input) -> bool{

                        if(input == this->DPAD_DOWN || input == this->DPAD_DOWN2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isLeft(Input* input) -> bool{

                        if(input == this->DPAD_LEFT || input == this->DPAD_LEFT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isRight(Input* input) -> bool{

                        if(input == this->DPAD_RIGHT || input == this->DPAD_RIGHT2)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto PCKeyFactory::isEnter(Input* input) -> bool{

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_PCKEYFACTORY_CPP
