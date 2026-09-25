
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
        



        #ifndef ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H
        #define ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H

            #include "../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>

      
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ModifyTable.h"
//TWB - Am I missing the correct Quote Request? Probably not
class QuoteRequestHelper: public ModifyTable {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: WeblisketSession weblisketSession;

    private: StoreFrontInterface storeFrontInterface;

    private: QuoteRequest quoteRequest;

public: QuoteRequestHelper(HashMap<any, any> hashMap, PageContext pageContext);

    public: Boolean isValid();

    public: std::string validationInfo();

    public: std::string insert();

    public: std::string update();

    public: std::string delete_();

};

            


        #endif //ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H
