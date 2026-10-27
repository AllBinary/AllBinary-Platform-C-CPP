
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
        
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreCommands
            : public Object
         {

    private: static HighScoreCommands* instance() { static std::unique_ptr<HighScoreCommands> value(new HighScoreCommands()); return value.get(); }

    public: static HighScoreCommands* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoreCommands::instance();
    
}


    public: Command* DISPLAY = new Command("Scores", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* PERSONAL = new Command("Personal", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* WORLD = new Command("World", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

};

            

