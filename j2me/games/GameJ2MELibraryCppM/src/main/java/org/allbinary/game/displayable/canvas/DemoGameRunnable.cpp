
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

class DemoGameRunnable: public GameRunnable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: DemoCanvas* demoCanvas;

public: DemoGameRunnable(DemoCanvas* demoCanvas){
this->demoCanvas= demoCanvas;
    
}


    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    public: void run(){

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
            
    public: void processLoopSleep(){
this->demoCanvas->processLoopSleep();
    
}


};

            

