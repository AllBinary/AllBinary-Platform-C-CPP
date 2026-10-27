
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CollidableDestroyableDamageableLayer;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AnalogControllerConfigurationFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnalogControllerHelper
            : public virtual Object
         {

    private: int32_t reduceTimeFactor;

public: AnalogControllerHelper(int32_t reduceTimeFactor);

    private: const int32_t SCALE_VALUE;

    private: TimeDelayHelper* rightTimeElapsedHelper;

    private: TimeDelayHelper* leftTimeElapsedHelper;

    private: TimeDelayHelper* downTimeElapsedHelper;

    private: TimeDelayHelper* upTimeElapsedHelper;

                //@Throws(Exception.constructor)
            
    public: void right(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void left(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void up(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void down(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include("org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h")
#include "org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h"
#endif

        #endif
    
