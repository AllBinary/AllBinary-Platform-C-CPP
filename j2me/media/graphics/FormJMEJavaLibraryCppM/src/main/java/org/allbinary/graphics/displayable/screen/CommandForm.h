
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Stack.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Form.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/displayable/canvas/MenuListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScreenRepaintProcessorFactory.h"

class CommandForm: public Form, public MyCommandInterface, public MenuListener {

    private: static Object* NULL_COMMAND_FORM = NullUtil::getInstance().NULL_OBJECT;

    public: static CommandForm getNullCommandForm();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const Processor repaintProcessor = ScreenRepaintProcessorFactory::getInstance().create(this);

    private: Stack<any> commandStack;

public: CommandForm(CommandListener commandListener, std::string formTitle, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public: void initCommands(CommandListener cmdListener);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: int32_t getSourceId();

    public: void addCommand(Command command);

    public: void removeAllCommands();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H
