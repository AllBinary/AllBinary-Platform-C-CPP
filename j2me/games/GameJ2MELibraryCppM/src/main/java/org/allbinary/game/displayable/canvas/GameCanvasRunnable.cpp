
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameRunnable.h"
#include "AllBinaryGameCanvas.h"

class GameCanvasRunnable: public GameRunnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GameTickDisplayInfoSingleton gameTickDisplayInfoSingleton = GameTickDisplayInfoSingleton::getInstance();

    private: AllBinaryGameCanvas allBinaryGameCanvas;

public: GameCanvasRunnable(AllBinaryGameCanvas allBinaryGameCanvas){
this->allBinaryGameCanvas= allBinaryGameCanvas;
    
}


    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    public: void run(){

        try {
            this->allBinaryGameCanvas.getLoopTimeHelperP().setStartTime(this->gameTickTimeDelayHelper.setStartTime());
    
this->gameTickDisplayInfoSingleton.update();
    
this->allBinaryGameCanvas.processGame();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.RUN, e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processLoopSleep(){
this->allBinaryGameCanvas.processLoopSleep();
    
}


};

            

