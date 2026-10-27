
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h>

      
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AnalogControllerConfigurationFactory::instance_owner() -> AnalogControllerConfigurationFactory* { static std::unique_ptr<AnalogControllerConfigurationFactory> value(new AnalogControllerConfigurationFactory()); return value.get(); }
AnalogControllerConfigurationFactory* AnalogControllerConfigurationFactory::instance = AnalogControllerConfigurationFactory::instance_owner();

    auto AnalogControllerConfigurationFactory::getInstance() -> AnalogControllerConfigurationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AnalogControllerConfigurationFactory::instance;
    
}


AnalogControllerConfigurationFactory::AnalogControllerConfigurationFactory() : SCALE_FACTOR(ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR), SCALE_VALUE(ScaleFactorFactory::getInstance()->DEFAULT_SCALE_VALUE), analogControllerConfigurationEvent(new AnalogControllerConfigurationEvent(this)){
}


    auto AnalogControllerConfigurationFactory::isAvailable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->available;
    
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerConfigurationFactory::setAvailable(bool available) -> void{
this->available= available;
    
AnalogControllerConfigurationEventHandler::getInstance()->fireEvent(this->analogControllerConfigurationEvent);
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_CPP
