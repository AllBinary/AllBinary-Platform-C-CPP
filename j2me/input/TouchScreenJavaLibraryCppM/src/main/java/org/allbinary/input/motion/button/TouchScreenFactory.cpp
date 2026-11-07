
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchScreenFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"

auto TouchScreenFactory::SINGLETON_owner() -> TouchScreenFactory* { static std::unique_ptr<TouchScreenFactory> value(new TouchScreenFactory()); return value.get(); }
TouchScreenFactory* TouchScreenFactory::SINGLETON = TouchScreenFactory::SINGLETON_owner();

TouchScreenFactory::TouchScreenFactory() : logUtil(LogUtil::getInstance()), touchScreenType(TouchScreenTypesFactory::getInstance()->NOTOUCH){

        try {
            this->setTouch(true);
    
this->setMultiTouch(false);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, TouchScreenFactory::SINGLETON, commonStrings->GET_INSTANCE, &e);
    
}

}


    auto TouchScreenFactory::getInstance() -> TouchScreenFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TouchScreenFactory::SINGLETON;
    
}


    auto TouchScreenFactory::setMultiTouch(bool multiTouch) -> void{
this->multiTouch= multiTouch;
    
}


    auto TouchScreenFactory::isMultiTouch() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->multiTouch;
    
}


    auto TouchScreenFactory::setTouch(bool touch) -> void{
this->touch= touch;
    
}


    auto TouchScreenFactory::isTouch() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touch;
    
}


    auto TouchScreenFactory::setMultiTouchDistinct(bool multiTouchDistinct) -> void{
this->multiTouchDistinct= multiTouchDistinct;
    
}


    auto TouchScreenFactory::isMultiTouchDistinct() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->multiTouchDistinct;
    
}


    auto TouchScreenFactory::setTouchScreenType(TouchScreenType* touchScreenType) -> void{
this->touchScreenType= touchScreenType;
    
}


    auto TouchScreenFactory::getTouchScreenType() -> TouchScreenType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touchScreenType;
    
}


    auto TouchScreenFactory::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("TouchScreen: ");
    
stringBuffer->appendboolean(this->isTouch());
    
stringBuffer->append(" MultiTouch: ");
    
stringBuffer->appendboolean(this->isMultiTouch());
    
stringBuffer->append(" Distinct MultiTouch: ");
    
stringBuffer->appendboolean(this->isMultiTouchDistinct());
    
stringBuffer->append(" TouchScreenType: ");
    
stringBuffer->append(StringUtil::getInstance()->toString(this->getTouchScreenType()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_CPP
