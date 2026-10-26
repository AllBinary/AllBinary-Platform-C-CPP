
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/PrintStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Properties.h>

      
#include <javax/mail/Address.h>

      
#include <javax/mail/Authenticator.h>

      
#include <javax/mail/Message.h>

      
#include <javax/mail/MessagingException.h>

      
#include <javax/mail/Session.h>

      
#include <javax/mail/internet/InternetAddress.h>

      
#include <javax/mail/internet/InternetHeaders.h>

      
#include <javax/mail/internet/MimeBodyPart.h>

      
#include <javax/mail/internet/MimeMessage.h>

      
#include <javax/mail/internet/MimeMultipart.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailInterface.h"
#include "EmailData.h"

class Email
            : public Object
        : public EmailInterface {

    private: static const std::string DEBUG = "mail.debug";

    private: static const std::string SMTP_HOST = "mail.smtp.host";

    private: static const std::string SMTP_PORT = "mail.smtp.port";

    private: static const std::string SMTP_USER = "mail.smtp.user";

    private: static const std::string SMTP_RETURN_ADDRESS = "mail.from";

    private: static const std::string SMTP_LOCAL_HOST = "mail.smtp.localhost";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: MimeMessage msg;

    private: Properties properties;

    private: ByteArrayOutputStream bs;

    private: bool isDebug;

public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase);

public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase, bool isDebug);

                //@Throws(Exception.constructor)
            
    public: void init(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase);

                //@Throws(MessagingException.constructor)
            
    public: void init(std::string server, Authenticator authenticator, std::vector<InternetAddress> addresses_from, std::vector<InternetAddress> addresses_to, std::vector<InternetAddress> addresses_cc, std::vector<InternetAddress> addresses_bcc, std::string subject, std::vector<MimeBodyPart> mimeBodyParts);

    public: MimeMessage getMimeMessage();

    public: std::string getDebugInfo();

                //@Throws(Exception.constructor)
            
    public: std::string log();

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H
