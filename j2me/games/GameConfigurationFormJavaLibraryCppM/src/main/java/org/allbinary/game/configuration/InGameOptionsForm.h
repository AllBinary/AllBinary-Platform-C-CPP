
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>

      
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameOptionsForm: public CommandForm {

    public: static Command* DISPLAY() { static std::unique_ptr<Command> value(new Command("Options In Game", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }

    public: static Command* SAVE() { static std::unique_ptr<Command> value(new Command("Save", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }

    public: static Command* DEFAULT() { static std::unique_ptr<Command> value(new Command("Default", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }

: InGameOptionsForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
