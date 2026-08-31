
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnalogControllerConfigurationFactory.h"

class AnalogControllerHelper
            : public Object
         {
        

    private: const reduceTimeFactor: int32_t;

public constructor (int32_t reduceTimeFactor);

    private: const SCALE_VALUE: int32_t = AnalogControllerConfigurationFactory.getInstance()!.SCALE_VALUE;

    private: const rightTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const leftTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const downTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const upTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

                //@Throws(Exception.constructor)
            
    public right(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public left(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public up(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

                //@Throws(Exception.constructor)
            
    public down(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_H
