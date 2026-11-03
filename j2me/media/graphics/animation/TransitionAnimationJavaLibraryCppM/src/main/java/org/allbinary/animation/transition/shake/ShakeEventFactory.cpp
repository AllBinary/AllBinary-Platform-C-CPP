
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/transition/shake/ShakeEventFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/transition/shake/ShakeEvent.h"


ShakeEventFactory::ShakeEventFactory() : MICRO(new ShakeEvent()), SMALL(new ShakeEvent()), MEDIUM(new ShakeEvent()), LARGE(new ShakeEvent()) {
        }
        auto ShakeEventFactory::instance_owner() -> ShakeEventFactory* { static std::unique_ptr<ShakeEventFactory> value(new ShakeEventFactory()); return value.get(); }
ShakeEventFactory* ShakeEventFactory::instance = ShakeEventFactory::instance_owner();

    auto ShakeEventFactory::getInstance() -> ShakeEventFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ShakeEventFactory::instance;
    
}


    auto ShakeEventFactory::init() -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEEVENTFACTORY_CPP
