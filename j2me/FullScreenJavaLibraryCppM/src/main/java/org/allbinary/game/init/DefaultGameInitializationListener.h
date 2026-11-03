
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class CommonStrings;
class ForcedLogUtil;
class LogUtil;
class GameInitializedEvent;
class GameInitializedEventHandler;
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
class FeatureResourceInitializationUtil;
class SWTJOGLProcessor;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DefaultGameInitializationListener
            : public virtual Object
        , public virtual GameInitializedListenerInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: SWTJOGLProcessor* swtJOGLProcessor;

public: DefaultGameInitializationListener();

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: bool firstTime = true;

    public: void onGameInitialized(GameInitializedEvent* gameInitializedEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEvent.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEventHandler.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>)
#include <org/allbinary/game/configuration/event/GameInitializedListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/resource/FeatureResourceInitializationUtil.h>)
#include <org/allbinary/game/resource/FeatureResourceInitializationUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/SWTJOGLProcessor.h>)
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif

        #endif
    
