
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEvent.h>

      
#include <org/allbinary/game/configuration/event/GameInitializedEventHandler.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/MainFeatureFactory.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/init/GameInitializationInterface.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"

class GameInitializationUtil
            : public Object
         {

    private: static GameInitializationUtil* instance() { static std::unique_ptr<GameInitializationUtil> value(new GameInitializationUtil()); return value.get(); }

    public: static GameInitializationUtil* getInstance();

    public: GameInitializedEvent* EVENT = new GameInitializedEvent(this);

                //@Throws(Exception.constructor)
            
    public: void initDemo(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: void initGame(AbeClientInformationInterface* abeClientInformation, MyCanvas* canvas, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_GAMEINITIALIZATIONUTIL_H
