
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>

      
#include <org/allbinary/game/resource/FeatureResourceInitializationUtil.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DefaultGameInitializationListener
            : public Object
        : public GameInitializedListenerInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const SWTJOGLProcessor swtJOGLProcessor = SWTJOGLProcessor::getInstance();

public: DefaultGameInitializationListener(){

    GameInitializedEventHandler gameInitializedEventHandler = GameInitializedEventHandler::getInstance();;
    
gameInitializedEventHandler.removeAllListeners();
    
gameInitializedEventHandler.addListenerInterface(this);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    bool firstTime = true;

    public: void onGameInitialized(GameInitializedEvent gameInitializedEvent){

    std::string ON_GAME_INITIALIZED = "onGameInitialized";;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    

        try {
            this->logUtil.putF(commonStrings.START, this, ON_GAME_INITIALIZED);
    

        while(!this->swtJOGLProcessor.isHolderCreated())
        {
this->logUtil.putF(commonStrings.UPDATE, this, ON_GAME_INITIALIZED);
    
Thread::sleep(20);
    
}

FeatureResourceInitializationUtil::getInstance().init(gameInitializedEvent.getLevel());
    

                        if(this->firstTime)
                        
                                    {
                                    this->firstTime= false;
    

                                    }
                                
                        else {
                            this->swtJOGLProcessor.onSurfaceChanged();
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(commonStrings.EXCEPTION, this, ON_GAME_INITIALIZED, e);
    
}

}


};

            

