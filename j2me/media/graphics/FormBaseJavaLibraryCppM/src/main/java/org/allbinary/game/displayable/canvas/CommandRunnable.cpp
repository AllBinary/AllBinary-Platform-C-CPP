
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandFormInputProcessor.h"

class CommandRunnable
            : public Object
        : public Runnable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: CommandFormInputProcessor commandFormInputProcessor;

    private: Command command;

public: CommandRunnable(CommandFormInputProcessor commandFormInputProcessor, Command command){
this->commandFormInputProcessor= commandFormInputProcessor;
    
this->command= command;
    
}


    public: void run(){

        try {
            this->logUtil.putF(this->commonStrings.START_RUNNABLE, this, this->commonStrings.RUN);
    

    MyCanvas canvas = this->commandFormInputProcessor.getCanvas();;
    

    CommandListener commandListener = canvas.getCustomCommandListener();;
    
commandListener.commandAction(this->command, canvas);
    
this->logUtil.putF(this->commonStrings.END_RUNNABLE, this, this->commonStrings.RUN);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.RUN, e);
    
}

}


};

            

