
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
        



        #ifndef ADMIN_TAGHELPERS_QUOTEHELPER_H
        #define ADMIN_TAGHELPERS_QUOTEHELPER_H

            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/UserEntityFactory.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntity.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/StoreAdminUserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/event/handler/factory/UserEmailEventHandlerSingletons.h>

      
#include <org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/EmailInfo.h>

      
#include <org/allbinary/logic/communication/smtp/info/StoreEmailInfo.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTable.h"

class QuoteHelper: public BasicTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

    private: WeblisketSession weblisketSession;

    private: const StoreFrontInterface storeFrontInterface;

    private: Portion portion;

public: QuoteHelper(HashMap<any, any> hashMap, PageContext pageContext);

                //@Throws(Exception.constructor)
            
    private: void emailUser(QuoteRequest quoteRequest);

                //@Throws(Exception.constructor)
            
    private: void emailAdmins(QuoteRequest quoteRequest);

                //@Throws(Exception.constructor)
            
    public: std::string email();

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_QUOTEHELPER_H
