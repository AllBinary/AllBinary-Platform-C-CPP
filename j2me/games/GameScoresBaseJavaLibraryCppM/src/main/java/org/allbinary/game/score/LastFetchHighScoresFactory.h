
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H

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

class LastFetchHighScoresFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static LastFetchHighScoresFactory* getInstance();

    public: std::vector<HighScores*> highScoresArray = NoHighScoresFactory::getInstance()->NO_HIGH_SCORES;

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H
