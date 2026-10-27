
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

class HighScores
            : public Object
        , public HighScoresInterface {

    private: BasicArrayList* orderedHighScoresList = new BasicArrayListD();

    private: std::string name;

    private: std::string heading;

    private: const std::string columnOneHeading = "Name";

    private: std::string columnTwoHeading;

public: HighScores(std::string name, std::string heading, std::string columnTwoHeading){
this->name= name;
    
this->heading= heading;
    
this->columnTwoHeading= columnTwoHeading;
    
}


    public: void setList(BasicArrayList* orderedHighScoresList){
this->orderedHighScoresList= orderedHighScoresList;
    
}


    public: BasicArrayList* getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->orderedHighScoresList;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: int32_t getTotal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getList()->size();;
    
}


    public: void addHighScore(HighScore* newHighScore){
this->orderedHighScoresList->add(newHighScore);
    
}


    public: std::string getHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->heading;
    
}


    public: std::string getColumnOneHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnOneHeading;
    
}


    public: std::string getColumnTwoHeading(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->columnTwoHeading;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isBestScore(HighScore* newHighScore){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("HighScores: ");
    
stringBuffer->append(this->heading);
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
stringBuffer->append(CommonLabels::getInstance()->TOTAL_LABEL);
    
stringBuffer->appendint(this->orderedHighScoresList->size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

