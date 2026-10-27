
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <playn/core/PlayN.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"

class WebCommandProcessor
            : public Object
         {

    private: static WebCommandProcessor* instance() { static std::unique_ptr<WebCommandProcessor> value(new WebCommandProcessor()); return value.get(); }

    public: static WebCommandProcessor* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AboutCommandProcessor* aboutCommandProcessor = AboutCommandProcessor::getInstance();

    public: BasicArrayList* list = new BasicArrayListD();

    public: void process(CommandListener* midletCommandListener, Command* command, Canvas* canvas);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_H
