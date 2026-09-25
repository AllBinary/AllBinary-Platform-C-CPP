
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventsConfigurationInterface.h"
#include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventListenerFactory.h"

class UserEmailEventsConfiguration
            : public Object
        : public UserEmailEventsConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> emailEventHashMap;

public: UserEmailEventsConfiguration(){
this->init();
    
}


public: UserEmailEventsConfiguration(HashMap<any, any> hashMap){
this->init();
    
}


    private: void init(){
this->emailEventHashMap= StdUtil::getInstance().createHashMap();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, " Constructor");
    

                                    }
                                
}


    public: HashMap<any, any> getEventConfigurationHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->emailEventHashMap;
    
}


    public: void addUserEmailEventConfiguration(UserEmailEventConfigurationInterface userEmailEventConfigurationInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Adding: " +userEmailEventConfigurationInterface.log(), this, "addUserEmailEventConfiguration");
    

                                    }
                                
this->emailEventHashMap.put(userEmailEventConfigurationInterface.getName(), userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: UserEmailEventListenerInterface getEventListener(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface){

    UserEmailEventConfigurationInterface userEmailEventConfigurationInterface = this->emailEventHashMap.get(userEmailEventNameData.toString()) as UserEmailEventConfigurationInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventListenerFactory::getInstance(abeClientInformation, userEmailEventConfigurationInterface, userInterface);;
    
}


};

            

