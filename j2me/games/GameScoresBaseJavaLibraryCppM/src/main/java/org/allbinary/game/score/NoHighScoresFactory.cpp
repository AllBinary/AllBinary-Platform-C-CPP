
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
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresBase.h"
#include "HighScores.h"
#include "HighScoresResultsListener.h"
#include "HighScoresHelperBase.h"
#include "HighScoresHelperBaseInterface.h"

class NoHighScoresFactory: public HighScoresBase {

    private: static NoHighScoresFactory instance() { return NoHighScoresFactory(); }

    public: static NoHighScoresFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHighScoresFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::vector<HighScores> NO_HIGH_SCORES = {};

private: NoHighScoresFactory(){
}


    public: void fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener){
this->logUtil.putF("Getting No HighScores", this, "fetchHighScores");
    
highScoresResultsListener.setHighScoresArray(this->NO_HIGH_SCORES);
    
}


    public: HighScoresHelperBaseInterface createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoresHelperBase();
    
}


};

            

