
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/StartIntermissionProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


StartIntermissionProcessor::StartIntermissionProcessor(AllBinaryGameCanvas* gameCanvas) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->gameCanvas= gameCanvas;
    
}


                //@Throws(Exception.constructor)
            
    auto StartIntermissionProcessor::process() -> void{

                        if(this->gameCanvas->getStartIntermissionInterface()->getTimeDelayHelper()->isElapsedTNT(this->WAIT))
                        
                                    {
                                    this->logUtil->putF("Intermission End", this, this->commonStrings->PROCESS);
    
this->gameCanvas->getStartIntermissionInterface()->setEnabled(false);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPROCESSOR_CPP
