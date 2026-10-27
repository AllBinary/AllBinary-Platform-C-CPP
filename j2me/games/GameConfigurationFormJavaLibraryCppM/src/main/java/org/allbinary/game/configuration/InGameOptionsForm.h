
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Choice;
class Command;
class CommandListener;
class GameCommandsFactory;
class GameFeatureFormUtil;
class InGameFeatureChoiceGroups;
class BasicColor;
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InGameOptionsForm: public CommandForm {

    private: static Command* DISPLAY_owner();
    public: static Command* DISPLAY;

    private: static Command* SAVE_owner();
    public: static Command* SAVE;

    private: static Command* DEFAULT_owner();
    public: static Command* DEFAULT;

public: InGameOptionsForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_INGAMEOPTIONSFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Choice.h>)
#include <javax/microedition/lcdui/Choice.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>)
#include <org/allbinary/game/configuration/feature/GameFeatureFormUtil.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>)
#include <org/allbinary/game/configuration/feature/InGameFeatureChoiceGroups.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
