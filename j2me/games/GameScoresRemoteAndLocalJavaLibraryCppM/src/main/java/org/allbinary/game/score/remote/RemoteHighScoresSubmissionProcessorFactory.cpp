
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessor.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorInterface.h"


RemoteHighScoresSubmissionProcessorFactory::RemoteHighScoresSubmissionProcessorFactory() {
        }
        RemoteHighScoresSubmissionProcessorInterface* RemoteHighScoresSubmissionProcessorFactory::SINGLETON = new RemoteHighScoresSubmissionProcessor();

    auto RemoteHighScoresSubmissionProcessorFactory::getInstance() -> RemoteHighScoresSubmissionProcessorInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteHighScoresSubmissionProcessorFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORFACTORY_CPP
