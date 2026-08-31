
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const DEBUG: string = "mail.debug";

    private: static const SMTP_HOST: string = "mail.smtp.host";

    private: static const SMTP_PORT: string = "mail.smtp.port";

    private: static const SMTP_USER: string = "mail.smtp.user";

    private: static const SMTP_RETURN_ADDRESS: string = "mail.from";

    private: static const SMTP_LOCAL_HOST: string = "mail.smtp.localhost";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: msg: MimeMessage;

    private: properties: Properties;

    private: bs: ByteArrayOutputStream;

    private: isDebug: bool;

public constructor (string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase);

public constructor (string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase, bool isDebug);

                //@Throws(Exception.constructor)
            
    public init(string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase);

                //@Throws(MessagingException.constructor)
            
    public init(string server, Authenticator authenticator, std::vector<InternetAddress> addresses_from, std::vector<InternetAddress> addresses_to, std::vector<InternetAddress> addresses_cc, std::vector<InternetAddress> addresses_bcc, string subject, std::vector<MimeBodyPart> mimeBodyParts);

    public MimeMessage getMimeMessage();

    public string getDebugInfo();

                //@Throws(Exception.constructor)
            
    public string log();

                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public Document toXmlDoc();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_H
