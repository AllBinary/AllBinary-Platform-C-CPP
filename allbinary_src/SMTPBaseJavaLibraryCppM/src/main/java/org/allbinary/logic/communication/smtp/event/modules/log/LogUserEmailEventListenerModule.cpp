
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/EmailEvent.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LogUserEmailEventListenerModule
            : public Object
        : public UserEmailEventListenerInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: LogUserEmailEventListenerModule(){
}


                //@Throws(Exception.constructor)
            
    public: void onEmailSendRequest(EmailEvent userEmailInfoEvent){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    
    std::string message = "Logging EmailEvent - Temporary Listener for debugging.\n\n" +userEmailInfoEvent.toString();;
    
this->logUtil.putF(message, this, "onEmailSendRequest");
    

                                    }
                                
}


};

            

