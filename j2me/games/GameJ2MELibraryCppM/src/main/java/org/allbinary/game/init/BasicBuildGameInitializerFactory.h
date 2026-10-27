
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H
        #define ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/init/GameInitializationInterfaceFactoryInterface.h"
#include "org/allbinary/game/init/BaseGameInitialization.h"
#include "org/allbinary/game/init/GameInitializationInterface.h"

class BasicBuildGameInitializerFactory
            : public Object
        , public GameInitializationInterfaceFactoryInterface {

    public: static BasicBuildGameInitializerFactory* NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY() { static std::unique_ptr<BasicBuildGameInitializerFactory> value(new BasicBuildGameInitializerFactory()); return value.get(); }

    public: GameInitializationInterface* getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_H
