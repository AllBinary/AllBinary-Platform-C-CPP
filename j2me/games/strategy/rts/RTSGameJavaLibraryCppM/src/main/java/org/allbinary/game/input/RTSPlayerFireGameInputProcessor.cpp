
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_RTSPLAYERFIREGAMEINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_INPUT_RTSPLAYERFIREGAMEINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/RTSPlayerFireGameInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/RTSPlayerGameInputProcessor.h"
#include "org/allbinary/game/input/RTSPlayerGameInput.h"


RTSPlayerFireGameInputProcessor::RTSPlayerFireGameInputProcessor(RTSPlayerGameInput* rtsPlayerGameInput) : RTSPlayerGameInputProcessor(rtsPlayerGameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto RTSPlayerFireGameInputProcessor::processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) -> void{
this->rtsPlayerGameInput->addForRemoval(gameKeyEvent);
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_RTSPLAYERFIREGAMEINPUTPROCESSOR_CPP
