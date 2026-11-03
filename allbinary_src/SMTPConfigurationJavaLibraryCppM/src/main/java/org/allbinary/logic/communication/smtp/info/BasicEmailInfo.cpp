
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicEmailInfo::BasicEmailInfo(std::string subject, std::string textBody) : logUtil(LogUtil::getInstance()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->START, this, commonStrings->CONSTRUCTOR);
    

                                    }
                                
this->subject= subject;
    
this->textBody= textBody;
    
}


    auto BasicEmailInfo::getSubject() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->subject;
    
}


    auto BasicEmailInfo::getTextBody() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->textBody;
    
}


    auto BasicEmailInfo::getEmailServerConfigurationInterface() -> EmailServerConfigurationInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->emailServerConfigurationInterface;
    
}


    auto BasicEmailInfo::setEmailServerConfigurationInterface(EmailServerConfigurationInterface* emailServerConfigurationInterface) -> void{
this->emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


    auto BasicEmailInfo::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getEmailServerConfigurationInterface()->toString());
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
stringBuffer->append("Subject: \n");
    
stringBuffer->append(this->getSubject());
    
stringBuffer->append("\nText Body: \n");
    
stringBuffer->append(this->getTextBody());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEmailInfo::init() -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_INFO_BASICEMAILINFO_CPP
