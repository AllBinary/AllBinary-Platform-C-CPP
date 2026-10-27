
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H
        #define ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ChangedGameFeatureListener;
class GameInitializedEvent;
class GameInitializedEventHandler;
class Features;
class MainFeatureFactory;
class ResourceLoadingLevelFactory;
class MyCanvas;
class AbeClientInformationInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameInitializationInterface;
class BasicBuildGameInitializerFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInitializationUtil
            : public virtual Object
         {

    private: static GameInitializationUtil* instance_owner();
    private: static GameInitializationUtil* instance;

    public: static GameInitializationUtil* getInstance();


            
    public: GameInitializationUtil();
        
    public: GameInitializedEvent* EVENT;

                //@Throws(Exception.constructor)
            
    public: void initDemo(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void initGame(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>)
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEvent.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>
#endif
#if __has_include(<org/allbinary/game/configuration/event/GameInitializedEventHandler.h>)
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/MainFeatureFactory.h>)
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include("org/allbinary/game/init/GameInitializationInterface.h")
#include "org/allbinary/game/init/GameInitializationInterface.h"
#endif
#if __has_include("org/allbinary/game/init/BasicBuildGameInitializerFactory.h")
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#endif

        #endif
    
