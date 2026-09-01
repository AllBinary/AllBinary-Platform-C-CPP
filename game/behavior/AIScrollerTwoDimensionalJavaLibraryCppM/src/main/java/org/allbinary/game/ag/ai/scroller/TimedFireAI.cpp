
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeFiredInterface.h"

class TimedFireAI: public BasicAI {

    public: static const Integer TIME = SmallIntegerSingletonFactory::getInstance().getAt(1);

    protected: const TimeDelayHelper maxFireDelayTimeHelper = TimeDelayHelper(0);

    private: int32_t delay;

public: TimedFireAI(int32_t delay, AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->delay= delay;
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager){

    TimeFiredInterface timeFiredInterface = this->getOwnerLayerInterface() as TimeFiredInterface;;
    

                        if(this->maxFireDelayTimeHelper.isTime(GameTickTimeDelayHelperFactory::getInstance().startTime) && timeFiredInterface.getLastFireTime() +this->maxFireDelayTimeHelper.delay < this->maxFireDelayTimeHelper.getStartTime())
                        
                                    {
                                    super.processKeyAI(Canvas::KEY_NUM1);
    
this->maxFireDelayTimeHelper.delay= this->delay;
    

                                    }
                                
}


};

            

