
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/NoHighScoresFactory.h"
#include "org/allbinary/game/score/HighScores.h"


LastFetchHighScoresFactory::LastFetchHighScoresFactory() : highScoresArray(NoHighScoresFactory::getInstance()->NO_HIGH_SCORES) {
        }
        Object* LastFetchHighScoresFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto LastFetchHighScoresFactory::getInstance() -> LastFetchHighScoresFactory*{

                        if(LastFetchHighScoresFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    LastFetchHighScoresFactory::instance= new LastFetchHighScoresFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<LastFetchHighScoresFactory*>(LastFetchHighScoresFactory::instance);
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_CPP
