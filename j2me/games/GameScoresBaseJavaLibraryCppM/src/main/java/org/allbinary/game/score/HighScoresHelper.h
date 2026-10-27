
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresHelperBase.h"
class HighScores;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresHelper: public HighScoresHelperBase {


            
    public: HighScoresHelper();
        
    private: CircularIndexUtil* circularIndexUtil;

    public: void setHighScoresArray(std::vector<HighScores*> highScoresArrayP);

    public: int32_t lastIndex =  -1;

    public: HighScores* getNextHighScores();

    public: bool isAnyHighScores();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBase.h")
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif

        #endif
    
