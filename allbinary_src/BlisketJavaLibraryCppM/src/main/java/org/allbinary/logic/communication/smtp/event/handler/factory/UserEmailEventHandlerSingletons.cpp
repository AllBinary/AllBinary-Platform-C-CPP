
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_USEREMAILEVENTHANDLERSINGLETONS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_USEREMAILEVENTHANDLERSINGLETONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/modules/log/LogUserEmailEventListenerModule.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto UserEmailEventHandlerSingletons::instance_owner() -> UserEmailEventHandlerSingletons* { static std::unique_ptr<UserEmailEventHandlerSingletons> value(new UserEmailEventHandlerSingletons()); return value.get(); }
UserEmailEventHandlerSingletons* UserEmailEventHandlerSingletons::instance = UserEmailEventHandlerSingletons::instance_owner();

    auto UserEmailEventHandlerSingletons::getInstance() -> UserEmailEventHandlerSingletons*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventHandlerSingletons::instance;
    
}


UserEmailEventHandlerSingletons::UserEmailEventHandlerSingletons() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), userEmailEventHandlerHashMap(StdUtil::getInstance()->createHashMap()){

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto UserEmailEventHandlerSingletons::getInstance(AbeClientInformationInterface* abeClientInformation, UserEmailEventNameData* userEmailEventNameData, UserInterface* userInterface) -> UserEmailEventHandler*{

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler* userEmailEventHandler = dynamic_cast<UserEmailEventHandler*>(this->userEmailEventHandlerHashMap->get(userEmailEventNameData));;
    

                        if(userEmailEventHandler == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Creating New Named UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler* newUserEmailEventHandler = new UserEmailEventHandler();;
    

    BasicArrayList* vector = EmailEventHandlerUtil::getUserEmailEventListenerVector(abeClientInformation, userEmailEventNameData, userInterface);;
    
newUserEmailEventHandler->addListener(vector);
    
newUserEmailEventHandler->addListener(new LogUserEmailEventListenerModule());
    
this->userEmailEventHandlerHashMap->put(userEmailEventNameData, newUserEmailEventHandler);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newUserEmailEventHandler;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Returning existing UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userEmailEventHandler;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_USEREMAILEVENTHANDLERSINGLETONS_CPP
