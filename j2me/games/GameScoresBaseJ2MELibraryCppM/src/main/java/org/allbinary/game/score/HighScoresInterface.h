
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScore.h"

class HighScoresInterface {

    public: virtual BasicArrayList* getList() = 0;

    public: virtual void addHighScore(HighScore* newHighScore) = 0;

    public: virtual int32_t getTotal() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isBestScore(HighScore* newHighScore) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESINTERFACE_H
