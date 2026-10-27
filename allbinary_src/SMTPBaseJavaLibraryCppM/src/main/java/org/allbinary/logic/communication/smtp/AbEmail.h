
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_ABEMAIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_ABEMAIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/mail/internet/MimeMessage.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#include "org/allbinary/logic/communication/smtp/Email.h"

class AbEmail
            : public Object
        , public EmailInterface {

    private: Email* email;

public: AbEmail(std::string server, std::string from, std::string to, std::string subject, std::string textBody, std::string htmlAttachment, std::string contentBase);

    public: MimeMessage* getMimeMessage();

    public: std::string getDebugInfo();

                //@Throws(Exception.constructor)
            
    public: std::string log();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: Email* getEmail();

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_ABEMAIL_H
