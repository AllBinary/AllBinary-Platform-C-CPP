
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>

      
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InGameOptionsForm: public CommandForm {

    public: static const Command DISPLAY = Command("Options In Game", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: static const Command SAVE = Command("Save", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: static const Command DEFAULT = Command("Default", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

: InGameOptionsForm(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public: void initCommands(CommandListener cmdListener);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H
