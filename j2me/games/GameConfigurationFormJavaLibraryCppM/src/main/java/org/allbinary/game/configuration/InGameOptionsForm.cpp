
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/InGameOptionsForm.h"
        

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
        
auto InGameOptionsForm::DISPLAY_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Options In Game", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }
Command* InGameOptionsForm::DISPLAY = InGameOptionsForm::DISPLAY_owner();
auto InGameOptionsForm::SAVE_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Save", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }
Command* InGameOptionsForm::SAVE = InGameOptionsForm::SAVE_owner();
auto InGameOptionsForm::DEFAULT_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Default", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1)); return value.get(); }
Command* InGameOptionsForm::DEFAULT = InGameOptionsForm::DEFAULT_owner();

InGameOptionsForm::InGameOptionsForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : CommandForm(commandListener, title, backgrounBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

    GameFeatureFormUtil* gameFeatureFormUtil = GameFeatureFormUtil::getInstance();;
    
gameFeatureFormUtil->addChoiceGroup(this, InGameFeatureChoiceGroups::getExclusiveInstance()->get(), Choice::EXCLUSIVE);
    
gameFeatureFormUtil->addChoiceGroup(this, InGameFeatureChoiceGroups::getMultipleInstance()->get(), Choice::MULTIPLE);
    
this->initCommands(commandListener);
    
}


    auto InGameOptionsForm::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->addCommand(InGameOptionsForm::DEFAULT);
    
this->setCommandListener(cmdListener);
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_CPP
