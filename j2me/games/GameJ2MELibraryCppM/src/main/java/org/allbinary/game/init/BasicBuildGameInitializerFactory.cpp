
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
        



        #ifndef ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/init/GameInitializationInterfaceFactoryInterface.h"
#include "org/allbinary/game/init/BaseGameInitialization.h"
#include "org/allbinary/game/init/GameInitializationInterface.h"


BasicBuildGameInitializerFactory::BasicBuildGameInitializerFactory() {
        }
        auto BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY_owner() -> BasicBuildGameInitializerFactory* { static std::unique_ptr<BasicBuildGameInitializerFactory> value(new BasicBuildGameInitializerFactory()); return value.get(); }
BasicBuildGameInitializerFactory* BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY = BasicBuildGameInitializerFactory::NULL_BASE_BUILD_GMAE_INITIALIZER_FACTORY_owner();

    auto BasicBuildGameInitializerFactory::getInstance() -> GameInitializationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BaseGameInitialization::NULL_BASE_GAME_INITIALIZATION;
    
}




        #endif //ORG_ALLBINARY_GAME_INIT_BASICBUILDGAMEINITIALIZERFACTORY_CPP
