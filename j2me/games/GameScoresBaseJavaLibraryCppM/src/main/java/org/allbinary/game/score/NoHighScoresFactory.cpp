
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

        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"

class NoHighScoresFactory: public HighScoresBase {

    private: static NoHighScoresFactory* instance() { static std::unique_ptr<NoHighScoresFactory> value(new NoHighScoresFactory()); return value.get(); }

    public: static NoHighScoresFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NoHighScoresFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const std::vector<HighScores*> NO_HIGH_SCORES = {};

private: NoHighScoresFactory(){
}


    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener){
this->logUtil->putF("Getting No HighScores", this, "fetchHighScores");
    
highScoresResultsListener->setHighScoresArray(this->NO_HIGH_SCORES);
    
}


    public: HighScoresHelperBaseInterface* createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScoresHelperBase();
    
}


};

            

