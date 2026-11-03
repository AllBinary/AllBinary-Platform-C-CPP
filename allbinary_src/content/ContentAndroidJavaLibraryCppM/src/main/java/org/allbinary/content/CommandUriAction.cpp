
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
        



        #ifndef ORG_ALLBINARY_CONTENT_COMMANDURIACTION_CPP
        #define ORG_ALLBINARY_CONTENT_COMMANDURIACTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/content/CommandUriAction.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <android/content/Intent.h>

      
#include <android/net/Uri.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CommandUriAction::CommandUriAction() : logUtil(LogUtil::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()) {
        }
        auto CommandUriAction::instance_owner() -> CommandUriAction* { static std::unique_ptr<CommandUriAction> value(new CommandUriAction()); return value.get(); }
CommandUriAction* CommandUriAction::instance = CommandUriAction::instance_owner();

    auto CommandUriAction::getInstance() -> CommandUriAction*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommandUriAction::instance;
    
}


    auto CommandUriAction::add(Command* command, std::string url) -> void{
this->hashtable->put(command, url);
    
}


    auto CommandUriAction::process(Command* command) -> void{

        try {
            
    Intent* intent = this->getIntent(command);;
    
ResourceUtil::getInstance()->getContext()->startActivity(intent);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->PROCESS, &e);
    
}

}


    auto CommandUriAction::getIntent(Command* command) -> Intent*{

    std::string url = JavaBoxes::unbox<std::string>(this->hashtable->get(command));;
    

    Uri* uri = Uri::parse(url);;
    

    Intent* intent = new Intent(Intent::ACTION_VIEW, uri);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return intent;
    
}




        #endif //ORG_ALLBINARY_CONTENT_COMMANDURIACTION_CPP
