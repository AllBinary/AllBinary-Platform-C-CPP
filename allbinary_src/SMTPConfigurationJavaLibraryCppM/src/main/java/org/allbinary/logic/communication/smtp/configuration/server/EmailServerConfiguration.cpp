
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfiguration.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h"


EmailServerConfiguration::EmailServerConfiguration() : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->setSmtpServer(StringUtil::getInstance()->EMPTY_STRING);
    
}


EmailServerConfiguration::EmailServerConfiguration(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this->setAccountName(JavaBoxes::unbox<std::string>(hashMap->get(EmailServerConfigurationData::ACCOUNT)));
    
this->setPassword(JavaBoxes::unbox<std::string>(hashMap->get(EmailServerConfigurationData::PASSWORD)));
    
this->setSmtpServer(JavaBoxes::unbox<std::string>(hashMap->get(EmailServerConfigurationData::SERVER)));
    
this->log();
    
}


EmailServerConfiguration::EmailServerConfiguration(std::string account, std::string password, std::string server) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this->setAccountName(account);
    
this->setPassword(password);
    
this->setSmtpServer(server);
    
this->log();
    
}


    auto EmailServerConfiguration::setSmtpServer(std::string value) -> void{
this->smtpServer= value;
    
}


    auto EmailServerConfiguration::getSmtpServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->smtpServer;
    
}


    auto EmailServerConfiguration::getAccountName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->accountName;
    
}


    auto EmailServerConfiguration::setAccountName(std::string accountName) -> void{
this->accountName= accountName;
    
}


    auto EmailServerConfiguration::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->password;
    
}


    auto EmailServerConfiguration::setPassword(std::string password) -> void{
this->password= password;
    
}


    auto EmailServerConfiguration::log() -> void{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->toString(), this, "EmailServerConfiguration");
    

                                    }
                                
}


    auto EmailServerConfiguration::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Email Server Configuration:\n") +JavaString::valueOf("Smtp Server: \n")) +JavaString::valueOf(this->getSmtpServer())) +JavaString::valueOf("\nAccount Name: ")) +JavaString::valueOf(this->getAccountName())) +JavaString::valueOf("\nPassword: ")) +JavaString::valueOf(this->getPassword());
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_CPP
