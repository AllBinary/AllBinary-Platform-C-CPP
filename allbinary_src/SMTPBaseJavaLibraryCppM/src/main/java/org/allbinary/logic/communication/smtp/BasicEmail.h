
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class MimeMessage;
class BasicEmailInfo;
class EmailInfo;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailInterface.h"
class AbEmail;
class Email;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicEmail
            : public virtual Object
        , public virtual EmailInterface {

    private: AbEmail* email;

public: BasicEmail(EmailInfo* emailInfo, std::string to);

    public: Email* getEmail();

    public: MimeMessage* getMimeMessage();

    public: std::string getDebugInfo();

                //@Throws(Exception.constructor)
            
    public: std::string log();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_BASICEMAIL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/mail/internet/MimeMessage.h>)
#include <javax/mail/internet/MimeMessage.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/info/EmailInfo.h>)
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/communication/smtp/EmailInterface.h")
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/AbEmail.h")
#include "org/allbinary/logic/communication/smtp/AbEmail.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/Email.h")
#include "org/allbinary/logic/communication/smtp/Email.h"
#endif

        #endif
    
