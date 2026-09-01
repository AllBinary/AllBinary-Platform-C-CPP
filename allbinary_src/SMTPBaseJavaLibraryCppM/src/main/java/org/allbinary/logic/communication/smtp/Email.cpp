
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
        



            #include <vector>
        
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

public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase){
this->isDebug= false;
    
this->init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


public: Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase, bool isDebug){
this->isDebug= isDebug;
    
this->init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


                //@Throws(Exception.constructor)
            
    public: void init(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase){

        try {
            
    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::vector<MimeBodyPart> mimeBodyParts = new Array(
                            //Otherwise - levels - level - dimension - ConditionalExpr
);;
    
mimeBodyParts[0]= MimeBodyPart();
    
mimeBodyParts[0]!.setText(textBody);
    

                        if(!stringValidationUtil.isEmpty(htmlAttachment))
                        
                                    {
                                    
    InternetHeaders internetHeaders = InternetHeaders();;
    
internetHeaders.addHeader("Content-Type", "text/html");
    

                        if(!stringValidationUtil.isEmpty(contentBase))
                        
                                    {
                                    internetHeaders.addHeader("Content-Base", contentBase);
    

                                    }
                                
mimeBodyParts[1]= MimeBodyPart(internetHeaders, htmlAttachment.getBytes());
    

                                    }
                                
this->init(server, nullptr as Authenticator, 
                                                {
                                                    InternetAddress(from)
                                                }, 
                                                {
                                                    InternetAddress(to)
                                                }, nullptr as InternetAddress[], nullptr as InternetAddress[], subject, mimeBodyParts);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "emailConstructor", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(MessagingException.constructor)
            
    public: void init(std::string server, Authenticator authenticator, std::vector<InternetAddress> addresses_from, std::vector<InternetAddress> addresses_to, std::vector<InternetAddress> addresses_cc, std::vector<InternetAddress> addresses_bcc, std::string subject, std::vector<MimeBodyPart> mimeBodyParts){
this->properties= Properties();
    
this->properties.put(Email::SMTP_HOST, server);
    

        try {
            
    std::string hostName = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(StringValidationUtil::getInstance().isEmpty(hostName))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil.putF("Unable to get HostName so using fake", this, "init()");
    

                                    }
                                
this->properties.put(Email::SMTP_LOCAL_HOST, "FakeHostName");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put("Continuing on Exception: Unable to get HostName", this, "init()", e);
    

                                    }
                                
this->properties.put(Email::SMTP_LOCAL_HOST, "FakeHostName");
    
}


                        if(this->isDebug)
                        
                                    {
                                    this->properties.put(Email::DEBUG, "true");
    

                                    }
                                

    Session session = Session::getInstance(this->properties, authenticator);;
    

                        if(this->isDebug)
                        
                                    {
                                    session.setDebug(true);
    
this->bs= ByteArrayOutputStream();
    

    PrintStream printStream = PrintStream(this->bs);;
    
session.setDebugOut(printStream);
    

                                    }
                                
this->msg= MimeMessage(session);
    
this->msg.addFrom(addresses_from);
    
this->msg.setRecipients(Message::RecipientType.TO, addresses_to);
    
this->msg.setRecipients(Message::RecipientType.CC, addresses_cc);
    
this->msg.setRecipients(Message::RecipientType.BCC, addresses_bcc);
    
this->msg.setSubject(subject);
    

    MimeMultipart mimeMultipart = MimeMultipart();;
    




                        for (
    int32_t i = 0;i < mimeBodyParts.size(); i++)
        {
mimeMultipart.addBodyPart(mimeBodyParts[i]!);
    
}

this->msg.setContent(mimeMultipart);
    
}


    public: MimeMessage getMimeMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->msg;
    
}


    public: std::string getDebugInfo(){

                        if(this->isDebug)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "More Logging Before This To Standard Out: " +
                                    //Otherwise - right - ObjectCreationExpr
;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Debugging Is Off";
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: std::string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "\nHashMap: " +this->toHashMap().toString();
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<any, any> toHashMap(){

        try {
            
    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(EmailData::SERVER, this->properties.get(Email::SMTP_HOST) as string);
    

    std::vector<Address> addresses = this->msg.getFrom();;
    

                        if(addresses != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap.put(EmailData::FROM, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this->msg.getRecipients(Message::RecipientType.TO);
    

                        if(addresses != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap.put(EmailData::TO, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this->msg.getRecipients(Message::RecipientType.CC);
    

                        if(addresses != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap.put(EmailData::CC, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this->msg.getRecipients(Message::RecipientType.BCC);
    

                        if(addresses != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap.put(EmailData::BCC, addresses[index]!.toString());
    
}


                                    }
                                
hashMap.put(EmailData::SUBJECT, this->msg.getSubject());
    

    MimeMultipart mimeMultipart = msg.getContent() as MimeMultipart;;
    

                        if(mimeMultipart != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < mimeMultipart.getCount(); index++)
        {

    std::string content = mimeMultipart.getBodyPart(index).getContent() as string;;
    
hashMap.put(EmailData::CONTENT, content);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "toHashMap()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createNameValueNodes(document, EmailData::NAME, this->toHashMap());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc(){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


};

            

