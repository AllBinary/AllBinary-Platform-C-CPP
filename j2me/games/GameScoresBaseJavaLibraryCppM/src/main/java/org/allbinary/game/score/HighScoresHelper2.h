
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H

#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBase.h"
#include "NullHighScoresSingletonFactory.h"
#include "HighScores.h"

class HighScoresHelper2: public HighScoresHelperBase {
        

    private: const circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstanceAt(0, 0)!;

    private: selectedHighScores: HighScores = NullHighScoresSingletonFactory.getInstance()!;

    public setSelectedHighScores(HighScores selectedHighScores);

    public HighScores getSelectedHighScores();

    public setHighScoresArray(std::vector<HighScores> highScoresArrayP);

    public selectHighScores();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_H
