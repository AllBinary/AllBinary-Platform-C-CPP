
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameCommandsFactory
            : public Object
         {

    private: static GameCommandsFactory instance() { return GameCommandsFactory(); }

    public: static GameCommandsFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameCommandsFactory::instance();
    
}


    public: const Command TOGGLE_FULLSCREEN = Command("Toggle FullScreen", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command TOGGLE_KEYBOARD = Command("Keyboard", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command SET_MENU_DISPLAYABLE = Command("Set Menu Displayable", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command APPLICATION_UPDATE = Command(CommonStrings::getInstance().UPDATE, StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command DISPLAY_ABOUT = Command(CanvasStrings::getInstance().ABOUT, StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    public: const Command OPEN_WEB_URL = Command("Open Web URL", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    public: const Command CLOSE_OPTIONS = Command("Back", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command DISPLAY_OPTIONS = Command(CanvasStrings::getInstance().OPTIONS, StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 2);

    public: const Command START_TRACE = Command("Start Trace", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command STOP_TRACE = Command("Stop Trace", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command DEFAULT_OPTIONS = Command("Default", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command SHOW_GAME_CANVAS = Command("Back to Game", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command CLOSE_AND_SHOW_GAME_CANVAS = Command("Back", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command QUIT_COMMAND = Command("Quit", StringUtil::getInstance().EMPTY_STRING, Command::STOP, 1);

    public: const Command RESTART_COMMAND = Command("Restart", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 0);

    public: const Command DISPLAY_SAVE_FORM = Command("Save To", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 3);

    public: const Command SAVE = Command("Save", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 3);

    public: const Command DISPLAY_LOAD_FORM = Command("Load", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 3);

    public: const Command LOAD_FILE = Command("Load File", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 3);

    public: const Command DELETE_FILE = Command("Delete File", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command EXIT_COMMAND = Command("Exit", StringUtil::getInstance().EMPTY_STRING, Command::EXIT, 2);

    public: const Command EXIT_WITHOUT_PROGRESS_COMMAND = Command("Exit Without Progress", StringUtil::getInstance().EMPTY_STRING, Command::EXIT, 2);

    public: const Command START_COMMAND = Command(CommonStrings::getInstance().START, StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command CONTINUE_COMMAND = Command("Continue", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command SELECT_COMMAND = Command("Select", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command FEATURE_UPDATE = Command("Feature Update", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: const Command BUY_COMMAND = Command("BUY", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

protected: GameCommandsFactory(){
}


};

            

