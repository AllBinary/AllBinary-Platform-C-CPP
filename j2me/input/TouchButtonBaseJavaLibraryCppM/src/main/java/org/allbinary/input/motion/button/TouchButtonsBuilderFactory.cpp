
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/button/TouchButtonsBuilderFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/NoButtonsTouchInputFactory.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"


TouchButtonsBuilderFactory::TouchButtonsBuilderFactory() {
        }
        auto TouchButtonsBuilderFactory::NO_TOUCH_BUTTON_BUILDER_FACTORY_owner() -> TouchButtonsBuilderFactory* { static std::unique_ptr<TouchButtonsBuilderFactory> value(new TouchButtonsBuilderFactory()); return value.get(); }
TouchButtonsBuilderFactory* TouchButtonsBuilderFactory::NO_TOUCH_BUTTON_BUILDER_FACTORY = TouchButtonsBuilderFactory::NO_TOUCH_BUTTON_BUILDER_FACTORY_owner();

    auto TouchButtonsBuilderFactory::getInstance() -> BaseTouchInput*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoButtonsTouchInputFactory::getInstance();;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSBUILDERFACTORY_CPP
