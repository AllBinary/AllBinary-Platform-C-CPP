
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/AndroidKeyFactory.h"
        

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


AndroidKeyFactory::AndroidKeyFactory() : logUtil(LogUtil::getInstance()), UNKNOWN(new AndroidGameKey(KeyEvent::KEYCODE_UNKNOWN, "UNKNOWN")), KEYCODE_BUTTON_L1(this->UNKNOWN), KEYCODE_BUTTON_R1(this->UNKNOWN), KEYCODE_BUTTON_THUMBR(this->UNKNOWN), KEYCODE_BUTTON_THUMBL(this->UNKNOWN), KEYCODE_BUTTON_START(this->UNKNOWN), KEYCODE_BUTTON_MODE(this->UNKNOWN), KEYCODE_BUTTON_B(this->UNKNOWN), KEYCODE_BUTTON_A(this->UNKNOWN), KEYCODE_BUTTON_X(this->UNKNOWN), KEYCODE_BUTTON_Y(this->UNKNOWN), KEYCODE_BUTTON_L2(this->UNKNOWN), KEYCODE_BUTTON_R2(this->UNKNOWN), KEYCODE_BUTTON_SELECT(this->UNKNOWN), KEYCODE_BUTTON_C(this->UNKNOWN), KEYCODE_BUTTON_Z(this->UNKNOWN), KEYCODE_BUTTON_1(this->UNKNOWN), KEYCODE_BUTTON_10(this->UNKNOWN), KEYCODE_BUTTON_11(this->UNKNOWN), KEYCODE_BUTTON_12(this->UNKNOWN), KEYCODE_BUTTON_13(this->UNKNOWN), KEYCODE_BUTTON_14(this->UNKNOWN), KEYCODE_BUTTON_15(this->UNKNOWN), KEYCODE_BUTTON_16(this->UNKNOWN), KEYCODE_BUTTON_2(this->UNKNOWN), KEYCODE_BUTTON_3(this->UNKNOWN), KEYCODE_BUTTON_4(this->UNKNOWN), KEYCODE_BUTTON_5(this->UNKNOWN), KEYCODE_BUTTON_6(this->UNKNOWN), KEYCODE_BUTTON_7(this->UNKNOWN), KEYCODE_BUTTON_8(this->UNKNOWN), KEYCODE_BUTTON_9(this->UNKNOWN), SOFT_LEFT(new AndroidGameKey(KeyEvent::KEYCODE_SOFT_LEFT, "SOFT_LEFT")), SOFT_RIGHT(new AndroidGameKey(KeyEvent::KEYCODE_SOFT_RIGHT, "SOFT_RIGHT")), HOME(new AndroidGameKey(KeyEvent::KEYCODE_HOME, "HOME")), BACK(new AndroidGameKey(KeyEvent::KEYCODE_BACK, "BACK")), CALL(new AndroidGameKey(KeyEvent::KEYCODE_CALL, "CALL")), ENDCALL(new AndroidGameKey(KeyEvent::KEYCODE_ENDCALL, "ENDCALL")), ZERO(new AndroidGameKey(KeyEvent::KEYCODE_0, CommonPhoneStrings::getInstance()->ZERO)), ONE(new AndroidGameKey(KeyEvent::KEYCODE_1, CommonPhoneStrings::getInstance()->ONE)), TWO(new AndroidGameKey(KeyEvent::KEYCODE_2, CommonPhoneStrings::getInstance()->TWO)), THREE(new AndroidGameKey(KeyEvent::KEYCODE_3, CommonPhoneStrings::getInstance()->THREE)), FOUR(new AndroidGameKey(KeyEvent::KEYCODE_4, CommonPhoneStrings::getInstance()->FOUR)), FIVE(new AndroidGameKey(KeyEvent::KEYCODE_5, CommonPhoneStrings::getInstance()->FIVE)), SIX(new AndroidGameKey(KeyEvent::KEYCODE_6, CommonPhoneStrings::getInstance()->SIX)), SEVEN(new AndroidGameKey(KeyEvent::KEYCODE_7, CommonPhoneStrings::getInstance()->SEVEN)), EIGHT(new AndroidGameKey(KeyEvent::KEYCODE_8, CommonPhoneStrings::getInstance()->EIGHT)), NINE(new AndroidGameKey(KeyEvent::KEYCODE_9, CommonPhoneStrings::getInstance()->NINE)), STAR(new AndroidGameKey(KeyEvent::KEYCODE_STAR, CommonPhoneStrings::getInstance()->STAR)), POUND(new AndroidGameKey(KeyEvent::KEYCODE_POUND, CommonPhoneStrings::getInstance()->POUND)), DPAD_UP(new AndroidGameKey(KeyEvent::KEYCODE_DPAD_UP, "UP")), DPAD_DOWN(new AndroidGameKey(KeyEvent::KEYCODE_DPAD_DOWN, "DOWN")), DPAD_LEFT(new AndroidGameKey(KeyEvent::KEYCODE_DPAD_LEFT, "LEFT")), DPAD_RIGHT(new AndroidGameKey(KeyEvent::KEYCODE_DPAD_RIGHT, "RIGHT")), DPAD_CENTER(new AndroidGameKey(KeyEvent::KEYCODE_DPAD_CENTER, "CENTER")), VOLUME_UP(new AndroidGameKey(KeyEvent::KEYCODE_VOLUME_UP, "VOLUME_UP")), VOLUME_DOWN(new AndroidGameKey(KeyEvent::KEYCODE_VOLUME_DOWN, "VOLUME_DOWN")), POWER(new AndroidGameKey(KeyEvent::KEYCODE_POWER, "POWER")), CAMERA(new AndroidGameKey(KeyEvent::KEYCODE_CAMERA, "CAMERA")), CLEAR(new AndroidGameKey(KeyEvent::KEYCODE_CLEAR, "CLEAR")), A(new AndroidGameKey(KeyEvent::KEYCODE_A, "A")), B(new AndroidGameKey(KeyEvent::KEYCODE_B, "B")), C(new AndroidGameKey(KeyEvent::KEYCODE_C, "C")), D(new AndroidGameKey(KeyEvent::KEYCODE_D, "D")), E(new AndroidGameKey(KeyEvent::KEYCODE_E, "E")), F(new AndroidGameKey(KeyEvent::KEYCODE_F, "F")), G(new AndroidGameKey(KeyEvent::KEYCODE_G, "G")), H(new AndroidGameKey(KeyEvent::KEYCODE_H, "H")), I(new AndroidGameKey(KeyEvent::KEYCODE_I, "I")), J(new AndroidGameKey(KeyEvent::KEYCODE_J, "J")), K(new AndroidGameKey(KeyEvent::KEYCODE_K, "K")), L(new AndroidGameKey(KeyEvent::KEYCODE_L, "L")), M(new AndroidGameKey(KeyEvent::KEYCODE_M, "M")), N(new AndroidGameKey(KeyEvent::KEYCODE_N, "N")), O(new AndroidGameKey(KeyEvent::KEYCODE_O, "O")), P(new AndroidGameKey(KeyEvent::KEYCODE_P, "P")), Q(new AndroidGameKey(KeyEvent::KEYCODE_Q, "Q")), R(new AndroidGameKey(KeyEvent::KEYCODE_R, "R")), S(new AndroidGameKey(KeyEvent::KEYCODE_S, "S")), T(new AndroidGameKey(KeyEvent::KEYCODE_T, "T")), U(new AndroidGameKey(KeyEvent::KEYCODE_U, "U")), V(new AndroidGameKey(KeyEvent::KEYCODE_V, "V")), W(new AndroidGameKey(KeyEvent::KEYCODE_W, "W")), X(new AndroidGameKey(KeyEvent::KEYCODE_X, "X")), Y(new AndroidGameKey(KeyEvent::KEYCODE_Y, "Y")), Z(new AndroidGameKey(KeyEvent::KEYCODE_Z, "Z")), COMMA(new AndroidGameKey(KeyEvent::KEYCODE_COMMA, "COMMA")), PERIOD(new AndroidGameKey(KeyEvent::KEYCODE_PERIOD, AbPathData::getInstance()->EXTENSION_SEP)), ALT_LEFT(new AndroidGameKey(KeyEvent::KEYCODE_ALT_LEFT, "ALT_LEFT")), ALT_RIGHT(new AndroidGameKey(KeyEvent::KEYCODE_ALT_RIGHT, "ALT_RIGHT")), SHIFT_LEFT(new AndroidGameKey(KeyEvent::KEYCODE_SHIFT_LEFT, "SHIFT_LEFT")), SHIFT_RIGHT(new AndroidGameKey(KeyEvent::KEYCODE_SHIFT_RIGHT, "SHIFT_RIGHT")), TAB(new AndroidGameKey(KeyEvent::KEYCODE_TAB, "TAB")), SPACE(new AndroidGameKey(KeyEvent::KEYCODE_SPACE, "SPACE")), SYM(new AndroidGameKey(KeyEvent::KEYCODE_SYM, "SYM")), EXPLORER(new AndroidGameKey(KeyEvent::KEYCODE_EXPLORER, "EXPLORER")), ENVELOPE(new AndroidGameKey(KeyEvent::KEYCODE_ENVELOPE, "ENVELOPE")), ENTER(new AndroidGameKey(KeyEvent::KEYCODE_ENTER, "ENTER")), DEL(new AndroidGameKey(KeyEvent::KEYCODE_DEL, "DEL")), GRAVE(new AndroidGameKey(KeyEvent::KEYCODE_GRAVE, "GRAVE")), MINUS(new AndroidGameKey(KeyEvent::KEYCODE_MINUS, "MINUS")), EQUALS(new AndroidGameKey(KeyEvent::KEYCODE_EQUALS, "EQUALS")), LEFT_BRACKET(new AndroidGameKey(KeyEvent::KEYCODE_LEFT_BRACKET, "LEFT_BRACKET")), RIGHT_BRACKET(new AndroidGameKey(KeyEvent::KEYCODE_RIGHT_BRACKET, "RIGHT_BRACKET")), BACKSLASH(new AndroidGameKey(KeyEvent::KEYCODE_BACKSLASH, "BACKSLASH")), SEMICOLON(new AndroidGameKey(KeyEvent::KEYCODE_SEMICOLON, "SEMICOLON")), APOSTROPHE(new AndroidGameKey(KeyEvent::KEYCODE_APOSTROPHE, "APOSTROPHE")), SLASH(new AndroidGameKey(KeyEvent::KEYCODE_SLASH, "SLASH")), AT(new AndroidGameKey(KeyEvent::KEYCODE_AT, "AT")), NUM(new AndroidGameKey(KeyEvent::KEYCODE_NUM, "NUM")), HEADSETHOOK(new AndroidGameKey(KeyEvent::KEYCODE_HEADSETHOOK, "HEADSETHOOK")), FOCUS(new AndroidGameKey(KeyEvent::KEYCODE_FOCUS, "FOCUS")), PLUS(new AndroidGameKey(KeyEvent::KEYCODE_PLUS, "PLUS")), MENU(new AndroidGameKey(KeyEvent::KEYCODE_MENU, "MENU")), NOTIFICATION(new AndroidGameKey(KeyEvent::KEYCODE_NOTIFICATION, "NOTIFICATION")), SEARCH(new AndroidGameKey(KeyEvent::KEYCODE_SEARCH, "SEARCH")) {
        }
        
    auto AndroidKeyFactory::init() -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF("Start/End", this, commonStrings->INIT);
    
}


    auto AndroidKeyFactory::isSubmission(Input* input) -> bool{

                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this->DPAD_CENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isDelete(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isBackSpace(Input* input) -> bool{

                        if(input == this->DEL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isLeft(Input* input) -> bool{

                        if(input == this->DPAD_LEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isRight(Input* input) -> bool{

                        if(input == this->DPAD_RIGHT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isUp(Input* input) -> bool{

                        if(input == this->DPAD_UP)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isDown(Input* input) -> bool{

                        if(input == this->DPAD_DOWN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto AndroidKeyFactory::isEnter(Input* input) -> bool{

                        if(input == this->DPAD_CENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this->ENTER)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                             else 
                        if(input == this->CALL)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_ANDROIDKEYFACTORY_CPP
