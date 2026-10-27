
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AnalogControllerConfigurationEvent;
class AnalogControllerConfigurationEventHandler;
class ScaleFactorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogControllerConfigurationFactory
            : public virtual Object
         {

    private: static AnalogControllerConfigurationFactory* instance_owner();
    private: static AnalogControllerConfigurationFactory* instance;

    public: static AnalogControllerConfigurationFactory* getInstance();

    public: const int32_t SCALE_FACTOR;

    public: const int32_t SCALE_VALUE;

    private: bool available= false;

    private: AnalogControllerConfigurationEvent* analogControllerConfigurationEvent;

private: AnalogControllerConfigurationFactory();

    public: bool isAvailable();

                //@Throws(Exception.constructor)
            
    public: void setAvailable(bool available);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERCONFIGURATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h>)
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEvent.h>
#endif
#if __has_include(<org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h>)
#include <org/allbinary/android/input/motion/event/AnalogControllerConfigurationEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/math/ScaleFactorFactory.h>)
#include <org/allbinary/logic/math/ScaleFactorFactory.h>
#endif

        #endif
    
