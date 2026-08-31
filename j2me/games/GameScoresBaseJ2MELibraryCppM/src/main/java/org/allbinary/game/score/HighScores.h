
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

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresInterface.h"
#include "HighScore.h"

class HighScores
            : public Object
        : public HighScoresInterface {
        

    private: orderedHighScoresList: BasicArrayList = new BasicArrayListD();

    private: const name: string;

    private: const heading: string;

    private: const columnOneHeading: string = "Name";

    private: const columnTwoHeading: string;

public constructor (string name, string heading, string columnTwoHeading);

    public setList(BasicArrayList orderedHighScoresList);

    public BasicArrayList getList();

    public string getName();

    public int32_t getTotal();

    public addHighScore(HighScore newHighScore);

    public string getHeading();

    public string getColumnOneHeading();

    public string getColumnTwoHeading();

                //@Throws(Exception.constructor)
            
    public bool isBestScore(HighScore newHighScore);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORES_H
