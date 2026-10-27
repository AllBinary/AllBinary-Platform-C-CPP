
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StringMaker;
class CommonLabels;
class CommonSeps;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresInterface.h"
class HighScore;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScores
            : public virtual Object
        , public HighScoresInterface {

    private: BasicArrayList* orderedHighScoresList;

    private: std::string name;

    private: std::string heading;

    private: const std::string columnOneHeading = "Name";

    private: std::string columnTwoHeading;

public: HighScores(std::string name, std::string heading, std::string columnTwoHeading);

    public: void setList(BasicArrayList* orderedHighScoresList);

    public: BasicArrayList* getList();

    public: std::string getName();

    public: int32_t getTotal();

    public: void addHighScore(HighScore* newHighScore);

    public: std::string getHeading();

    public: std::string getColumnOneHeading();

    public: std::string getColumnTwoHeading();

                //@Throws(Exception.constructor)
            
    public: bool isBestScore(HighScore* newHighScore);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresInterface.h")
#include "org/allbinary/game/score/HighScoresInterface.h"
#endif
#if __has_include("org/allbinary/game/score/HighScore.h")
#include "org/allbinary/game/score/HighScore.h"
#endif

        #endif
    
