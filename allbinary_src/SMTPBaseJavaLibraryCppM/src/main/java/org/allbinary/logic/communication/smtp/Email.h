
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/PrintStream.h>
#include <java/util/HashMap.h>
#include <java/util/Properties.h>
class Address;
class Authenticator;
class Message;
class MessagingException;
class Session;
class InternetAddress;
class InternetHeaders;
class MimeBodyPart;
class MimeMessage;
class MimeMultipart;
class ModDomHelper;
class StdUtil;
class LogUtil;
class StringUtil;
class StringValidationUtil;
class CommonStrings;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailInterface.h"
class EmailData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Email
            : public virtual Object
        , public virtual EmailInterface {

    private: static inline const std::string DEBUG = "mail.debug";

    private: static inline const std::string SMTP_HOST = "mail.smtp.host";

    private: static inline const std::string SMTP_PORT = "mail.smtp.port";

    private: static inline const std::string SMTP_USER = "mail.smtp.user";

    private: static inline const std::string SMTP_RETURN_ADDRESS = "mail.from";

    private: static inline const std::string SMTP_LOCAL_HOST = "mail.smtp.localhost";

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: MimeMessage* msg;

    private: Properties* properties;

    private: ByteArrayOutputStream* bs;

    private: bool isDebug;

public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase);

public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase, bool isDebug);

                //@Throws(Exception.constructor)
            
    public: void init(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase);

                //@Throws(MessagingException.constructor)
            
    public: void init(std::string server, Authenticator* authenticator, std::vector<InternetAddress*> addresses_from, std::vector<InternetAddress*> addresses_to, std::vector<InternetAddress*> addresses_cc, std::vector<InternetAddress*> addresses_bcc, std::string subject, std::vector<MimeBodyPart*> mimeBodyParts);

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

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H_COMPLETE
        #if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/PrintStream.h>)
#include <java/io/PrintStream.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Properties.h>)
#include <java/util/Properties.h>
#endif
#if __has_include(<javax/mail/Address.h>)
#include <javax/mail/Address.h>
#endif
#if __has_include(<javax/mail/Authenticator.h>)
#include <javax/mail/Authenticator.h>
#endif
#if __has_include(<javax/mail/Message.h>)
#include <javax/mail/Message.h>
#endif
#if __has_include(<javax/mail/MessagingException.h>)
#include <javax/mail/MessagingException.h>
#endif
#if __has_include(<javax/mail/Session.h>)
#include <javax/mail/Session.h>
#endif
#if __has_include(<javax/mail/internet/InternetAddress.h>)
#include <javax/mail/internet/InternetAddress.h>
#endif
#if __has_include(<javax/mail/internet/InternetHeaders.h>)
#include <javax/mail/internet/InternetHeaders.h>
#endif
#if __has_include(<javax/mail/internet/MimeBodyPart.h>)
#include <javax/mail/internet/MimeBodyPart.h>
#endif
#if __has_include(<javax/mail/internet/MimeMessage.h>)
#include <javax/mail/internet/MimeMessage.h>
#endif
#if __has_include(<javax/mail/internet/MimeMultipart.h>)
#include <javax/mail/internet/MimeMultipart.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include("org/allbinary/logic/communication/smtp/EmailData.h")
#include "org/allbinary/logic/communication/smtp/EmailData.h"
#endif

        #endif
    
