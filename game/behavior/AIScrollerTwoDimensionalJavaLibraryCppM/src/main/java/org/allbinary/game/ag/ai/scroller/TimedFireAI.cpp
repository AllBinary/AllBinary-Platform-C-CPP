
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/scroller/TimedFireAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/TimeFiredInterface.h"

int32_t TimedFireAI::TIME = SmallIntegerSingletonFactory::getInstance()->getAt(1);

TimedFireAI::TimedFireAI(int32_t delay, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput), maxFireDelayTimeHelper(new TimeDelayHelper(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->delay= delay;
    
}


                //@Throws(Exception.constructor)
            
    auto TimedFireAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    TimeFiredInterface* timeFiredInterface = dynamic_cast<TimeFiredInterface*>(this->getOwnerLayerInterface());;
    

                        if(this->maxFireDelayTimeHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime) && timeFiredInterface->getLastFireTime() +this->maxFireDelayTimeHelper->delay < this->maxFireDelayTimeHelper->getStartTime())
                        
                                    {
                                    BasicAI::processKeyAI(Canvas::KEY_NUM1);
    
this->maxFireDelayTimeHelper->delay= this->delay;
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_TIMEDFIREAI_CPP
