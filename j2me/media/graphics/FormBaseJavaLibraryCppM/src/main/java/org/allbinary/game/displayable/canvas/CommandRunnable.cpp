
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/CommandRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"


CommandRunnable::CommandRunnable(CommandFormInputProcessor* commandFormInputProcessor, Command* command) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->commandFormInputProcessor= commandFormInputProcessor;
    
this->command= command;
    
}


    auto CommandRunnable::run() -> void{

        try {
            this->logUtil->putF(this->commonStrings->START_RUNNABLE, this, this->commonStrings->RUN);
    

    MyCanvas* canvas = this->commandFormInputProcessor->getCanvas();;
    

    CommandListener* commandListener = canvas->getCustomCommandListener();;
    
commandListener->commandAction(this->command, canvas);
    
this->logUtil->putF(this->commonStrings->END_RUNNABLE, this, this->commonStrings->RUN);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDRUNNABLE_CPP
