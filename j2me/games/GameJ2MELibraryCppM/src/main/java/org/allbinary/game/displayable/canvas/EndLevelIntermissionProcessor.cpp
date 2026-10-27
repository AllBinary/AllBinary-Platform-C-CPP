
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/EndLevelIntermissionProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


EndLevelIntermissionProcessor::EndLevelIntermissionProcessor(AllBinaryGameCanvas* gameCanvas){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    auto EndLevelIntermissionProcessor::process() -> void{
this->gameCanvas->processEndLevelIntermissionGameState();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDLEVELINTERMISSIONPROCESSOR_CPP
