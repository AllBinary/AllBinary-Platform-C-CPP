
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/DemoGameStartupRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ABRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/DemoCanvas.h"


DemoGameStartupRunnable::DemoGameStartupRunnable(DemoCanvas* demoCanvas) : logUtil(LogUtil::getInstance()){
this->demoCanvas= demoCanvas;
    
}


    auto DemoGameStartupRunnable::run() -> void{

        try {
            this->setRunning(true);
    
this->demoCanvas->stopGameDemo();
    
this->demoCanvas->create();
    
this->demoCanvas->start();
    
this->setRunning(false);
    

                //: 
} catch(Exception& e) 
            {
this->setRunning(false);
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


    auto DemoGameStartupRunnable::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DemoGameStartupRunnable::TYPE;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_CPP
