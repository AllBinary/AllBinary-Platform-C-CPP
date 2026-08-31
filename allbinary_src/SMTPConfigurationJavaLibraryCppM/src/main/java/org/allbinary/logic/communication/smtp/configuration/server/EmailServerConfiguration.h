
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H

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

public constructor ();

public constructor (HashMap<any, any> hashMap);

public constructor (string account, string password, string server);

    public setSmtpServer(string value);

    public string getSmtpServer();

    public string getAccountName();

    public setAccountName(string accountName);

    public string getPassword();

    public setPassword(string password);

    public log();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_SERVER_EMAILSERVERCONFIGURATION_H
