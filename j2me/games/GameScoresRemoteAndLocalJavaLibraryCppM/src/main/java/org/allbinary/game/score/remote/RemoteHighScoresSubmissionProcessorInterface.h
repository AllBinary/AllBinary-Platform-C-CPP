
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORINTERFACE_H
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORINTERFACE_H

#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RemoteHighScores.h"

class RemoteHighScoresSubmissionProcessorInterface {

    void process(RemoteHighScores remoteHighScores, AbeClientInformationInterface abeClientInformation, HighScore highScore);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORESSUBMISSIONPROCESSORINTERFACE_H
