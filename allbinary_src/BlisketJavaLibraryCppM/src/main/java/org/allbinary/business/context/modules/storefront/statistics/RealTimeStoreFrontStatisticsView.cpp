
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
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
        

    private: const storeFrontStatisticsInterface: StoreFrontStatisticsInterface;

    private: const userRole: UserRole;

public constructor (StoreFrontStatisticsInterface storeFrontStatisticsInterface, UserRole userRole){

            super();
        this.storeFrontStatisticsInterface= storeFrontStatisticsInterface;
    
this.userRole= userRole;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    node: Node = document.createElement(StoreFrontStatisticsData.getInstance()!.NAME)!;;
    

    storeFrontAdvertisementsStatisticsInterface: StoreFrontAdvertisementsStatisticsInterface = this.storeFrontStatisticsInterface!.getAdvertisements()!;;
    

    storeFrontAdvertisementsStatisticsDomNodeInterface: DomNodeInterface = new StoreFrontAdvertisementsStatisticsView(storeFrontAdvertisementsStatisticsInterface);;
    
node.appendChild(storeFrontAdvertisementsStatisticsDomNodeInterface!.toXmlNode(document));
    

    storeFrontInventoryStatisticsInterface: StoreFrontInventoryStatisticsInterface = this.storeFrontStatisticsInterface!.getInventory()!;;
    

    storeFrontInventoryStatisticsDomNodeInterface: DomNodeInterface = new StoreFrontInventoryStatisticsView(storeFrontInventoryStatisticsInterface);;
    
node.appendChild(storeFrontInventoryStatisticsDomNodeInterface!.toXmlNode(document));
    

    storeFrontOrdersHistoryStatisticsInterface: StoreFrontOrdersHistoryStatisticsInterface = this.storeFrontStatisticsInterface!.getOrders()!;;
    

    storeFrontOrdersHistoryStatisticsDomNodeInterface: DomNodeInterface = new StoreFrontOrdersHistoryStatisticsView(storeFrontOrdersHistoryStatisticsInterface);;
    
node.appendChild(storeFrontOrdersHistoryStatisticsDomNodeInterface!.toXmlNode(document));
    

                        if(this.userRole == UserRoleFactory.getInstance()!.ADMINISTRATOR)
                        
                                    {
                                    
    storeFrontUsersStatisticsInterface: StoreFrontUsersStatisticsInterface = this.storeFrontStatisticsInterface!.getUsers()!;;
    

    storeFrontUsersStatisticsDomNodeInterface: DomNodeInterface = new StoreFrontUsersStatisticsView(storeFrontUsersStatisticsInterface);;
    
node.appendChild(storeFrontUsersStatisticsDomNodeInterface!.toXmlNode(document));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

