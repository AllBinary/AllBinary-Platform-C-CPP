
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBaseInterface.h"
#include "LastFetchHighScoresFactory.h"
#include "HighScores.h"
#include "NullHighScoresSingletonFactory.h"

class HighScoresHelperBase
            : public Object
        : public HighScoresHelperBaseInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    highScoresArrayP: std::vector<HighScores> = LastFetchHighScoresFactory.getInstance()!.highScoresArray;

    public setHighScoresArray(std::vector<HighScores> highScoresArrayP);

    public HighScores getNextHighScores();

    public bool isAnyHighScores();

    public setSelectedHighScores(HighScores selectedHighScores);

    public HighScores getSelectedHighScores();

    public std::vector<HighScores> getHighScoresArray();

    public selectHighScores();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_H
