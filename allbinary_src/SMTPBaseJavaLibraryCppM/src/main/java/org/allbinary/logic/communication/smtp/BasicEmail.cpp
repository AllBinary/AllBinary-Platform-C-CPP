
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/mail/internet/MimeMessage.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailInterface.h"
#include "AbEmail.h"
#include "Email.h"

class BasicEmail
            : public Object
        : public EmailInterface {

    private: AbEmail email;

public: BasicEmail(EmailInfo emailInfo, std::string to){

    BasicEmailInfo basicEmailInfo = emailInfo.getBasicEmailInfo();;
    
this->email= AbEmail(basicEmailInfo.getEmailServerConfigurationInterface().getSmtpServer(), basicEmailInfo.getEmailServerConfigurationInterface().getAccountName(), to, basicEmailInfo.getSubject(), basicEmailInfo.getTextBody(), emailInfo.getHtmlAttachment(), emailInfo.getContentBase());
    
}


    public: Email getEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.getEmail() as Email;
    
}


    public: MimeMessage getMimeMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.getMimeMessage();;
    
}


    public: std::string getDebugInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.getDebugInfo();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.log();;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.toHashMap();;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.toXmlNode(document);;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->email.toXmlDoc();;
    
}


};

            

