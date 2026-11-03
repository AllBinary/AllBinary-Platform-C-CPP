
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class LogUtil;
class StringMaker;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
class LastFetchHighScoresFactory;
class HighScores;
class NullHighScoresSingletonFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresHelperBase
            : public virtual Object
        , public virtual HighScoresHelperBaseInterface {


            
    public: HighScoresHelperBase();
        
    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: std::vector<HighScores*> highScoresArrayP;

    public: void setHighScoresArray(std::vector<HighScores*> highScoresArrayP);

    public: HighScores* getNextHighScores();

    public: bool isAnyHighScores();

    public: void setSelectedHighScores(HighScores* selectedHighScores);

    public: HighScores* getSelectedHighScores();

    public: std::vector<HighScores*> getHighScoresArray();

    public: void selectHighScores();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#endif
#if __has_include("org/allbinary/game/score/LastFetchHighScoresFactory.h")
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif
#if __has_include("org/allbinary/game/score/NullHighScoresSingletonFactory.h")
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#endif

        #endif
    
