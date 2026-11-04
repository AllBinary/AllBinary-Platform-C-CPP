
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;

class HttpServletRequest;
class PageContext;
class StoreFrontData;
class StoreFrontFactory;
class StoreFrontInterface;
class QuoteRequest;
class QuoteRequestEntityFactory;
class WeblisketSession;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/ModifyTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TWB - Am I missing the correct Quote Request? Probably not
class QuoteRequestHelper: public ModifyTable {

    /*protected*/ public: LogUtil* logUtil;

    private: WeblisketSession* weblisketSession;

    private: StoreFrontInterface* storeFrontInterface;

    private: QuoteRequest* quoteRequest;

public: QuoteRequestHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: bool isValid();

    public: std::string validationInfo();

    public: std::string insert();

    public: std::string update();

    public: std::string delete_();

};

            


        #endif //ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_QUOTEREQUESTHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/quoterequest/QuoteRequest.h>)
#include <org/allbinary/business/user/quoterequest/QuoteRequest.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>)
#include <org/allbinary/data/tables/user/quoterequest/QuoteRequestEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSession.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("admin/taghelpers/ModifyTable.h")
#include "admin/taghelpers/ModifyTable.h"
#endif

        #endif
    
