
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H

            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScore
            : public Object
         {

    private: int32_t id;

    private: std::string name;

    private: GameInfo gameInfo;

    private: int64_t score;

    private: std::string scoreString;

public: HighScore(int32_t id, std::string name, GameInfo gameInfo, int64_t score);

    public: int32_t getId();

    public: std::string getName();

    public: int64_t getScore();

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getAsBytes();

    public: GameInfo getGameInfo();

    public: std::string getScoreString();

    public: void setName(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H
