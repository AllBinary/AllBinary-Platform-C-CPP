
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

class AnalogControllerHelper
            : public Object
         {

    private: int32_t reduceTimeFactor;

public: AnalogControllerHelper(int32_t reduceTimeFactor){
this->reduceTimeFactor= reduceTimeFactor;
    
}


    private: const int32_t SCALE_VALUE = AnalogControllerConfigurationFactory::getInstance()->SCALE_VALUE;

    private: TimeDelayHelper* rightTimeElapsedHelper = new TimeDelayHelper(0);

    private: TimeDelayHelper* leftTimeElapsedHelper = new TimeDelayHelper(0);

    private: TimeDelayHelper* downTimeElapsedHelper = new TimeDelayHelper(0);

    private: TimeDelayHelper* upTimeElapsedHelper = new TimeDelayHelper(0);

                //@Throws(Exception.constructor)
            
    public: void right(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this->rightTimeElapsedHelper->delay= ((this->SCALE_VALUE -xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->rightTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->right();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void left(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this->leftTimeElapsedHelper->delay= ((this->SCALE_VALUE +xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->leftTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->left();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void up(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this->upTimeElapsedHelper->delay= ((this->SCALE_VALUE -xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->upTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->up();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void down(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this->downTimeElapsedHelper->delay= ((this->SCALE_VALUE +xAnalogValue)>>this->reduceTimeFactor);
    

                        if(this->downTimeElapsedHelper->isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer->down();
    

                                    }
                                
}


};

            

