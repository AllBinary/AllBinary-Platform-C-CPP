
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoresHelperBase.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"


HighScoresHelperBase::HighScoresHelperBase() : logUtil(LogUtil::getInstance()), highScoresArrayP(LastFetchHighScoresFactory::getInstance()->highScoresArray) {
        }
        
    auto HighScoresHelperBase::setHighScoresArray(std::vector<HighScores*> highScoresArrayP) -> void{

                        if(!highScoresArrayP.empty())
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF((new StringMaker())->append(commonStrings->START)->appendint(highScoresArrayP.size())->toString(), this, "setHighScoresArray");
    

                                    }
                                
                        else {
                            
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, "setHighScoresArray");
    

                        }
                            
this->highScoresArrayP= highScoresArrayP;
    
}


    auto HighScoresHelperBase::getNextHighScores() -> HighScores*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullHighScoresSingletonFactory::getInstance();;
    
}


    auto HighScoresHelperBase::isAnyHighScores() -> bool{



                            throw RuntimeException();
                    
}


    auto HighScoresHelperBase::setSelectedHighScores(HighScores* selectedHighScores) -> void{
}


    auto HighScoresHelperBase::getSelectedHighScores() -> HighScores*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullHighScoresSingletonFactory::getInstance();;
    
}


    auto HighScoresHelperBase::getHighScoresArray() -> std::vector<HighScores*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoresArrayP;
    
}


    auto HighScoresHelperBase::selectHighScores() -> void{
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPERBASE_CPP
