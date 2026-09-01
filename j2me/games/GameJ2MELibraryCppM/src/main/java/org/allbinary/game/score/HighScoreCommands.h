
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreCommands
            : public Object
         {

    private: static HighScoreCommands instance() { return HighScoreCommands(); }

    public: static HighScoreCommands getInstance();

    public: const Command DISPLAY = Command("Scores", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command PERSONAL = Command("Personal", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command WORLD = Command("World", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDS_H
