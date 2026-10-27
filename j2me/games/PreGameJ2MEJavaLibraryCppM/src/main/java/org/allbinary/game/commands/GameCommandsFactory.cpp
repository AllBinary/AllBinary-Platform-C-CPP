
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

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameCommandsFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static GameCommandsFactory* getInstance(){

                        if(GameCommandsFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameCommandsFactory::instance= new GameCommandsFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameCommandsFactory*>(GameCommandsFactory::instance);
    
}


    public: Command* TOGGLE_FULLSCREEN = new Command("Toggle FullScreen", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* TOGGLE_KEYBOARD = new Command("Keyboard", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* SET_MENU_DISPLAYABLE = new Command("Set Menu Displayable", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* APPLICATION_UPDATE = new Command(CommonStrings::getInstance()->UPDATE, StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* DISPLAY_ABOUT = new Command(CanvasStrings::getInstance()->ABOUT, StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2);

    public: Command* OPEN_WEB_URL = new Command("Open Web URL", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2);

    public: Command* CLOSE_OPTIONS = new Command("Back", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* DISPLAY_OPTIONS = new Command(CanvasStrings::getInstance()->OPTIONS, StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2);

    public: Command* START_TRACE = new Command("Start Trace", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* STOP_TRACE = new Command("Stop Trace", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* DEFAULT_OPTIONS = new Command("Default", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* SHOW_GAME_CANVAS = new Command("Back to Game", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* CLOSE_AND_SHOW_GAME_CANVAS = new Command("Back", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* QUIT_COMMAND = new Command("Quit", StringUtil::getInstance()->EMPTY_STRING, Command::STOP, 1);

    public: Command* RESTART_COMMAND = new Command("Restart", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 0);

    public: Command* DISPLAY_SAVE_FORM = new Command("Save To", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3);

    public: Command* SAVE = new Command("Save", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3);

    public: Command* DISPLAY_LOAD_FORM = new Command("Load", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3);

    public: Command* LOAD_FILE = new Command("Load File", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3);

    public: Command* DELETE_FILE = new Command("Delete File", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* EXIT_COMMAND = new Command("Exit", StringUtil::getInstance()->EMPTY_STRING, Command::EXIT, 2);

    public: Command* EXIT_WITHOUT_PROGRESS_COMMAND = new Command("Exit Without Progress", StringUtil::getInstance()->EMPTY_STRING, Command::EXIT, 2);

    public: Command* START_COMMAND = new Command(CommonStrings::getInstance()->START, StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* CONTINUE_COMMAND = new Command("Continue", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* SELECT_COMMAND = new Command("Select", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* FEATURE_UPDATE = new Command("Feature Update", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

    public: Command* BUY_COMMAND = new Command("BUY", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 1);

protected: GameCommandsFactory(){
}


};

            

