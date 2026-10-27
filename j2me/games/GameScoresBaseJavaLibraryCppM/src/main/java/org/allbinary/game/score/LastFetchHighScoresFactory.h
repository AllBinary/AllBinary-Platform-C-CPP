
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NoHighScoresFactory;
class HighScores;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LastFetchHighScoresFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static LastFetchHighScoresFactory* getInstance();


            
    public: LastFetchHighScoresFactory();
        
    public: std::vector<HighScores*> highScoresArray;

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_LASTFETCHHIGHSCORESFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/game/score/NoHighScoresFactory.h")
#include "org/allbinary/game/score/NoHighScoresFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

        #endif
    
