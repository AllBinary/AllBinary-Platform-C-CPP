
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/scroller/RandomPatrolAI.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"


RandomPatrolAI::RandomPatrolAI(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasePatrolAI(hashtable, ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->updateRandomDistance();
    
}


    auto RandomPatrolAI::updateRandomDistance() -> void{
this->currentDistance= MyRandomFactory::getInstance()->getAbsoluteNextInt(this->maxDistance->intValue());
    
}


                //@Throws(Exception.constructor)
            
    auto RandomPatrolAI::processAI(AllBinaryLayerManager* allBinaryLayerManager) -> void{
BasePatrolAI::update();
    
BasePatrolAI::processKeyAI(this->keyDirection);
    

                        if(this->changedDirection)
                        
                                    {
                                    BasePatrolAI::processKeyAI(Canvas::KEY_NUM1);
    
this->updateRandomDistance();
    
this->changedDirection= false;
    

                                    }
                                
}


    auto RandomPatrolAI::nextDirection() -> void{
BasePatrolAI::nextDirection();
    
this->changedDirection= true;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_RANDOMPATROLAI_CPP
