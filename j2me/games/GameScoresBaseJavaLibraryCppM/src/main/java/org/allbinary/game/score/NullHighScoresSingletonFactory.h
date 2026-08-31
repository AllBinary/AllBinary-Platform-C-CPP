
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScores.h"

class NullHighScoresSingletonFactory
            : public Object
         {
        

    private: static const SINGLETON: HighScores = new HighScores("Loading", "High Scores Not Loaded", CommonStrings.getInstance()!.PERIODS);

    public static HighScores getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_NULLHIGHSCORESSINGLETONFACTORY_H
