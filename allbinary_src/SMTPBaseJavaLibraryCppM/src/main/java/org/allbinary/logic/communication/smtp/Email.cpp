
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/Email.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/EmailInterface.h"
#include "org/allbinary/logic/communication/smtp/EmailData.h"


Email::Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->isDebug= false;
    
this->init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


Email::Email(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase, bool isDebug) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->isDebug= isDebug;
    
this->init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


                //@Throws(Exception.constructor)
            
    auto Email::init(std::string from, std::string to, std::string subject, std::string server, std::string textBody, std::string htmlAttachment, std::string contentBase) -> void{

        try {
            
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

    std::vector<MimeBodyPart*> mimeBodyParts = std::vector<MimeBodyPart*>(
                            //Otherwise - levels - level - dimension - ConditionalExpr
);;
    
mimeBodyParts[0]= new MimeBodyPart();
    
mimeBodyParts[0]->setText(textBody);
    

                        if(!stringValidationUtil->isEmpty(htmlAttachment))
                        
                                    {
                                    
    InternetHeaders* internetHeaders = new InternetHeaders();;
    
internetHeaders->addHeader("Content-Type", "text/html");
    

                        if(!stringValidationUtil->isEmpty(contentBase))
                        
                                    {
                                    internetHeaders->addHeader("Content-Base", contentBase);
    

                                    }
                                
mimeBodyParts[1]= new MimeBodyPart(internetHeaders, JavaString::getBytes(htmlAttachment));
    

                                    }
                                
this->init(server, dynamic_cast<Authenticator*>(nullptr), std::vector<InternetAddress*>
                                                {
                                                    new InternetAddress(from)
                                                }, std::vector<InternetAddress*>
                                                {
                                                    new InternetAddress(to)
                                                }, JavaBoxes::unbox<std::vector<InternetAddress*>>(nullptr), JavaBoxes::unbox<std::vector<InternetAddress*>>(nullptr), subject, mimeBodyParts);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "emailConstructor", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(MessagingException.constructor)
            
    auto Email::init(std::string server, Authenticator* authenticator, std::vector<InternetAddress*> addresses_from, std::vector<InternetAddress*> addresses_to, std::vector<InternetAddress*> addresses_cc, std::vector<InternetAddress*> addresses_bcc, std::string subject, std::vector<MimeBodyPart*> mimeBodyParts) -> void{
this->properties= new Properties();
    
this->properties->put(Email::SMTP_HOST, server);
    

        try {
            
    std::string hostName = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(StringValidationUtil::getInstance()->isEmpty(hostName))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->putF("Unable to get HostName so using fake", this, "init()");
    

                                    }
                                
this->properties->put(Email::SMTP_LOCAL_HOST, "FakeHostName");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put("Continuing on Exception: Unable to get HostName", this, "init()", &e);
    

                                    }
                                
this->properties->put(Email::SMTP_LOCAL_HOST, "FakeHostName");
    
}


                        if(this->isDebug)
                        
                                    {
                                    this->properties->put(Email::DEBUG, "true");
    

                                    }
                                

    Session* session = Session::getInstance(this->properties, authenticator);;
    

                        if(this->isDebug)
                        
                                    {
                                    session->setDebug(true);
    
this->bs= new ByteArrayOutputStream();
    

    PrintStream* printStream = new PrintStream(this->bs);;
    
session->setDebugOut(printStream);
    

                                    }
                                
this->msg= new MimeMessage(session);
    
this->msg->addFrom(addresses_from);
    
this->msg->setRecipients(Message::RecipientType->TO, addresses_to);
    
this->msg->setRecipients(Message::RecipientType->CC, addresses_cc);
    
this->msg->setRecipients(Message::RecipientType->BCC, addresses_bcc);
    
this->msg->setSubject(subject);
    

    MimeMultipart* mimeMultipart = new MimeMultipart();;
    




                        for (
    int32_t i = 0;i < mimeBodyParts.size(); i++)
        {
mimeMultipart->addBodyPart(mimeBodyParts[i]);
    
}

this->msg->setContent(mimeMultipart);
    
}


    auto Email::getMimeMessage() -> MimeMessage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->msg;
    
}


    auto Email::getDebugInfo() -> std::string{

                        if(this->isDebug)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf("More Logging Before This To Standard Out: ") +JavaString::valueOf(
                                    //Otherwise - right - ObjectCreationExpr
);
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Debugging Is Off";
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto Email::log() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf("\nHashMap: ") +JavaString::valueOf(this->toHashMap()->toString());
    
}


                //@Throws(Exception.constructor)
            
    auto Email::toHashMap() -> HashMap<Object*, Object*>*{

        try {
            
    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(EmailData::SERVER, JavaBoxes::unbox<std::string>(this->properties->get(Email::SMTP_HOST)));
    

    std::vector<Address*> addresses = this->msg->getFrom();;
    

                        if(!addresses.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap->put(EmailData::FROM, addresses[index]->toString());
    
}


                                    }
                                
addresses= this->msg->getRecipients(Message::RecipientType->TO);
    

                        if(!addresses.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap->put(EmailData::TO, addresses[index]->toString());
    
}


                                    }
                                
addresses= this->msg->getRecipients(Message::RecipientType->CC);
    

                        if(!addresses.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap->put(EmailData::CC, addresses[index]->toString());
    
}


                                    }
                                
addresses= this->msg->getRecipients(Message::RecipientType->BCC);
    

                        if(!addresses.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < addresses.size(); index++)
        {
hashMap->put(EmailData::BCC, addresses[index]->toString());
    
}


                                    }
                                
hashMap->put(EmailData::SUBJECT, this->msg->getSubject());
    

    MimeMultipart* mimeMultipart = dynamic_cast<MimeMultipart*>(msg->getContent());;
    

                        if(mimeMultipart != 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < mimeMultipart->getCount(); index++)
        {

    std::string content = JavaBoxes::unbox<std::string>(mimeMultipart->getBodyPart(index)->getContent());;
    
hashMap->put(EmailData::CONTENT, content);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->EMAILLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "toHashMap()", &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto Email::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNameValueNodes(document, EmailData::NAME, this->toHashMap());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto Email::toXmlDoc() -> Document*{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EMAIL_CPP
