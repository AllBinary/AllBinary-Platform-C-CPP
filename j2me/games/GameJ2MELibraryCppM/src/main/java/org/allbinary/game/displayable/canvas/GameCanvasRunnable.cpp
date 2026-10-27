
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
        
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"

class GameCanvasRunnable: public GameRunnable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton::getInstance();

    private: AllBinaryGameCanvas* allBinaryGameCanvas;

public: GameCanvasRunnable(AllBinaryGameCanvas* allBinaryGameCanvas){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    public: void run(){

        try {
            this->allBinaryGameCanvas->getLoopTimeHelperP()->setStartTime(this->gameTickTimeDelayHelper->setStartTime());
    
this->gameTickDisplayInfoSingleton->update();
    
this->allBinaryGameCanvas->processGame();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processLoopSleep(){
this->allBinaryGameCanvas->processLoopSleep();
    
}


};

            

