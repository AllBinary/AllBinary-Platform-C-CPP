
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"

auto TouchScreenFactory::SINGLETON_owner() -> TouchScreenFactory* { static std::unique_ptr<TouchScreenFactory> value(new TouchScreenFactory()); return value.get(); }
TouchScreenFactory* TouchScreenFactory::SINGLETON = TouchScreenFactory::SINGLETON_owner();

TouchScreenFactory::TouchScreenFactory() : touchScreenType(TouchScreenTypesFactory::getInstance()->NOTOUCH){
}


    auto TouchScreenFactory::getInstance() -> TouchScreenFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TouchScreenFactory::SINGLETON;
    
}


    auto TouchScreenFactory::isMultiTouch() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->multiTouch;
    
}


    auto TouchScreenFactory::setTouch(bool touch) -> void{
}


    auto TouchScreenFactory::isTouch() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touch;
    
}


    auto TouchScreenFactory::getTouchScreenType() -> TouchScreenType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->touchScreenType;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_CPP
