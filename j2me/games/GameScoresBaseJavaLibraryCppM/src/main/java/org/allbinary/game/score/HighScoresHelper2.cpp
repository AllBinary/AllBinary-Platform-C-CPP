
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoresHelper2.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/HighScores.h"


HighScoresHelper2::HighScoresHelper2() : circularIndexUtil(CircularIndexUtil::createInstanceAt(0, 0)), selectedHighScores(NullHighScoresSingletonFactory::getInstance()) {
        }
        
    auto HighScoresHelper2::setSelectedHighScores(HighScores* selectedHighScores) -> void{
this->selectedHighScores= selectedHighScores;
    
}


    auto HighScoresHelper2::getSelectedHighScores() -> HighScores*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->selectedHighScores;
    
}


    auto HighScoresHelper2::setHighScoresArray(std::vector<HighScores*> highScoresArrayP) -> void{
HighScoresHelperBase::setHighScoresArray(highScoresArrayP);
    
this->circularIndexUtil->setSize(this->highScoresArrayP.size());
    
this->selectHighScores();
    
}


    auto HighScoresHelper2::selectHighScores() -> void{

                        if(this->highScoresArrayP.size() == 0)
                        
                                    {
                                    this->setSelectedHighScores(NullHighScoresSingletonFactory::getInstance());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
this->circularIndexUtil->next();
    

    HighScores* highScores = this->highScoresArrayP[this->circularIndexUtil->getIndex()];;
    

    int32_t index = 0;;
    

        while(highScores->getTotal() < 1 && index < this->highScoresArrayP.size())
        {
highScores= this->highScoresArrayP[this->circularIndexUtil->next()];
    
index++;
    
}

this->setSelectedHighScores(highScores);
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESHELPER2_CPP
