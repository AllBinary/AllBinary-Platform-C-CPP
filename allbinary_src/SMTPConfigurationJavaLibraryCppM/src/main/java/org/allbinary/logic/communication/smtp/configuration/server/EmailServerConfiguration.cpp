
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

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailServerConfigurationInterface.h"
#include "EmailServerConfigurationData.h"

class EmailServerConfiguration
            : public Object
        : public EmailServerConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string accountName;

    private: std::string password;

    private: std::string smtpServer;

public: EmailServerConfiguration(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setSmtpServer(StringUtil::getInstance().EMPTY_STRING);
    
}


public: EmailServerConfiguration(HashMap<Object*, Object*> hashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this->setAccountName(hashMap.get(EmailServerConfigurationData::ACCOUNT));
    
this->setPassword(hashMap.get(EmailServerConfigurationData::PASSWORD));
    
this->setSmtpServer(hashMap.get(EmailServerConfigurationData::SERVER));
    
this->log();
    
}


public: EmailServerConfiguration(std::string account, std::string password, std::string server){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(commonStrings.START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this->setAccountName(account);
    
this->setPassword(password);
    
this->setSmtpServer(server);
    
this->log();
    
}


    public: void setSmtpServer(std::string value){
this->smtpServer= value;
    
}


    public: std::string getSmtpServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->smtpServer;
    
}


    public: std::string getAccountName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->accountName;
    
}


    public: void setAccountName(std::string accountName){
this->accountName= accountName;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password;
    
}


    public: void setPassword(std::string password){
this->password= password;
    
}


    public: void log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->toString(), this, "EmailServerConfiguration");
    

                                    }
                                
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Email Server Configuration:\n" +"Smtp Server: \n" +this->getSmtpServer() +"\nAccount Name: " +this->getAccountName() +"\nPassword: " +this->getPassword();
    
}


};

            

