
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Command.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"
#include "org/allbinary/game/score/HighScoreCommands.h"

class HighScoreCommandsFactory: public HighScoreCommandsBaseFactory {

    private: static HighScoreCommandsFactory* instance() { static std::unique_ptr<HighScoreCommandsFactory> value(new HighScoreCommandsFactory()); return value.get(); }

    public: static HighScoreCommandsFactory* getInstance();

private: HighScoreCommandsFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
