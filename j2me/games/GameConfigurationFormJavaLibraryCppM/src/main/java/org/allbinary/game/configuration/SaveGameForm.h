
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
class CommandListener;
class TextField;
class GameCommandsFactory;
class BasicColor;
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
class ABSystemWrapper;
class MEUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SaveGameForm: public CommandForm {

    private: static CommandForm* FORM;

                //@Throws(Exception.constructor)
            
    public: static CommandForm* createForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: static CommandForm* getInstance();

    private: MEUtil* meUtil;

private: SaveGameForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/screen/CommandForm.h>)
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif
#if __has_include(<org/allbinary/logic/MEUtil.h>)
#include <org/allbinary/logic/MEUtil.h>
#endif

        #endif
    
