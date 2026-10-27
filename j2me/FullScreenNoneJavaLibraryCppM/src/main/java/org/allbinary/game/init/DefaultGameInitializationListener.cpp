
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_CPP
        #define ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/init/DefaultGameInitializationListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        

DefaultGameInitializationListener::DefaultGameInitializationListener() : logUtil(LogUtil::getInstance()), swtJOGLProcessor(SWTJOGLProcessor::getInstance()){

    GameInitializedEventHandler* gameInitializedEventHandler = GameInitializedEventHandler::getInstance();;
    
gameInitializedEventHandler->removeAllListeners();
    
gameInitializedEventHandler->addListenerInterface(dynamic_cast<GameInitializedListenerInterface*>(this));
    
}


    auto DefaultGameInitializationListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto DefaultGameInitializationListener::onGameInitialized(GameInitializedEvent* gameInitializedEvent) -> void{

    std::string ON_GAME_INITIALIZED = "onGameInitialized";;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

        try {
            this->logUtil->putF(commonStrings->START, this, ON_GAME_INITIALIZED);
    

        while(!this->swtJOGLProcessor->isHolderCreated())
        {
this->logUtil->putF(commonStrings->UPDATE, this, ON_GAME_INITIALIZED);
    
Thread::sleep(20);
    
}

FeatureResourceInitializationUtil::getInstance()->init(gameInitializedEvent->getLevel());
    

                        if(this->firstTime)
                        
                                    {
                                    this->firstTime= false;
    

                                    }
                                
                        else {
                            this->swtJOGLProcessor->onSurfaceChanged();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, ON_GAME_INITIALIZED, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_CPP
