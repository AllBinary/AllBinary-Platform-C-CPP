
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
        



            #include "../../../../../../../java/lang/Object.h"
        
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: accountName: string;

    private: password: string;

    private: smtpServer: string;

public constructor (){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, commonStrings!.CONSTRUCTOR);
    

                                    }
                                
this.setSmtpServer(StringUtil.getInstance()!.EMPTY_STRING);
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this.setAccountName(hashMap!.get(EmailServerConfigurationData.ACCOUNT) as string);
    
this.setPassword(hashMap!.get(EmailServerConfigurationData.PASSWORD) as string);
    
this.setSmtpServer(hashMap!.get(EmailServerConfigurationData.SERVER) as string);
    
this.log();
    
}


public constructor (string account, string password, string server){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, "EmailServerConfiguration(HashMap)");
    

                                    }
                                
this.setAccountName(account);
    
this.setPassword(password);
    
this.setSmtpServer(server);
    
this.log();
    
}


    public setSmtpServer(string value){
this.smtpServer= value;
    
}


    public string getSmtpServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.smtpServer;
    
}


    public string getAccountName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.accountName;
    
}


    public setAccountName(string accountName){
this.accountName= accountName;
    
}


    public string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.password;
    
}


    public setPassword(string password){
this.password= password;
    
}


    public log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.toString(), this, "EmailServerConfiguration");
    

                                    }
                                
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Email Server Configuration:\n" +"Smtp Server: \n" +this.getSmtpServer() +"\nAccount Name: " +this.getAccountName() +"\nPassword: " +this.getPassword();
    
}


};

            

