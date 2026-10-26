
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
        



            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailConfigurationInterface.h"

class UserEmailConfiguration
            : public Object
        : public UserEmailConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface;

public: UserEmailConfiguration(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setUserEmailEventsConfigurationInterface(UserEmailEventsConfiguration());
    
}


public: UserEmailConfiguration(HashMap<Object*, Object*> hashMap){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
this->setUserEmailEventsConfigurationInterface(UserEmailEventsConfiguration(hashMap));
    
}


    public: UserEmailEventsConfigurationInterface getUserEmailEventsConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userEmailEventsConfigurationInterface;
    
}


    public: void setUserEmailEventsConfigurationInterface(UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface){
this->userEmailEventsConfigurationInterface= userEmailEventsConfigurationInterface;
    
}


};

            

