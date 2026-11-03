
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScores.h"


NullHighScoresSingletonFactory::NullHighScoresSingletonFactory() {
        }
        auto NullHighScoresSingletonFactory::SINGLETON_owner() -> HighScores* { static std::unique_ptr<HighScores> value(new HighScores(CommonStrings::getInstance()->LOADING, "High Scores Not Loaded", CommonStrings::getInstance()->PERIODS)); return value.get(); }
HighScores* NullHighScoresSingletonFactory::SINGLETON = NullHighScoresSingletonFactory::SINGLETON_owner();

    auto NullHighScoresSingletonFactory::getInstance() -> HighScores*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullHighScoresSingletonFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_CPP
