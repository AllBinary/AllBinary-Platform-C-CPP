
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicEmailInfo
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: subject: string;

    private: textBody: string;

    emailServerConfigurationInterface: EmailServerConfigurationInterface;

public constructor (string subject, string textBody){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(commonStrings!.START, this, commonStrings!.CONSTRUCTOR);
    

                                    }
                                
this.subject= subject;
    
this.textBody= textBody;
    
}


    public string getSubject(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.subject;
    
}


    public string getTextBody(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.textBody;
    
}


    public EmailServerConfigurationInterface getEmailServerConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.emailServerConfigurationInterface;
    
}


    public setEmailServerConfigurationInterface(EmailServerConfigurationInterface emailServerConfigurationInterface){
this.emailServerConfigurationInterface= emailServerConfigurationInterface;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.getEmailServerConfigurationInterface()!.toString());
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
stringBuffer!.append("Subject: \n");
    
stringBuffer!.append(this.getSubject());
    
stringBuffer!.append("\nText Body: \n");
    
stringBuffer!.append(this.getTextBody());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


                //@Throws(Exception.constructor)
            
    init(){



                            throw new RuntimeException();
                    
}


};

            

