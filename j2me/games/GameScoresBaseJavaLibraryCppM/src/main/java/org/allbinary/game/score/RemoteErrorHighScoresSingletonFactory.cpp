
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
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScores.h"

class RemoteErrorHighScoresSingletonFactory
            : public Object
         {

    private: static HighScores* SINGLETON() { static std::unique_ptr<HighScores> value(new HighScores(CommonStrings::getInstance()->LOADING, "Remote High Scores Did Not Load", CommonStrings::getInstance()->PERIODS)); return value.get(); }

    public: static HighScores* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteErrorHighScoresSingletonFactory::SINGLETON();
    
}


};

            

