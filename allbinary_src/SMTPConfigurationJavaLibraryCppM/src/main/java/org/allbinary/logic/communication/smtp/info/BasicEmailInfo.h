
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicEmailInfo
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: subject: string;

    private: textBody: string;

    emailServerConfigurationInterface: EmailServerConfigurationInterface;

public constructor (string subject, string textBody);

    public string getSubject();

    public string getTextBody();

    public EmailServerConfigurationInterface getEmailServerConfigurationInterface();

    public setEmailServerConfigurationInterface(EmailServerConfigurationInterface emailServerConfigurationInterface);

    public string toString();

                //@Throws(Exception.constructor)
            
    init();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_H
