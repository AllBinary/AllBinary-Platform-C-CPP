
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/BasicEmail.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/mail/internet/MimeMessage.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#include "org/allbinary/logic/communication/smtp/AbEmail.h"
#include "org/allbinary/logic/communication/smtp/Email.h"


BasicEmail::BasicEmail(EmailInfo* emailInfo, std::string to){

    BasicEmailInfo* basicEmailInfo = emailInfo->getBasicEmailInfo();;
    
this->email= new AbEmail(basicEmailInfo->getEmailServerConfigurationInterface()->getSmtpServer(), basicEmailInfo->getEmailServerConfigurationInterface()->getAccountName(), to, basicEmailInfo->getSubject(), basicEmailInfo->getTextBody(), emailInfo->getHtmlAttachment(), emailInfo->getContentBase());
    
}


    auto BasicEmail::getEmail() -> Email*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<Email*>(this->email->getEmail());
    
}


    auto BasicEmail::getMimeMessage() -> MimeMessage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->getMimeMessage();;
    
}


    auto BasicEmail::getDebugInfo() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->getDebugInfo();;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEmail::log() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->log();;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEmail::toHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->toHashMap();;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEmail::toXmlNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->toXmlNode(document);;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEmail::toXmlDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email->toXmlDoc();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_CPP
