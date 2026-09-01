
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventHandler.h"

class EmailEventHandlerUtil
            : public Object
         {

    private: static EmailEventHandlerUtil instance() { return EmailEventHandlerUtil(); }

    public: static EmailEventHandlerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EmailEventHandlerUtil::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: static Vector getUserEmailEventListenerVector(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface){

    UserConfigurationInterface userConfigurationInterface = userInterface.getUserConfigurationInterface();;
    

    UserEmailConfigurationInterface userEmailConfigurationInterface = userConfigurationInterface.getUserEmailConfigurationInterface();;
    

    UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface = userEmailConfigurationInterface.getUserEmailEventsConfigurationInterface();;
    

    UserEmailEventListenerInterface userEmailEventListenerInterface = userEmailEventsConfigurationInterface.getEventListener(abeClientInformation, userEmailEventNameData, userInterface);;
    

    Vector vector = Vector();;
    
vector.add(userEmailEventListenerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: EmailEventHandlerUtil(){
}


                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler getEventHandler(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, Vector userVector){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Returning UserEmailEventHandler for ");
    
stringBuffer.appendint(userVector.length);
    
stringBuffer.append(" users.");
    
this->logUtil.putF(stringBuffer.toString(), this, "getEventHandler");
    

                                    }
                                

    UserEmailEventHandler userEmailEventHandler = UserEmailEventHandler();;
    
userEmailEventHandler.addListener(LogUserEmailEventListenerModule());
    

    int32_t size = userVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    UserInterface userInterface = userVector.get(index) as UserInterface;;
    

    Vector vector = EmailEventHandlerUtil::getUserEmailEventListenerVector(abeClientInformation, userEmailEventNameData, userInterface);;
    
userEmailEventHandler.addListener(vector);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userEmailEventHandler;
    
}


};

            

