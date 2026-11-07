
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScore.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HighScore::HighScore(int32_t id, std::string name, GameInfo* gameInfo, int64_t score){
this->id= id;
    
this->name= name;
    
this->gameInfo= gameInfo;
    
this->score= score;
    
this->scoreString= std::to_string(this->score);
    
}


    auto HighScore::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}


    auto HighScore::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto HighScore::getScore() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->score;
    
}


                //@Throws(Exception.constructor)
            
    auto HighScore::getAsBytes() -> std::vector<int8_t>{

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    DataOutputStream* outputStream = new DataOutputStream(byteArrayOutputStream);;
    
outputStream->writeUTF(this->getName());
    
outputStream->writeLong(this->getScore());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return byteArrayOutputStream->toByteArray();;
    
}


    auto HighScore::getGameInfo() -> GameInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameInfo;
    
}


    auto HighScore::getScoreString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scoreString;
    
}


    auto HighScore::setName(std::string name) -> void{
this->name= name;
    
}


    auto HighScore::toString() -> std::string{

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(this->name)->append(commonSeps->COLON)->appendlong(this->score)->append(commonSeps->FORWARD_SLASH)->append(this->scoreString));;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_CPP
