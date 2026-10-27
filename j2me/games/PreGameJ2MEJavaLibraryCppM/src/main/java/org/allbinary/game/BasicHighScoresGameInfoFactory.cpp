
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
        



        #ifndef ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_CPP
        #define ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/BasicHighScoresGameInfoFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/PlayerTypesFactory.h"


BasicHighScoresGameInfoFactory::BasicHighScoresGameInfoFactory() : MULTI_PLAYER_SERVER(new GameInfo(GameTypeFactory::getInstance()->MULTI_PLAYER, GameMode::SERVER, PlayerTypesFactory::getInstance()->PLAYER_TYPE_ONE, 0, 0)), SINGLE_PLAYER_SERVER(new GameInfo(GameTypeFactory::getInstance()->SINGLE_PLAYER, GameMode::SERVER, PlayerTypesFactory::getInstance()->PLAYER_TYPE_ONE, 0, 0)) {
        }
        auto BasicHighScoresGameInfoFactory::SINGLETON_owner() -> BasicHighScoresGameInfoFactory* { static std::unique_ptr<BasicHighScoresGameInfoFactory> value(new BasicHighScoresGameInfoFactory()); return value.get(); }
BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory::SINGLETON = BasicHighScoresGameInfoFactory::SINGLETON_owner();

    auto BasicHighScoresGameInfoFactory::getInstance() -> BasicHighScoresGameInfoFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicHighScoresGameInfoFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_CPP
