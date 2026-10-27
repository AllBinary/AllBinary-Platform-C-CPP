
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseRegistrationTextBox: public CustomTextBox {

    public: static Command* DISPLAY_COMMAND() { static std::unique_ptr<Command> value(new Command("Register", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3)); return value.get(); }

    public: static Command* SUBMIT_COMMAND() { static std::unique_ptr<Command> value(new Command("Submit", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3)); return value.get(); }

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Paintable* pleaseWaitPaintable = new SimpleTextPaintable(commonStrings.PLEASE_WAIT, BasicColorFactory::getInstance()->WHITE);

    private: Paintable* paintable = NullPaintable::getInstance();

public: LicenseRegistrationTextBox(CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

    public: void open();

    public: void close();

    public: void paint(Graphics* graphics);

    public: void submit();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H
