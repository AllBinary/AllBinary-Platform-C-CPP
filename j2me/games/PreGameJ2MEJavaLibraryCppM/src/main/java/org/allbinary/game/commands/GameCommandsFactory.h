
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
        



        #ifndef ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H
        #define ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Command;
class CanvasStrings;
class NullUtil;
class StringUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameCommandsFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static GameCommandsFactory* getInstance();

    public: Command* TOGGLE_FULLSCREEN;

    public: Command* TOGGLE_KEYBOARD;

    public: Command* SET_MENU_DISPLAYABLE;

    public: Command* APPLICATION_UPDATE;

    public: Command* DISPLAY_ABOUT;

    public: Command* OPEN_WEB_URL;

    public: Command* CLOSE_OPTIONS;

    public: Command* DISPLAY_OPTIONS;

    public: Command* START_TRACE;

    public: Command* STOP_TRACE;

    public: Command* DEFAULT_OPTIONS;

    public: Command* SHOW_GAME_CANVAS;

    public: Command* CLOSE_AND_SHOW_GAME_CANVAS;

    public: Command* QUIT_COMMAND;

    public: Command* RESTART_COMMAND;

    public: Command* DISPLAY_SAVE_FORM;

    public: Command* SAVE;

    public: Command* DISPLAY_LOAD_FORM;

    public: Command* LOAD_FILE;

    public: Command* DELETE_FILE;

    public: Command* EXIT_COMMAND;

    public: Command* EXIT_WITHOUT_PROGRESS_COMMAND;

    public: Command* START_COMMAND;

    public: Command* CONTINUE_COMMAND;

    public: Command* SELECT_COMMAND;

    public: Command* FEATURE_UPDATE;

    public: Command* BUY_COMMAND;

/*protected*/ public: GameCommandsFactory();

};

            


        #endif //ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
