
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Command;
class CommandListener;
class Font;
class Graphics;
class TextField;

class StringUtil;
class LogUtil;
class GameCommandsFactory;
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
class NullPaintable;
class Paintable;
class SimpleTextPaintable;
class VirtualKeyboardEventHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LicenseRegistrationTextBox: public CustomTextBox {

    private: static Command* DISPLAY_COMMAND_owner();
    public: static Command* DISPLAY_COMMAND;

    private: static Command* SUBMIT_COMMAND_owner();
    public: static Command* SUBMIT_COMMAND;

    /*protected*/ public: LogUtil* logUtil;

    private: Paintable* pleaseWaitPaintable;

    private: Paintable* paintable;

public: LicenseRegistrationTextBox(CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

    public: void open();

    public: void close();

    public: void paint(Graphics* graphics);

    public: void submit();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_SCREEN_LICENSEREGISTRATIONTEXTBOX_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/TextField.h>)
#include <javax/microedition/lcdui/TextField.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CustomTextBox.h>)
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/SimpleTextPaintable.h>)
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>
#endif
#if __has_include(<org/allbinary/input/event/VirtualKeyboardEventHandler.h>)
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>
#endif

        #endif
    
