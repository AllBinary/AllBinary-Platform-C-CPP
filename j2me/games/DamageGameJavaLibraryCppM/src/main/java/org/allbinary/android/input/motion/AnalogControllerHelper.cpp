
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

public constructor (int32_t reduceTimeFactor){

            super();
        this.reduceTimeFactor= reduceTimeFactor;
    
}


    private: const SCALE_VALUE: int32_t = AnalogControllerConfigurationFactory.getInstance()!.SCALE_VALUE;

    private: const rightTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const leftTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const downTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const upTimeElapsedHelper: TimeDelayHelper = new TimeDelayHelper(0);

                //@Throws(Exception.constructor)
            
    public right(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this.rightTimeElapsedHelper!.delay= ((this.SCALE_VALUE -xAnalogValue)>>this.reduceTimeFactor);
    

                        if(this.rightTimeElapsedHelper!.isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer!.right();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public left(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this.leftTimeElapsedHelper!.delay= ((this.SCALE_VALUE +xAnalogValue)>>this.reduceTimeFactor);
    

                        if(this.leftTimeElapsedHelper!.isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer!.left();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public up(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this.upTimeElapsedHelper!.delay= ((this.SCALE_VALUE -xAnalogValue)>>this.reduceTimeFactor);
    

                        if(this.upTimeElapsedHelper!.isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer!.up();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public down(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer, int32_t xAnalogValue){
this.downTimeElapsedHelper!.delay= ((this.SCALE_VALUE +xAnalogValue)>>this.reduceTimeFactor);
    

                        if(this.downTimeElapsedHelper!.isTimeTNT())
                        
                                    {
                                    collidableDestroyableDamageableLayer!.down();
    

                                    }
                                
}


};

            

