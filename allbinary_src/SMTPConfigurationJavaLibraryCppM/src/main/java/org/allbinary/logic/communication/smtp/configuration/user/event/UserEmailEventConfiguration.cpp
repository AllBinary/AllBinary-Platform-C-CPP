
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"

class UserEmailEventConfiguration
            : public Object
        , public UserEmailEventConfigurationInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string name;

    private: std::string eventListenerClassPath;

public: UserEmailEventConfiguration(){
this->setName(StringUtil::getInstance()->EMPTY_STRING);
    
this->setEventListenerClassPath(StringUtil::getInstance()->EMPTY_STRING);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("New", this, " Constructor");
    

                                    }
                                
}


public: UserEmailEventConfiguration(HashMap<Object*, Object*>* hashMap){
this->setName(hashMap->get(UserEmailEventConfigurationData::NAME));
    
this->setEventListenerClassPath(hashMap->get(UserEmailEventConfigurationData::LISTENER_CLASSPATH));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Log: " +this->log(), this, " Constructor");
    

                                    }
                                
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->name= name;
    
}


    public: std::string getEventListenerClassPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventListenerClassPath;
    
}


    public: void setEventListenerClassPath(std::string eventListenerClassPath){
this->eventListenerClassPath= eventListenerClassPath;
    
}


    public: std::string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "\nUser Email Event Log Info:" +"\nName: " +this->getName() +"\nEventListenerClassPath: " +this->getEventListenerClassPath();
    
}


};

            

