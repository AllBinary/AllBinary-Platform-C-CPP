
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoreCommands.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HighScoreCommands::HighScoreCommands() : DISPLAY(new Command("Scores", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)), PERSONAL(new Command("Personal", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)), WORLD(new Command("World", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)) {
        }
        auto HighScoreCommands::instance_owner() -> HighScoreCommands* { static std::unique_ptr<HighScoreCommands> value(new HighScoreCommands()); return value.get(); }
HighScoreCommands* HighScoreCommands::instance = HighScoreCommands::instance_owner();

    auto HighScoreCommands::getInstance() -> HighScoreCommands*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoreCommands::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_CPP
