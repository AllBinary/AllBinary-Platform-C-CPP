
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/EmailEventHandlerUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto StoreAdminUserEmailEventHandlerSingletons::instance_owner() -> StoreAdminUserEmailEventHandlerSingletons* { static std::unique_ptr<StoreAdminUserEmailEventHandlerSingletons> value(new StoreAdminUserEmailEventHandlerSingletons()); return value.get(); }
StoreAdminUserEmailEventHandlerSingletons* StoreAdminUserEmailEventHandlerSingletons::instance = StoreAdminUserEmailEventHandlerSingletons::instance_owner();

    auto StoreAdminUserEmailEventHandlerSingletons::getInstance() -> StoreAdminUserEmailEventHandlerSingletons*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StoreAdminUserEmailEventHandlerSingletons::instance;
    
}


StoreAdminUserEmailEventHandlerSingletons::StoreAdminUserEmailEventHandlerSingletons() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), userEmailEventHandlerHashMap(StdUtil::getInstance()->createHashMap()){

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto StoreAdminUserEmailEventHandlerSingletons::getInstance(UserEmailEventNameData* userEmailEventNameData, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) -> UserEmailEventHandler*{

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler* userEmailEventHandler = dynamic_cast<UserEmailEventHandler*>(this->userEmailEventHandlerHashMap->get(userEmailEventNameData));;
    

                        if(userEmailEventHandler == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Creating New Named UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    BasicArrayList* userVector = UserEntityFactory::getInstance()->getStoreManagers(storeFrontInterface);;
    

    UserEmailEventHandler* newUserEmailEventHandler = EmailEventHandlerUtil::getInstance()->getEventHandler(abeClientInformation, userEmailEventNameData, userVector);;
    
this->userEmailEventHandlerHashMap->put(userEmailEventNameData, newUserEmailEventHandler);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newUserEmailEventHandler;
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Returning existing UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return userEmailEventHandler;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_CPP
