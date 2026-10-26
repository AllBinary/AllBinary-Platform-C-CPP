
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationInterface.h"

class ContextConfiguration
            : public Object
        : public ContextConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: EmailServerConfigurationInterface emailServerConfigurationInterface;

public: ContextConfiguration(){
this->logUtil.putF(this->commonStrings.START, this, "ContextConfiguration");
    
this->setEmailServerConfigurationInterface(EmailServerConfiguration());
    
}


public: ContextConfiguration(HashMap<Object*, Object*> hashMap){
this->logUtil.putF(this->commonStrings.START, this, "ContextConfiguration(HashMap)");
    
this->setEmailServerConfigurationInterface(EmailServerConfiguration(hashMap));
    
}


    public: EmailServerConfigurationInterface getEmailServerConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->emailServerConfigurationInterface;
    
}


    public: void setEmailServerConfigurationInterface(EmailServerConfigurationInterface emailServerConfigurationInterface){
this->emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


};

            

