
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

class HighScoresHelperBase
            : public Object
        , public HighScoresHelperBaseInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: std::vector<HighScores*> highScoresArrayP = LastFetchHighScoresFactory::getInstance()->highScoresArray;

    public: void setHighScoresArray(std::vector<HighScores*> highScoresArrayP){

                        if(highScoresArrayP != 
                                    nullptr
                                )
                        
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


    public: HighScores* getNextHighScores(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullHighScoresSingletonFactory::getInstance();;
    
}


    public: bool isAnyHighScores(){



                            throw new RuntimeException();
                    
}


    public: void setSelectedHighScores(HighScores* selectedHighScores){
}


    public: HighScores* getSelectedHighScores(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullHighScoresSingletonFactory::getInstance();;
    
}


    public: std::vector<HighScores*> getHighScoresArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoresArrayP;
    
}


    public: void selectHighScores(){
}


};

            

