
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
        



        #ifndef ADMIN_TAGHELPERS_ORDERHISTORYHELPER_H
        #define ADMIN_TAGHELPERS_ORDERHISTORYHELPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class PageContext;
class Portion;
class OrderHistoryEntityFactory;
class LogUtil;
class AbSqlTableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "admin/taghelpers/BasicTable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OrderHistoryHelper: public BasicTable {

    /*protected*/ public: LogUtil* logUtil;

    private: Portion* portion;

public: OrderHistoryHelper(HashMap<Object*, Object*>* hashMap, PageContext* pageContext);

    public: std::string drop();

    public: std::string create();

    public: std::string restore();

    public: std::string backup();

};

            


        #endif //ADMIN_TAGHELPERS_ORDERHISTORYHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ADMIN_TAGHELPERS_ORDERHISTORYHELPER_H_COMPLETE)
        #define ADMIN_TAGHELPERS_ORDERHISTORYHELPER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/jsp/PageContext.h>)
#include <javax/servlet/jsp/PageContext.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>)
#include <org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlTableUtil.h>)
#include <org/allbinary/logic/communication/sql/AbSqlTableUtil.h>
#endif
#if __has_include("admin/taghelpers/BasicTable.h")
#include "admin/taghelpers/BasicTable.h"
#endif

        #endif
    
