
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class GameInfo;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresFactoryInterface.h"
class HighScoresResultsListener;
class HighScoresHelperBaseInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresBase
            : public virtual Object
        , public virtual HighScoresFactoryInterface {

    /*protected*/ public: CommonStrings* commonStrings;

/*protected*/ public: HighScoresBase();

    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);

    public: void fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);

    public: HighScoresHelperBaseInterface* createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESBASE_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresFactoryInterface.h")
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresResultsListener.h")
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#endif

        #endif
    
