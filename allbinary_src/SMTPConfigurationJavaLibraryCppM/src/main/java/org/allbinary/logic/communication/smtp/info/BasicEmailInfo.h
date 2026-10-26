
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicEmailInfo
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string subject;

    private: std::string textBody;

    protected: EmailServerConfigurationInterface emailServerConfigurationInterface;

public: BasicEmailInfo(std::string subject, std::string textBody);

    public: std::string getSubject();

    public: std::string getTextBody();

    public: EmailServerConfigurationInterface getEmailServerConfigurationInterface();

    public: void setEmailServerConfigurationInterface(EmailServerConfigurationInterface emailServerConfigurationInterface);

    public: std::string toString();

                //@Throws(Exception.constructor)
            
    protected: void init();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_H
