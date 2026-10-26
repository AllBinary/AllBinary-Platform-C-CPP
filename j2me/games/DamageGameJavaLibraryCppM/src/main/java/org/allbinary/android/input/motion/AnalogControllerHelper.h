
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogControllerConfigurationFactory.h"

class AnalogControllerHelper
            : public Object
         {

    private: int32_t reduceTimeFactor;

public: AnalogControllerHelper(int32_t reduceTimeFactor);

    private: const int32_t SCALE_VALUE = AnalogControllerConfigurationFactory::getInstance().SCALE_VALUE;

    private: const TimeDelayHelper rightTimeElapsedHelper = TimeDelayHelper(0);

    private: const TimeDelayHelper leftTimeElapsedHelper = TimeDelayHelper(0);

    private: const TimeDelayHelper downTimeElapsedHelper = TimeDelayHelper(0);

    private: const TimeDelayHelper upTimeElapsedHelper = TimeDelayHelper(0);

                //@Throws(Exception.constructor)
            
    public: void right(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void left(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void up(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public: void down(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
