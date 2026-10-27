
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
        
class CommandUriAction
            : public Object
         {

    private: static CommandUriAction* instance() { static std::unique_ptr<CommandUriAction> value(new CommandUriAction()); return value.get(); }

    public: static CommandUriAction* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandUriAction::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();

    public: void add(Command* command, std::string url){
this->hashtable->put(command, url);
    
}


    public: void process(Command* command){

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


    public: Intent* getIntent(Command* command){

    std::string url = this->hashtable->get(command);;
    

    Uri* uri = Uri::parse(url);;
    

    Intent* intent = new Intent(Intent::ACTION_VIEW, uri);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return intent;
    
}


};

            

