
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/GameInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameInputProcessor::instance_owner() -> GameInputProcessor* { static std::unique_ptr<GameInputProcessor> value(new GameInputProcessor()); return value.get(); }
GameInputProcessor* GameInputProcessor::instance = GameInputProcessor::instance_owner();

    auto GameInputProcessor::getInstance() -> GameInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputProcessor::instance;
    
}


GameInputProcessor::GameInputProcessor(){
}


                //@Throws(Exception.constructor)
            
    auto GameInputProcessor::processEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameInputProcessor::processReleasedEvent(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameInputProcessor::processAnalog(AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameInputProcessor::process(AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) -> void{
}


                //@Throws(Exception.constructor)
            
    auto GameInputProcessor::processReleased(AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) -> void{
}




        #endif //ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_CPP
