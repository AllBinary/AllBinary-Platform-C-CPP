
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H

#include <javax/microedition/lcdui/Command.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoreCommandsBaseFactory.h"
#include "HighScoreCommands.h"

class HighScoreCommandsFactory: public HighScoreCommandsBaseFactory {

    private: static HighScoreCommandsFactory instance() { return HighScoreCommandsFactory(); }

    public: static HighScoreCommandsFactory getInstance();

private: HighScoreCommandsFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
