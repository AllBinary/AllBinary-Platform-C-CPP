
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/RunnableCanvasSingleThreadStartRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameRunnable.h"


RunnableCanvasSingleThreadStartRunnable::RunnableCanvasSingleThreadStartRunnable(RunnableCanvas* demoCanvas) : logUtil(LogUtil::getInstance()){
this->runnableCanvas= demoCanvas;
    
}


    auto RunnableCanvasSingleThreadStartRunnable::run() -> void{

        try {
            this->runnableCanvas->run();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto RunnableCanvasSingleThreadStartRunnable::processLoopSleep() -> void{
this->runnableCanvas->processLoopSleep();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_CPP
