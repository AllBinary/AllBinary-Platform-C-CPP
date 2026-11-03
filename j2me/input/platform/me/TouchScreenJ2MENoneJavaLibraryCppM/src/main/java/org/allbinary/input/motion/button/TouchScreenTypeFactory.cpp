
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchScreenTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenFactory.h"


TouchScreenTypeFactory::TouchScreenTypeFactory() {
        }
        auto TouchScreenTypeFactory::instance_owner() -> TouchScreenTypeFactory* { static std::unique_ptr<TouchScreenTypeFactory> value(new TouchScreenTypeFactory()); return value.get(); }
TouchScreenTypeFactory* TouchScreenTypeFactory::instance = TouchScreenTypeFactory::instance_owner();

    auto TouchScreenTypeFactory::getInstance() -> TouchScreenTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TouchScreenTypeFactory::instance;
    
}


    auto TouchScreenTypeFactory::TouchScreenTypeFactory() -> void{

    TouchScreenFactory* touchScreenFactory = TouchScreenFactory::getInstance();;
    
touchScreenFactory->setTouch(false);
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENTYPEFACTORY_CPP
