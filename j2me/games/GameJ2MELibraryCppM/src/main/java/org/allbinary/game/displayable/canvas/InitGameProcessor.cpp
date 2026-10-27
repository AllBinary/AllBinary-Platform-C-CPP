
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2026 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/InitGameProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


InitGameProcessor::InitGameProcessor(AllBinaryGameCanvas* gameCanvas){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    auto InitGameProcessor::process() -> void{

                        if(ProgressCanvasFactory::getInstance()->isInGame())
                        
                                    {
                                    this->gameCanvas->setProcessGameProcessorInit();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_INITGAMEPROCESSOR_CPP
