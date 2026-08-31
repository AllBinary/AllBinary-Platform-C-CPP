
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

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EmailInterface.h"
#include "Email.h"

class AbEmail
            : public Object
        : public EmailInterface {
        

    private: email: Email;

public constructor (string server, string from, string to, string subject, string textBody, string htmlAttachment, string contentBase){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGINGERROR))
                        
                                    {
                                    this.email= new Email(from, to, subject, server, textBody, htmlAttachment, contentBase, true);
    

                                    }
                                
                        else {
                            this.email= new Email(from, to, subject, server, textBody, htmlAttachment, contentBase);
    

                        }
                            
}


    public MimeMessage getMimeMessage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.getMimeMessage();;
    
}


    public string getDebugInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.getDebugInfo();;
    
}


                //@Throws(Exception.constructor)
            
    public string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.log();;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.toHashMap();;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.toXmlNode(document);;
    
}


    public Email getEmail(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email as Email;
    
}


                //@Throws(Exception.constructor)
            
    public Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.email.toXmlDoc();;
    
}


};

            

