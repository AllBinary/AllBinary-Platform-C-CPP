
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/WebCommandProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"


WebCommandProcessor::WebCommandProcessor() : logUtil(LogUtil::getInstance()), aboutCommandProcessor(AboutCommandProcessor::getInstance()), list(new BasicArrayListD()) {
        }
        auto WebCommandProcessor::instance_owner() -> WebCommandProcessor* { static std::unique_ptr<WebCommandProcessor> value(new WebCommandProcessor()); return value.get(); }
WebCommandProcessor* WebCommandProcessor::instance = WebCommandProcessor::instance_owner();

    auto WebCommandProcessor::getInstance() -> WebCommandProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return WebCommandProcessor::instance;
    
}


    auto WebCommandProcessor::process(CommandListener* midletCommandListener, Command* command, Canvas* canvas) -> void{

        try {
            this->list->removeAt(0);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->PROCESS, &e);
    
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_WEBCOMMANDPROCESSOR_CPP
