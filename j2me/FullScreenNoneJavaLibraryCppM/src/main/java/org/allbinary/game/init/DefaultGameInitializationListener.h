
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H
        #define ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H

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

public: DefaultGameInitializationListener();

    public: void onEvent(AllBinaryEventObject eventObject);

    bool firstTime = true;

    public: void onGameInitialized(GameInitializedEvent gameInitializedEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H
