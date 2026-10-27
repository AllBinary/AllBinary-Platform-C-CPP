
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Canvas;
class Command;
class CommandListener;
class CommonStrings;
class LogUtil;
class BasicArrayList;
class BasicArrayListD;
class PlayN;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AboutCommandProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WebCommandProcessor
            : public virtual Object
         {

    private: static WebCommandProcessor* instance_owner();
    private: static WebCommandProcessor* instance;

    public: static WebCommandProcessor* getInstance();


            
    public: WebCommandProcessor();
        
    /*protected*/ public: LogUtil* logUtil;

    private: AboutCommandProcessor* aboutCommandProcessor;

    public: BasicArrayList* list;

    public: void process(CommandListener* midletCommandListener, Command* command, Canvas* canvas);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<playn/core/PlayN.h>)
#include <playn/core/PlayN.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h")
#include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
#endif

        #endif
    
