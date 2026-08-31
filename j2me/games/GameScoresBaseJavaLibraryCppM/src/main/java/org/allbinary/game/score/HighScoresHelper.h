
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

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBase.h"
#include "HighScores.h"

class HighScoresHelper: public HighScoresHelperBase {
        

    private: const circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstanceAt(0, 0)!;

    public setHighScoresArray(std::vector<HighScores> highScoresArrayP);

    lastIndex: int32_t =  -1;

    public HighScores getNextHighScores();

    public bool isAnyHighScores();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER_H
