
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Intent.h"

class CommandUriAction
            : public Object
         {

    private: static CommandUriAction instance() { return CommandUriAction(); }

    public: static CommandUriAction getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CommandUriAction::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    public: void add(Command command, std::string url){
this->hashtable.put(command, url);
    
}


    public: void process(Command command){

        try {
            
                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


    public: Intent getIntent(Command command){

    std::string url = this->hashtable.get(command) as string;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return intent;
    
}


};

            

