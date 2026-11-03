
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
class Command;
class CommandListener;
class MyCanvas;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CommandFormInputProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandRunnable
            : public virtual Object
        , public virtual Runnable {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: CommandFormInputProcessor* commandFormInputProcessor;

    private: Command* command;

public: CommandRunnable(CommandFormInputProcessor* commandFormInputProcessor, Command* command);

    public: void run();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h")
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#endif

        #endif
    
