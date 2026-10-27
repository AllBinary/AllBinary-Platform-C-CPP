
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScores.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresInterface.h"
#include "org/allbinary/game/score/HighScore.h"


HighScores::HighScores(std::string name, std::string heading, std::string columnTwoHeading) : orderedHighScoresList(new BasicArrayListD()){
this->name= name;
    
this->heading= heading;
    
this->columnTwoHeading= columnTwoHeading;
    
}


    auto HighScores::setList(BasicArrayList* orderedHighScoresList) -> void{
this->orderedHighScoresList= orderedHighScoresList;
    
}


    auto HighScores::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->orderedHighScoresList;
    
}


    auto HighScores::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto HighScores::getTotal() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getList()->size();;
    
}


    auto HighScores::addHighScore(HighScore* newHighScore) -> void{
this->orderedHighScoresList->add(newHighScore);
    
}


    auto HighScores::getHeading() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->heading;
    
}


    auto HighScores::getColumnOneHeading() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnOneHeading;
    
}


    auto HighScores::getColumnTwoHeading() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnTwoHeading;
    
}


                //@Throws(Exception.constructor)
            
    auto HighScores::isBestScore(HighScore* newHighScore) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto HighScores::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("HighScores: ");
    
stringBuffer->append(this->heading);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->TOTAL_LABEL);
    
stringBuffer->appendint(this->orderedHighScoresList->size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_CPP
