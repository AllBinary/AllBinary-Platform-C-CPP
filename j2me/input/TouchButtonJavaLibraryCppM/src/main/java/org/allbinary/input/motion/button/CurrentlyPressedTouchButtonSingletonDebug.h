
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingletonDebug: public CurrentlyPressedTouchButtonSingleton {

    private: static CurrentlyPressedTouchButtonSingletonDebug* instanceC() { static std::unique_ptr<CurrentlyPressedTouchButtonSingletonDebug> value(new CurrentlyPressedTouchButtonSingletonDebug()); return value.get(); }

    public: static CurrentlyPressedTouchButtonSingleton* getInstance();

    private: std::string string = StringUtil::getInstance()->EMPTY_STRING;

    private: std::string listString = StringUtil::getInstance()->EMPTY_STRING;

    private: std::string append = StringUtil::getInstance()->EMPTY_STRING;

    private: const std::string PRESSED_AND_FIRED = "pressed & fired";

    private: const std::string PRESSED_AND_NOT_FIRED = "pressed in button but not fired";

    private: const std::string ASSOCIATED_RELEASED_AND_FIRED = "assoc. rel & fired";

    private: const std::string RELEASED_AND_FIRED = "rel & fired 1";

    private: const std::string RELEASED_AND_FIRED_2 = "rel & fired 2";

    private: const std::string RELEASED_AND_NOT_FIRED = "rel & not fired";

    private: void appendTouchButtonInput(std::string append, TouchButtonInput* touchButtonInput);

    private: void append(std::string append);

    public: void clearLog(int32_t x, int32_t y);

    public: void releaseAndNotFired();

    public: void releaseAndFired(TouchButtonInput* touchButtonInput);

    public: void releaseAndFired2(TouchButtonInput* touchButtonInput);

    public: void releaseAndFiredAssociated(TouchButtonInput* touchButtonInput);

    public: void pressedAndFired(TouchButtonInput* touchButtonInput);

    public: void pressedAndNotFired(TouchButtonInput* touchButtonInput);

    public: TouchButtonInput* removeAt(int32_t index);

    public: bool remove(TouchButtonInput* touchButtonInput);

    public: void add(TouchButtonInput* touchButtonInput);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
