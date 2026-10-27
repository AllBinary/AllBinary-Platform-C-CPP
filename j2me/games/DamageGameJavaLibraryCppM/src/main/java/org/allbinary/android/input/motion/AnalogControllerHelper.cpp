
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/AnalogControllerHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/AnalogControllerConfigurationFactory.h"


AnalogControllerHelper::AnalogControllerHelper(int32_t reduceTimeFactor) : SCALE_VALUE(AnalogControllerConfigurationFactory::getInstance()->SCALE_VALUE), rightTimeElapsedHelper(new TimeDelayHelper(0)), leftTimeElapsedHelper(new TimeDelayHelper(0)), downTimeElapsedHelper(new TimeDelayHelper(0)), upTimeElapsedHelper(new TimeDelayHelper(0)){
this->reduceTimeFactor= reduceTimeFactor;
    
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerHelper::right(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) -> void{
this->rightTimeElapsedHelper->delay= ((this->SCALE_VALUE -xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->rightTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->right();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerHelper::left(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) -> void{
this->leftTimeElapsedHelper->delay= ((this->SCALE_VALUE +xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->leftTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->left();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerHelper::up(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) -> void{
this->upTimeElapsedHelper->delay= ((this->SCALE_VALUE -xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->upTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->up();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AnalogControllerHelper::down(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue) -> void{
this->downTimeElapsedHelper->delay= ((this->SCALE_VALUE +xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->downTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->down();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ANALOGCONTROLLERHELPER_CPP
