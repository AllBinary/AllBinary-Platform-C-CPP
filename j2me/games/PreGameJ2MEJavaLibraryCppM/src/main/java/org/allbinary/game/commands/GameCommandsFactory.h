
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
        

    private: static const instance: GameCommandsFactory = new GameCommandsFactory();

    public static GameCommandsFactory getInstance();

    public const TOGGLE_FULLSCREEN: Command = new Command("Toggle FullScreen", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const TOGGLE_KEYBOARD: Command = new Command("Keyboard", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const SET_MENU_DISPLAYABLE: Command = new Command("Set Menu Displayable", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const APPLICATION_UPDATE: Command = new Command(CommonStrings.getInstance()!.UPDATE, StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const DISPLAY_ABOUT: Command = new Command(CanvasStrings.getInstance()!.ABOUT, StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public const OPEN_WEB_URL: Command = new Command("Open Web URL", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public const CLOSE_OPTIONS: Command = new Command("Back", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const DISPLAY_OPTIONS: Command = new Command(CanvasStrings.getInstance()!.OPTIONS, StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 2);

    public const START_TRACE: Command = new Command("Start Trace", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const STOP_TRACE: Command = new Command("Stop Trace", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const DEFAULT_OPTIONS: Command = new Command("Default", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const SHOW_GAME_CANVAS: Command = new Command("Back to Game", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const CLOSE_AND_SHOW_GAME_CANVAS: Command = new Command("Back", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const QUIT_COMMAND: Command = new Command("Quit", StringUtil.getInstance()!.EMPTY_STRING, Command.STOP, 1);

    public const RESTART_COMMAND: Command = new Command("Restart", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 0);

    public const DISPLAY_SAVE_FORM: Command = new Command("Save To", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    public const SAVE: Command = new Command("Save", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    public const DISPLAY_LOAD_FORM: Command = new Command("Load", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    public const LOAD_FILE: Command = new Command("Load File", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    public const DELETE_FILE: Command = new Command("Delete File", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const EXIT_COMMAND: Command = new Command("Exit", StringUtil.getInstance()!.EMPTY_STRING, Command.EXIT, 2);

    public const EXIT_WITHOUT_PROGRESS_COMMAND: Command = new Command("Exit Without Progress", StringUtil.getInstance()!.EMPTY_STRING, Command.EXIT, 2);

    public const START_COMMAND: Command = new Command(CommonStrings.getInstance()!.START, StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const CONTINUE_COMMAND: Command = new Command("Continue", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const SELECT_COMMAND: Command = new Command("Select", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const FEATURE_UPDATE: Command = new Command("Feature Update", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    public const BUY_COMMAND: Command = new Command("BUY", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

protected constructor ();

};

            


        #endif //ORG_ALLBINARY_GAME_COMMANDS_GAMECOMMANDSFACTORY_H
