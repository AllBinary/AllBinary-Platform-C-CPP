
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
class CommandListener;
#include <javax/microedition/lcdui/Form.h>
class NullCommandListener;
class Processor;
#include <org/allbinary/game/displayable/canvas/MenuListener.h>
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>
class NullUtil;
class LogUtil;
class StringUtil;
class CommonStrings;
class StdUtil;
template<typename T1> class ABStack;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ScreenRepaintProcessorFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandForm: public Form, public virtual MyCommandInterface, public virtual MenuListener {

    private: static Object* NULL_COMMAND_FORM;

    public: static CommandForm* getNullCommandForm();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: Processor* repaintProcessor;

    private: ABStack<Object*>* commandStack;

public: CommandForm(CommandListener* commandListener, std::string formTitle, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

    public: void initCommands(CommandListener* cmdListener);

    public: void open();

    public: void close();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: int32_t getSourceId();

    public: void addCommand(Command* command);

    public: void removeAllCommands();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_COMMANDFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Form.h>)
#include <javax/microedition/lcdui/Form.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCommandListener.h>)
#include <javax/microedition/lcdui/NullCommandListener.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/MenuListener.h>)
#include <org/allbinary/game/displayable/canvas/MenuListener.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandInterface.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABStack.h>)
#include <org/allbinary/util/ABStack.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h")
#include "org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h"
#endif

        #endif
    
