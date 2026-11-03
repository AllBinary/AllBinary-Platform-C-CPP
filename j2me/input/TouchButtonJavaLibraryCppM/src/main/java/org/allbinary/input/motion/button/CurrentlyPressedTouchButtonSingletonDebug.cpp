
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingletonDebug.h"
        

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


CurrentlyPressedTouchButtonSingletonDebug::CurrentlyPressedTouchButtonSingletonDebug() : string(StringUtil::getInstance()->EMPTY_STRING), listString(StringUtil::getInstance()->EMPTY_STRING), append_(StringUtil::getInstance()->EMPTY_STRING) {
        }
        auto CurrentlyPressedTouchButtonSingletonDebug::instanceC_owner() -> CurrentlyPressedTouchButtonSingletonDebug* { static std::unique_ptr<CurrentlyPressedTouchButtonSingletonDebug> value(new CurrentlyPressedTouchButtonSingletonDebug()); return value.get(); }
CurrentlyPressedTouchButtonSingletonDebug* CurrentlyPressedTouchButtonSingletonDebug::instanceC = CurrentlyPressedTouchButtonSingletonDebug::instanceC_owner();

    auto CurrentlyPressedTouchButtonSingletonDebug::getInstance() -> CurrentlyPressedTouchButtonSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CurrentlyPressedTouchButtonSingletonDebug::instanceC;
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::appendTouchButtonInput(std::string append_, TouchButtonInput* touchButtonInput) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(touchButtonInput->toString());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(append_);
    
this->append_= stringBuffer->toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::append(std::string append_) -> void{
this->append_= (new StringMaker())->append(this->append_).append(append_).toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::clearLog(int32_t x, int32_t y) -> void{
this->append_= (new StringMaker())->append(GPoint::toStringStatic(x, y, 0)).append(CommonSeps::getInstance()->SPACE).toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::releaseAndNotFired() -> void{
this->append(this->RELEASED_AND_NOT_FIRED);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::releaseAndFired(TouchButtonInput* touchButtonInput) -> void{
this->appendTouchButtonInput(this->RELEASED_AND_FIRED, touchButtonInput);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::releaseAndFired2(TouchButtonInput* touchButtonInput) -> void{
this->appendTouchButtonInput(this->RELEASED_AND_FIRED_2, touchButtonInput);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::releaseAndFiredAssociated(TouchButtonInput* touchButtonInput) -> void{
this->appendTouchButtonInput(this->ASSOCIATED_RELEASED_AND_FIRED, touchButtonInput);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::pressedAndFired(TouchButtonInput* touchButtonInput) -> void{
this->appendTouchButtonInput(this->PRESSED_AND_FIRED, touchButtonInput);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::pressedAndNotFired(TouchButtonInput* touchButtonInput) -> void{
this->appendTouchButtonInput(this->PRESSED_AND_NOT_FIRED, touchButtonInput);
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::removeAt(int32_t index) -> TouchButtonInput*{

    TouchButtonInput* touchButtonInput = CurrentlyPressedTouchButtonSingleton::removeAt(index);;
    
this->listString= this->list->toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return touchButtonInput;
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::remove(TouchButtonInput* touchButtonInput) -> bool{

    bool isRemoved = CurrentlyPressedTouchButtonSingleton::remove(touchButtonInput);;
    
this->listString= this->list->toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isRemoved;
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::add(TouchButtonInput* touchButtonInput) -> void{
CurrentlyPressedTouchButtonSingleton::add(touchButtonInput);
    
this->listString= this->list->toString();
    
this->string= (new StringMaker())->append(this->listString).append(this->append_).toString();
    
}


    auto CurrentlyPressedTouchButtonSingletonDebug::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->string;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_CPP
