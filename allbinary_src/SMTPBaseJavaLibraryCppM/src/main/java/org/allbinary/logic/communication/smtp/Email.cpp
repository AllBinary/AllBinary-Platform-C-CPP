
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

public constructor (string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase){

            super();
        this.isDebug= false;
    
this.init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


public constructor (string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase, bool isDebug){

            super();
        this.isDebug= isDebug;
    
this.init(from, to, subject, server, textBody, htmlAttachment, contentBase);
    
}


                //@Throws(Exception.constructor)
            
    public init(string from, string to, string subject, string server, string textBody, string htmlAttachment, string contentBase){

        try {
            
    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

    mimeBodyParts: std::vector<MimeBodyPart> = new Array(
                            //Otherwise - levels - level - dimension - ConditionalExpr
);;
    
mimeBodyParts[0]= new MimeBodyPart();
    
mimeBodyParts[0]!.setText(textBody);
    

                        if(!stringValidationUtil!.isEmpty(htmlAttachment))
                        
                                    {
                                    
    internetHeaders: InternetHeaders = new InternetHeaders();;
    
internetHeaders!.addHeader("Content-Type", "text/html");
    

                        if(!stringValidationUtil!.isEmpty(contentBase))
                        
                                    {
                                    internetHeaders!.addHeader("Content-Base", contentBase);
    

                                    }
                                
mimeBodyParts[1]= new MimeBodyPart(internetHeaders, htmlAttachment!.getBytes());
    

                                    }
                                
this.init(server, nullptr as Authenticator, 
                                                [
                                                    new InternetAddress(from)
                                                ], 
                                                [
                                                    new InternetAddress(to)
                                                ], nullptr as InternetAddress[], nullptr as InternetAddress[], subject, mimeBodyParts);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "emailConstructor", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(MessagingException.constructor)
            
    public init(string server, Authenticator authenticator, std::vector<InternetAddress> addresses_from, std::vector<InternetAddress> addresses_to, std::vector<InternetAddress> addresses_cc, std::vector<InternetAddress> addresses_bcc, string subject, std::vector<MimeBodyPart> mimeBodyParts){
this.properties= new Properties();
    
this.properties.put(Email.SMTP_HOST, server);
    

        try {
            
    hostName: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(StringValidationUtil.getInstance()!.isEmpty(hostName))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.putF("Unable to get HostName so using fake", this, "init()");
    

                                    }
                                
this.properties.put(Email.SMTP_LOCAL_HOST, "FakeHostName");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put("Continuing on Exception: Unable to get HostName", this, "init()", e);
    

                                    }
                                
this.properties.put(Email.SMTP_LOCAL_HOST, "FakeHostName");
    
}


                        if(this.isDebug)
                        
                                    {
                                    this.properties.put(Email.DEBUG, "true");
    

                                    }
                                

    session: Session = Session.getInstance(this.properties, authenticator)!;;
    

                        if(this.isDebug)
                        
                                    {
                                    session.setDebug(true);
    
this.bs= new ByteArrayOutputStream();
    

    printStream: PrintStream = new PrintStream(this.bs);;
    
session.setDebugOut(printStream);
    

                                    }
                                
this.msg= new MimeMessage(session);
    
this.msg.addFrom(addresses_from);
    
this.msg.setRecipients(Message.RecipientType.TO, addresses_to);
    
this.msg.setRecipients(Message.RecipientType.CC, addresses_cc);
    
this.msg.setRecipients(Message.RecipientType.BCC, addresses_bcc);
    
this.msg.setSubject(subject);
    

    mimeMultipart: MimeMultipart = new MimeMultipart();;
    




                        for (
    i: int32_t = 0;i < mimeBodyParts!.length; i++)
        {
mimeMultipart!.addBodyPart(mimeBodyParts[i]!);
    
}

this.msg.setContent(mimeMultipart);
    
}


    public MimeMessage getMimeMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.msg;
    
}


    public string getDebugInfo(){

                        if(this.isDebug)
                        
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
            
    public string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "\nHashMap: " +this.toHashMap()!.toString();
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

        try {
            
    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(EmailData.SERVER, this.properties.get(Email.SMTP_HOST) as string);
    

    addresses: std::vector<Address> = this.msg.getFrom()!;;
    

                        if(addresses != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < addresses.length; index++)
        {
hashMap!.put(EmailData.FROM, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this.msg.getRecipients(Message.RecipientType.TO);
    

                        if(addresses != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < addresses.length; index++)
        {
hashMap!.put(EmailData.TO, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this.msg.getRecipients(Message.RecipientType.CC);
    

                        if(addresses != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < addresses.length; index++)
        {
hashMap!.put(EmailData.CC, addresses[index]!.toString());
    
}


                                    }
                                
addresses= this.msg.getRecipients(Message.RecipientType.BCC);
    

                        if(addresses != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < addresses.length; index++)
        {
hashMap!.put(EmailData.BCC, addresses[index]!.toString());
    
}


                                    }
                                
hashMap!.put(EmailData.SUBJECT, this.msg.getSubject());
    

    mimeMultipart: MimeMultipart = msg.getContent() as MimeMultipart;;
    

                        if(mimeMultipart != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < mimeMultipart!.getCount(); index++)
        {

    content: string = mimeMultipart!.getBodyPart(index)!.getContent() as string;;
    
hashMap!.put(EmailData.CONTENT, content);
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "toHashMap()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = ModDomHelper.createNameValueNodes(document, EmailData.NAME, this.toHashMap())!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){



                            throw new Exception(CommonStrings.getInstance()!.NOT_IMPLEMENTED);
                    
}


};

            

