
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
        
class HighScore
            : public Object
         {

    private: int32_t id;

    private: std::string name;

    private: GameInfo* gameInfo;

    private: int64_t score;

    private: std::string scoreString;

public: HighScore(int32_t id, std::string name, GameInfo* gameInfo, int64_t score){
this->id= id;
    
this->name= name;
    
this->gameInfo= gameInfo;
    
this->score= score;
    
this->scoreString= std::to_string(score);
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: int64_t getScore(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->score;
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getAsBytes(){

    ByteArrayOutputStream* byteArrayOutputStream = new ByteArrayOutputStream();;
    

    DataOutputStream* outputStream = new DataOutputStream(byteArrayOutputStream);;
    
outputStream->writeUTF(this->getName());
    
outputStream->writeLong(this->getScore());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArrayOutputStream->toByteArray();;
    
}


    public: GameInfo* getGameInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameInfo;
    
}


    public: std::string getScoreString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scoreString;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: std::string toString(){

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(this->name)->append(commonSeps->COLON)->appendlong(this->score)->append(commonSeps->FORWARD_SLASH)->append(this->scoreString)->toString();;
    
}


};

            

