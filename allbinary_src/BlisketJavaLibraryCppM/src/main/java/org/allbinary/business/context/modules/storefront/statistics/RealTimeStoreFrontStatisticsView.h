
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class StoreFrontAdvertisementsStatisticsInterface;
class StoreFrontAdvertisementsStatisticsView;
class StoreFrontInventoryStatisticsInterface;
class StoreFrontInventoryStatisticsView;
class StoreFrontOrdersHistoryStatisticsInterface;
class StoreFrontOrdersHistoryStatisticsView;
class StoreFrontUsersStatisticsInterface;
class StoreFrontUsersStatisticsView;
class UserRole;
class UserRoleFactory;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class StoreFrontStatisticsInterface;
class StoreFrontStatisticsData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RealTimeStoreFrontStatisticsView
            : public virtual Object
        , public virtual DomNodeInterface {

    private: StoreFrontStatisticsInterface* storeFrontStatisticsInterface;

    private: UserRole* userRole;

public: RealTimeStoreFrontStatisticsView(StoreFrontStatisticsInterface* storeFrontStatisticsInterface, UserRole* userRole);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsView.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsView.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsView.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsView.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsView.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsView.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h>)
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleFactory.h>)
#include <org/allbinary/business/user/role/UserRoleFactory.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsInterface.h")
#include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsInterface.h"
#endif
#if __has_include("org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsData.h")
#include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsData.h"
#endif

        #endif
    
