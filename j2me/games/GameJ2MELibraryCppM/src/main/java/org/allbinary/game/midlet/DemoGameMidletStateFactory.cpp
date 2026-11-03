
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/DemoGameMidletStateFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/DemoGameMidletState.h"

auto DemoGameMidletStateFactory::STATE_owner() -> DemoGameMidletStateFactory* { static std::unique_ptr<DemoGameMidletStateFactory> value(new DemoGameMidletStateFactory()); return value.get(); }
DemoGameMidletStateFactory* DemoGameMidletStateFactory::STATE = DemoGameMidletStateFactory::STATE_owner();

DemoGameMidletStateFactory::DemoGameMidletStateFactory() : NONE(new DemoGameMidletState()), START_DEMO(new DemoGameMidletState()), START_GAME(new DemoGameMidletState()), START_INPUT_MAPPING(new DemoGameMidletState()){
}


    auto DemoGameMidletStateFactory::getInstance() -> DemoGameMidletStateFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DemoGameMidletStateFactory::STATE;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLETSTATEFACTORY_CPP
