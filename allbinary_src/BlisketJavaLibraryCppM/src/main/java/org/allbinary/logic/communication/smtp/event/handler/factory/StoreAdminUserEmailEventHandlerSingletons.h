
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_H

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
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

    private: static StoreAdminUserEmailEventHandlerSingletons instance() { return StoreAdminUserEmailEventHandlerSingletons(); }

    public: static StoreAdminUserEmailEventHandlerSingletons getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const HashMap<any, any> userEmailEventHandlerHashMap = HashMap<any, any>();

private: StoreAdminUserEmailEventHandlerSingletons();

                //@Throws(Exception.constructor)
            
    public: UserEmailEventHandler getInstance(UserEmailEventNameData userEmailEventNameData, AbeClientInformationInterface abeClientInformation, StoreFrontInterface storeFrontInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_EVENT_HANDLER_FACTORY_STOREADMINUSEREMAILEVENTHANDLERSINGLETONS_H
