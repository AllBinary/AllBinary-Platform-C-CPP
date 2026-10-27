
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class GameInfo;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScore
            : public virtual Object
         {

    private: int32_t id;

    private: std::string name;

    private: GameInfo* gameInfo;

    private: int64_t score;

    private: std::string scoreString;

public: HighScore(int32_t id, std::string name, GameInfo* gameInfo, int64_t score);

    public: int32_t getId();

    public: std::string getName();

    public: int64_t getScore();

                //@Throws(Exception.constructor)
            
    public: std::vector<int8_t> getAsBytes();

    public: GameInfo* getGameInfo();

    public: std::string getScoreString();

    public: void setName(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORE_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/DataOutputStream.h>)
#include <java/io/DataOutputStream.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    
