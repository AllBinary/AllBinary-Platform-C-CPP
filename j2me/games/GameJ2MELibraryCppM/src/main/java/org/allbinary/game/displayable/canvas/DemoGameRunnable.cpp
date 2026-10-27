
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/DemoGameRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"


DemoGameRunnable::DemoGameRunnable(DemoCanvas* demoCanvas) : logUtil(LogUtil::getInstance()), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()){
this->demoCanvas= demoCanvas;
    
}


    auto DemoGameRunnable::run() -> void{

        try {
            this->demoCanvas->getLoopTimeHelperP()->setStartTime(this->gameTickTimeDelayHelper->setStartTime());
    
this->demoCanvas->processGame();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto DemoGameRunnable::processLoopSleep() -> void{
this->demoCanvas->processLoopSleep();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_CPP
