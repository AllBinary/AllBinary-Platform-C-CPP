
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
        #include "org/allbinary/game/input/PCGameKey.h"
#include "org/allbinary/game/input/Input.h"


PCKeyFactory::PCKeyFactory() : UNKNOWN(new PCGameKey(254, "UNKNOWN")), ENTER(new PCGameKey(13, "Enter")), _A(new PCGameKey(65, "A")), _B(new PCGameKey(66, "B")), _C(new PCGameKey(67, "C")), _D(new PCGameKey(68, "D")), _E(new PCGameKey(69, "E")), _F(new PCGameKey(70, "F")), _G(new PCGameKey(71, "G")), _H(new PCGameKey(72, "H")), _I(new PCGameKey(73, "I")), _J(new PCGameKey(74, "J")), _K(new PCGameKey(75, "K")), _L(new PCGameKey(76, "L")), _M(new PCGameKey(77, "M")), _N(new PCGameKey(78, "N")), _O(new PCGameKey(79, "O")), _P(new PCGameKey(80, "P")), _Q(new PCGameKey(81, "Q")), _R(new PCGameKey(82, "R")), _S(new PCGameKey(83, "S")), _T(new PCGameKey(84, "T")), _U(new PCGameKey(85, "U")), _V(new PCGameKey(86, "V")), _W(new PCGameKey(87, "W")), _X(new PCGameKey(88, "X")), _Y(new PCGameKey(89, "Y")), _Z(new PCGameKey(90, "Z")), a(new PCGameKey(97, "a")), b(new PCGameKey(98, "b")), c(new PCGameKey(99, "c")), d(new PCGameKey(100, "d")), e(new PCGameKey(101, "e")), f(new PCGameKey(102, "f")), g(new PCGameKey(103, "g")), h(new PCGameKey(104, "h")), i(new PCGameKey(105, "i")), j(new PCGameKey(106, "j")), k(new PCGameKey(107, "k")), l(new PCGameKey(108, "l")), m(new PCGameKey(109, "m")), n(new PCGameKey(110, "n")), o(new PCGameKey(111, "o")), p(new PCGameKey(112, "p")), q(new PCGameKey(113, "q")), r(new PCGameKey(114, "r")), s(new PCGameKey(115, "s")), t(new PCGameKey(116, "t")), u(new PCGameKey(117, "u")), v(new PCGameKey(118, "v")), w(new PCGameKey(119, "w")), x(new PCGameKey(120, PositionStrings::getInstance()->X)), y(new PCGameKey(121, PositionStrings::getInstance()->Y)), z(new PCGameKey(122, "z")), ZERO(new PCGameKey(48, CommonPhoneStrings::getInstance()->ZERO)), ONE(new PCGameKey(49, CommonPhoneStrings::getInstance()->ONE)), TWO(new PCGameKey(50, CommonPhoneStrings::getInstance()->TWO)), THREE(new PCGameKey(51, CommonPhoneStrings::getInstance()->THREE)), FOUR(new PCGameKey(52, CommonPhoneStrings::getInstance()->FOUR)), FIVE(new PCGameKey(53, CommonPhoneStrings::getInstance()->FIVE)), SIX(new PCGameKey(54, CommonPhoneStrings::getInstance()->SIX)), SEVEN(new PCGameKey(55, CommonPhoneStrings::getInstance()->SEVEN)), EIGHT(new PCGameKey(56, CommonPhoneStrings::getInstance()->EIGHT)), NINE(new PCGameKey(57, CommonPhoneStrings::getInstance()->NINE)), DPAD_UP(new PCGameKey(38, CommonPhoneStrings::getInstance()->UP)), DPAD_DOWN(new PCGameKey(40, CommonPhoneStrings::getInstance()->DOWN)), DPAD_LEFT(new PCGameKey(37, CommonPhoneStrings::getInstance()->LEFT)), DPAD_RIGHT(new PCGameKey(39, CommonPhoneStrings::getInstance()->RIGHT)), DPAD_UP2(this->DPAD_UP), DPAD_DOWN2(this->DPAD_DOWN), DPAD_LEFT2(this->DPAD_LEFT), DPAD_RIGHT2(this->DPAD_RIGHT), COMMA(new PCGameKey(44, "COMMA")), SPACE(new PCGameKey(32, "SPACE")), DEL(new PCGameKey(46, "DEL")), STAR(new PCGameKey(42, CommonPhoneStrings::getInstance()->STAR)), QUESTION(new PCGameKey(47, "?")), PERIOD(new PCGameKey(46, CommonSeps::getInstance()->PERIOD)), ESCAPE(new PCGameKey(27, "Esc")), BACK_SPACE(new PCGameKey(8, "Backspace")) {
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
