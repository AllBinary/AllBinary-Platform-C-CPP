
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GPoint;
class StringMaker;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
class TouchButtonInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CurrentlyPressedTouchButtonSingletonDebug: public CurrentlyPressedTouchButtonSingleton {

    private: static CurrentlyPressedTouchButtonSingletonDebug* instanceC_owner();
    private: static CurrentlyPressedTouchButtonSingletonDebug* instanceC;

    public: static CurrentlyPressedTouchButtonSingleton* getInstance();


            
    public: CurrentlyPressedTouchButtonSingletonDebug();
        
    private: std::string string;

    private: std::string listString;

    private: std::string append_;

    private: const std::string PRESSED_AND_FIRED = "pressed & fired";

    private: const std::string PRESSED_AND_NOT_FIRED = "pressed in button but not fired";

    private: const std::string ASSOCIATED_RELEASED_AND_FIRED = "assoc. rel & fired";

    private: const std::string RELEASED_AND_FIRED = "rel & fired 1";

    private: const std::string RELEASED_AND_FIRED_2 = "rel & fired 2";

    private: const std::string RELEASED_AND_NOT_FIRED = "rel & not fired";

    private: void appendTouchButtonInput(std::string append_, TouchButtonInput* touchButtonInput);

    private: void append(std::string append_);

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h")
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonInput.h")
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#endif

        #endif
    
