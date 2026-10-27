
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

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/configuration/ContextConfigurationInterface.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfiguration.h>

      
#include <org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"

class AdminEmailInfo: public BasicEmailInfo {

    protected: LogUtil* logUtil = LogUtil::getInstance();

public: AdminEmailInfo(std::string subject, std::string textBody) : BasicEmailInfo(subject, textBody){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->init();
    
}


                //@Throws(Exception.constructor)
            
    protected: void init(){

    AdminConfigurationInterface* adminConfigurationInterface = dynamic_cast<AdminConfigurationInterface*>(new AdminConfiguration());;
    

    ContextConfigurationInterface* contextConfigurationInterface = adminConfigurationInterface->getContextConfigurationInterface();;
    

    EmailServerConfigurationInterface* emailServerConfigurationInterface = contextConfigurationInterface->getEmailServerConfigurationInterface();;
    
this->setEmailServerConfigurationInterface(emailServerConfigurationInterface);
    
}


};

            

