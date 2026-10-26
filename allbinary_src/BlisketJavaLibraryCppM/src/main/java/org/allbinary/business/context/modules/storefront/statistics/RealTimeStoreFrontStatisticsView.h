
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsView.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsView.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleFactory.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StoreFrontStatisticsInterface.h"
#include "StoreFrontStatisticsData.h"

class RealTimeStoreFrontStatisticsView
            : public Object
        : public DomNodeInterface {

    private: StoreFrontStatisticsInterface storeFrontStatisticsInterface;

    private: UserRole userRole;

public: RealTimeStoreFrontStatisticsView(StoreFrontStatisticsInterface storeFrontStatisticsInterface, UserRole userRole);

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_MODULES_STOREFRONT_STATISTICS_REALTIMESTOREFRONTSTATISTICSVIEW_H
