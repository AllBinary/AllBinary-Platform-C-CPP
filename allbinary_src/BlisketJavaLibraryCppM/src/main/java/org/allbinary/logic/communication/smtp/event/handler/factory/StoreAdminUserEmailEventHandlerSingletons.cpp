
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StoreAdminUserEmailEventHandlerSingletons
            : public Object
         {

    private: static StoreAdminUserEmailEventHandlerSingletons* instance() { static std::unique_ptr<StoreAdminUserEmailEventHandlerSingletons> value(new StoreAdminUserEmailEventHandlerSingletons()); return value.get(); }

    public: static StoreAdminUserEmailEventHandlerSingletons* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreAdminUserEmailEventHandlerSingletons::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: HashMap<Object*, Object*>* userEmailEventHandlerHashMap = StdUtil::getInstance()->createHashMap();

private: StoreAdminUserEmailEventHandlerSingletons(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler* getInstance(UserEmailEventNameData* userEmailEventNameData, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    UserEmailEventHandler* userEmailEventHandler = dynamic_cast<UserEmailEventHandler*>(this->userEmailEventHandlerHashMap->get(userEmailEventNameData));;
    

                        if(userEmailEventHandler == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
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
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->EMAILLOGGING))
                        
                                    {
                                    this->logUtil->putF("Returning existing UserEmailEventHandler", this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return userEmailEventHandler;
    

                        }
                            
}


};

            

